/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_poe3.h"
#include "r_poe3_api.h"
#include "r_dmac.h"
#include "r_transfer_api.h"
#include "r_gpt.h"
#include "r_timer_api.h"
#include "r_mtu3.h"
#include "r_timer_api.h"
#include "r_mtu3_three_phase.h"
            #include "r_three_phase_api.h"
#include "r_sci_uart.h"
            #include "r_uart_api.h"
FSP_HEADER
/** POE3 Instance. */
extern const poe3_instance_t g_poe30;

/** Access the POE3 instance using these structures when calling API functions directly (::p_api is not used). */
extern poe3_instance_ctrl_t g_poe30_ctrl;
extern const poe3_cfg_t g_poe30_cfg;
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer1;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer1_ctrl;
extern const transfer_cfg_t g_transfer1_cfg;

#ifndef g_dma_rec_end
void g_dma_rec_end(dmac_callback_args_t * p_args);
#endif

#ifndef NULL
extern void NULL(IRQn_Type irq);
#endif
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer2;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer2_ctrl;
extern const timer_cfg_t g_timer2_cfg;

#ifndef fac_gpt0_isr
void fac_gpt0_isr(timer_callback_args_t * p_args);
#endif
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_mtu3ch2;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_mtu3ch2_ctrl;
extern const timer_cfg_t g_mtu3ch2_cfg;

#ifndef g_mtu3ch2_captureA
void g_mtu3ch2_captureA(timer_callback_args_t * p_args);
#endif
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_timer1;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_timer1_ctrl;
extern const timer_cfg_t g_timer1_cfg;

#ifndef NULL
void NULL(timer_callback_args_t * p_args);
#endif
/** Timer on MTU3 Instance. */
extern const timer_instance_t g_timer0;

/** Access the MTU3 instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef g_mtu3ch3_ovf
void g_mtu3ch3_ovf(timer_callback_args_t * p_args);
#endif
/** MTU3 Three-Phase Instance. */
extern const three_phase_instance_t g_three_phase0;

/** Access the MTU3 Three-Phase instance using these structures when calling API functions directly (::p_api is not used). */
extern mtu3_three_phase_instance_ctrl_t g_three_phase0_ctrl;
extern const three_phase_cfg_t g_three_phase0_cfg;
/** UART on SCI Instance. */
            extern const uart_instance_t      g_uart1;

            /** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
            extern sci_uart_instance_ctrl_t     g_uart1_ctrl;
            extern const uart_cfg_t g_uart1_cfg;
            extern const sci_uart_extended_cfg_t g_uart1_cfg_extend;

            #ifndef fa_uart_callback
            void fa_uart_callback(uart_callback_args_t * p_args);
            #endif
/* Transfer on DMAC Instance. */
extern const transfer_instance_t g_transfer0;

/** Access the DMAC instance using these structures when calling API functions directly (::p_api is not used). */
extern dmac_instance_ctrl_t g_transfer0_ctrl;
extern const transfer_cfg_t g_transfer0_cfg;

#ifndef g_dma_send_end
void g_dma_send_end(dmac_callback_args_t * p_args);
#endif

#ifndef NULL
extern void NULL(IRQn_Type irq);
#endif
/** UART on SCI Instance. */
            extern const uart_instance_t      g_uart0;

            /** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
            extern sci_uart_instance_ctrl_t     g_uart0_ctrl;
            extern const uart_cfg_t g_uart0_cfg;
            extern const sci_uart_extended_cfg_t g_uart0_cfg_extend;

            #ifndef user_uart_callback
            void user_uart_callback(uart_callback_args_t * p_args);
            #endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
