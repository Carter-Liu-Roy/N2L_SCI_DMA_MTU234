/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
        #include "bsp_api.h"
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (14)
        #endif
        /* ISR prototypes */
        void dmac_int_isr(void);
        void mtu3_capture_a_isr(void);
        void mtu3_counter_overflow_isr(void);
        void gpt_counter_overflow_isr(void);
        void sci_uart_eri_isr(void);
        void sci_uart_rxi_isr(void);
        void sci_uart_txi_isr(void);
        void sci_uart_tei_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_DMAC0_INT0 ((IRQn_Type) 21) /* DMAC0_INT0 (DMAC0 transfer completion 0) */
        #define VECTOR_NUMBER_DMAC0_INT1 ((IRQn_Type) 22) /* DMAC0_INT1 (DMAC0 transfer completion 1) */
        #define VECTOR_NUMBER_TGIA2 ((IRQn_Type) 80) /* TGIA2 (MTU2.TGRA input capture/compare match) */
        #define VECTOR_NUMBER_TCIV2 ((IRQn_Type) 82) /* TCIV2 (MTU2.TCNT overflow) */
        #define VECTOR_NUMBER_TCIV3 ((IRQn_Type) 88) /* TCIV3 (MTU3.TCNT overflow) */
        #define VECTOR_NUMBER_GPT0_OVF ((IRQn_Type) 122) /* GPT0_OVF (GPT0 GTCNT overflow (GTPR compare match)) */
        #define VECTOR_NUMBER_SCI1_ERI ((IRQn_Type) 292) /* SCI1_ERI (SCI1 Receive error) */
        #define VECTOR_NUMBER_SCI1_RXI ((IRQn_Type) 293) /* SCI1_RXI (SCI1 Receive data full) */
        #define VECTOR_NUMBER_SCI1_TXI ((IRQn_Type) 294) /* SCI1_TXI (SCI1 Transmit data empty) */
        #define VECTOR_NUMBER_SCI1_TEI ((IRQn_Type) 295) /* SCI1_TEI (SCI1 Transmit end) */
        #define VECTOR_NUMBER_SCI3_ERI ((IRQn_Type) 300) /* SCI3_ERI (SCI3 Receive error) */
        #define VECTOR_NUMBER_SCI3_RXI ((IRQn_Type) 301) /* SCI3_RXI (SCI3 Receive data full) */
        #define VECTOR_NUMBER_SCI3_TXI ((IRQn_Type) 302) /* SCI3_TXI (SCI3 Transmit data empty) */
        #define VECTOR_NUMBER_SCI3_TEI ((IRQn_Type) 303) /* SCI3_TEI (SCI3 Transmit end) */
        typedef enum IRQn {
            SoftwareGeneratedInt0 = -32,
            SoftwareGeneratedInt1 = -31,
            SoftwareGeneratedInt2 = -30,
            SoftwareGeneratedInt3 = -29,
            SoftwareGeneratedInt4 = -28,
            SoftwareGeneratedInt5 = -27,
            SoftwareGeneratedInt6 = -26,
            SoftwareGeneratedInt7 = -25,
            SoftwareGeneratedInt8 = -24,
            SoftwareGeneratedInt9 = -23,
            SoftwareGeneratedInt10 = -22,
            SoftwareGeneratedInt11 = -21,
            SoftwareGeneratedInt12 = -20,
            SoftwareGeneratedInt13 = -19,
            SoftwareGeneratedInt14 = -18,
            SoftwareGeneratedInt15 = -17,
            DebugCommunicationsChannelInt = -10,
            PerformanceMonitorCounterOverflowInt = -9,
            CrossTriggerInterfaceInt = -8,
            VritualCPUInterfaceMaintenanceInt = -7,
            HypervisorTimerInt = -6,
            VirtualTimerInt = -5,
            NonSecurePhysicalTimerInt = -2,
            DMAC0_INT0_IRQn = 21, /* DMAC0_INT0 (DMAC0 transfer completion 0) */
            DMAC0_INT1_IRQn = 22, /* DMAC0_INT1 (DMAC0 transfer completion 1) */
            TGIA2_IRQn = 80, /* TGIA2 (MTU2.TGRA input capture/compare match) */
            TCIV2_IRQn = 82, /* TCIV2 (MTU2.TCNT overflow) */
            TCIV3_IRQn = 88, /* TCIV3 (MTU3.TCNT overflow) */
            GPT0_OVF_IRQn = 122, /* GPT0_OVF (GPT0 GTCNT overflow (GTPR compare match)) */
            SCI1_ERI_IRQn = 292, /* SCI1_ERI (SCI1 Receive error) */
            SCI1_RXI_IRQn = 293, /* SCI1_RXI (SCI1 Receive data full) */
            SCI1_TXI_IRQn = 294, /* SCI1_TXI (SCI1 Transmit data empty) */
            SCI1_TEI_IRQn = 295, /* SCI1_TEI (SCI1 Transmit end) */
            SCI3_ERI_IRQn = 300, /* SCI3_ERI (SCI3 Receive error) */
            SCI3_RXI_IRQn = 301, /* SCI3_RXI (SCI3 Receive data full) */
            SCI3_TXI_IRQn = 302, /* SCI3_TXI (SCI3 Transmit data empty) */
            SCI3_TEI_IRQn = 303, /* SCI3_TEI (SCI3 Transmit end) */
            SHARED_PERIPHERAL_INTERRUPTS_MAX_ENTRIES = BSP_VECTOR_TABLE_MAX_ENTRIES
        } IRQn_Type;
        #endif /* VECTOR_DATA_H */