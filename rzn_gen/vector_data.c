/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
                        [21] = dmac_int_isr, /* DMAC0_INT0 (DMAC0 transfer completion 0) */
            [22] = dmac_int_isr, /* DMAC0_INT1 (DMAC0 transfer completion 1) */
            [80] = mtu3_capture_a_isr, /* TGIA2 (MTU2.TGRA input capture/compare match) */
            [82] = mtu3_counter_overflow_isr, /* TCIV2 (MTU2.TCNT overflow) */
            [88] = mtu3_counter_overflow_isr, /* TCIV3 (MTU3.TCNT overflow) */
            [112] = g_poe01_callback, /* OEI1 (Output enable interrupt 1) */
            [122] = gpt_counter_overflow_isr, /* GPT0_OVF (GPT0 GTCNT overflow (GTPR compare match)) */
            [292] = sci_uart_eri_isr, /* SCI1_ERI (SCI1 Receive error) */
            [293] = sci_uart_rxi_isr, /* SCI1_RXI (SCI1 Receive data full) */
            [294] = sci_uart_txi_isr, /* SCI1_TXI (SCI1 Transmit data empty) */
            [295] = sci_uart_tei_isr, /* SCI1_TEI (SCI1 Transmit end) */
            [300] = sci_uart_eri_isr, /* SCI3_ERI (SCI3 Receive error) */
            [301] = sci_uart_rxi_isr, /* SCI3_RXI (SCI3 Receive data full) */
            [302] = sci_uart_txi_isr, /* SCI3_TXI (SCI3 Transmit data empty) */
            [303] = sci_uart_tei_isr, /* SCI3_TEI (SCI3 Transmit end) */
        };
        #endif