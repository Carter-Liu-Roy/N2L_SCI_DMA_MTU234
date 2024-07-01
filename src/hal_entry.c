/***********************************************************************************************************************
 * Copyright [2020-2023] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software and documentation are supplied by Renesas Electronics Corporation and/or its affiliates and may only
 * be used with products of Renesas Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.
 * Renesas products are sold pursuant to Renesas terms and conditions of sale.  Purchasers are solely responsible for
 * the selection and use of Renesas products and Renesas assumes no liability.  No license, express or implied, to any
 * intellectual property right is granted by Renesas.  This software is protected under all applicable laws, including
 * copyright laws. Renesas reserves the right to change or discontinue this software and/or this documentation.
 * THE SOFTWARE AND DOCUMENTATION IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND
 * TO THE FULLEST EXTENT PERMISSIBLE UNDER APPLICABLE LAW, DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY,
 * INCLUDING WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE
 * SOFTWARE OR DOCUMENTATION.  RENESAS SHALL HAVE NO LIABILITY ARISING OUT OF ANY SECURITY VULNERABILITY OR BREACH.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE OR
 * DOCUMENTATION (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER,
 * INCLUDING, WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY
 * LOST PROFITS, OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

#include "hal_data.h"

void R_BSP_WarmStart(bsp_warm_start_event_t event) BSP_PLACE_IN_SECTION(".warm_start");

extern bsp_leds_t g_bsp_leds;

#define R_FAC_SCI(x)  (((x)==0)?(R_SCI3):(R_SCI4))
#define FAC_DEAST_VAL           (3)
#define FAC_DENGT_VAL           (3)

uint8_t FA_sendBuf = 0x03;
uint8_t FA_recBuf[6];

extern transfer_info_t g_transfer0_info,g_transfer1_info;
/*******************************************************************************************************************//**
 * @brief  Blinky example application
 *
 * Blinks all leds at a rate of 1 second using the software delay function provided by the BSP.
 *
 **********************************************************************************************************************/
void hal_entry (void)
{
    fsp_err_t err;
    /* Define the units to be used with the software delay function */
    const bsp_delay_units_t bsp_delay_units = BSP_DELAY_UNITS_MILLISECONDS;

    /* Set the blink frequency (must be <= bsp_delay_units */
    const uint32_t freq_in_hz = 2;

    /* Calculate the delay in terms of bsp_delay_units */
    const uint32_t delay = bsp_delay_units / freq_in_hz;

    /* LED type structure */
    bsp_leds_t leds = g_bsp_leds;
    
    /* Open the transfer instance with initial configuration. */
    err = R_SCI_UART_Open(&g_uart0_ctrl, &g_uart0_cfg);

    /* FA-encoder use */
    err = R_SCI_UART_Open(&g_uart1_ctrl, &g_uart1_cfg);
    R_BSP_IrqDisable(VECTOR_NUMBER_SCI1_RXI);
    R_BSP_IrqDisable(VECTOR_NUMBER_SCI1_TEI);
    R_BSP_IrqDisable(VECTOR_NUMBER_SCI1_TXI);
    
    R_SCI1->CCR3_b.DEN = 1;
    R_SCI1->DCR_b.DEAST = 3;
    R_SCI1->DCR_b.DENGT = 3;
    
    R_DMAC_Open(&g_transfer0_ctrl, &g_transfer0_cfg);

    transfer_info_t transfer_info_2 = g_transfer0_info;
    /* DAM Initalization */
    transfer_info_2.p_src = &FA_sendBuf;//(void const * volatile)&(g_uart0_ctrl.p_reg->RDR);
    transfer_info_2.p_dest = (void  * volatile)&(g_uart1_ctrl.p_reg->TDR);
    transfer_info_2.length = 1;
    R_DMAC_Reconfigure(&g_transfer0_ctrl, &transfer_info_2);  
    
    R_DMAC_Open(&g_transfer1_ctrl, &g_transfer1_cfg);
    transfer_info_t transfer_info_3 = g_transfer1_info;
    /* DAM Initalization */
    transfer_info_3.p_src = (void const * volatile)&(g_uart1_ctrl.p_reg->RDR);
    transfer_info_3.p_dest =  &FA_recBuf;//
    transfer_info_3.length = 6;
    R_DMAC_Reconfigure(&g_transfer1_ctrl, &transfer_info_3);  
    /* Open Timer instance with initial configuration. */
    err = R_GPT_Open(&g_timer0_ctrl, &g_timer0_cfg);

 
    R_MTU3_THREE_PHASE_Open(&g_three_phase0_ctrl, &g_three_phase0_cfg);
    
    R_MTU3_Open(&g_mtu3ch2_ctrl, &g_mtu3ch2_cfg);
    
    R_MTU3_THREE_PHASE_Start(&g_three_phase0_ctrl);
    R_BSP_IrqDisable(VECTOR_NUMBER_TGIA2);
    R_BSP_IrqDisable(VECTOR_NUMBER_TCIV2);
    //R_BSP_IrqDisable(VECTOR_NUMBER_DMAC0_INT0);
    
    __enable_irq();
    
    
    while (1)
    {
        /* Toggle board LEDs */
        for (uint32_t i = 0; i < leds.led_count; i++)
        {
            R_BSP_PinToggle(BSP_IO_REGION_SAFE, (bsp_io_port_pin_t) leds.p_leds[i]);
        }

        /* Delay */
        R_BSP_SoftwareDelay(delay, bsp_delay_units);
    }
}
void g_dma_rec_end(dmac_callback_args_t * p_args){

    transfer_info_t transfer_info_2 = g_transfer0_info;
    /* DAM Initalization */
    transfer_info_2.p_src = (void const * volatile)&(g_uart1_ctrl.p_reg->RDR);
    transfer_info_2.p_dest =  &FA_recBuf;//
    transfer_info_2.length = 6;
    R_DMAC_Reconfigure(&g_transfer1_ctrl, &transfer_info_2);  
    
    
}

void g_dma_send_end(dmac_callback_args_t * p_args){

    transfer_info_t transfer_info_2 = g_transfer0_info;
    /* DAM Initalization */
    transfer_info_2.p_src = &FA_sendBuf;//(void const * volatile)&(g_uart0_ctrl.p_reg->RDR);
    transfer_info_2.p_dest = (void  * volatile)&(g_uart1_ctrl.p_reg->TDR);
    transfer_info_2.length = 1;
    R_DMAC_Reconfigure(&g_transfer0_ctrl, &transfer_info_2);  
    
    
}

void fac_gpt0_isr(timer_callback_args_t * p_args){


}

void g_mtu3ch2_captureA(timer_callback_args_t * p_args){
//R_SCI_UART_Write(&g_uart1_ctrl, "3", 1);
  R_BSP_PinToggle(BSP_IO_REGION_SAFE, BSP_IO_PORT_23_PIN_7);
}

void g_mtu3ch3_ovf(timer_callback_args_t * p_args){


}

void user_uart_callback(uart_callback_args_t * p_args){


}

void fa_uart_callback(uart_callback_args_t * p_args){

  switch (p_args->event){
  case UART_EVENT_TX_COMPLETE:
  
  break;
  case UART_EVENT_RX_COMPLETE:
  
  break; 
  
  }
  
}
/*******************************************************************************************************************//**
 * This function is called at various points during the startup process.  This implementation uses the event that is
 * called right before main() to set up the pins.
 *
 * @param[in]  event    Where at in the start up process the code is currently at
 **********************************************************************************************************************/
void R_BSP_WarmStart (bsp_warm_start_event_t event)
{
    if (BSP_WARM_START_RESET == event)
    {
        /* Pre clock initialization */
    }

    if (BSP_WARM_START_POST_C == event)
    {
        /* C runtime environment and system clocks are setup. */

        /* Configure pins. */
        R_IOPORT_Open(&g_ioport_ctrl, &g_bsp_pin_cfg);
    }
}
