/* generated HAL source file - do not edit */
#include "hal_data.h"




poe3_instance_ctrl_t g_poe30_ctrl;
/** POE3 setting. */
const poe3_cfg_t g_poe30_cfg =
{
    .poe0                  = {
                                 .mode                  = POE3_HIZ_MODE_FALLING_EDGE,
                                 .interrupt             = POE3_INTERRUPT_ENABLE_ENABLED,
                                 .mtioc3b_mtioc3d       = {
                                                              .mtioc3b_pin_select   = POE3_MTIOC3B_PIN_SELECT_P17_6,
                                                              .mtioc3d_pin_select   = POE3_MTIOC3D_PIN_SELECT_P18_1,
                                                              .mtioc3b_active_level = POE3_ACTIVE_LEVEL_HIGH,
                                                              .mtioc3d_active_level = POE3_ACTIVE_LEVEL_HIGH,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_ENABLED
                                                          },
                                 .mtioc4b_mtioc4d       = {
                                                              .mtioc4b_pin_select   = POE3_MTIOC4B_PIN_SELECT_P18_2,
                                                              .mtioc4d_pin_select   = POE3_MTIOC4D_PIN_SELECT_P18_3,
                                                              .mtioc4b_active_level = POE3_ACTIVE_LEVEL_HIGH,
                                                              .mtioc4d_active_level = POE3_ACTIVE_LEVEL_HIGH,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_ENABLED
                                                          },
                                 .mtioc4a_mtioc4c       = {
                                                              .mtioc4a_pin_select   = POE3_MTIOC4A_PIN_SELECT_P17_7,
                                                              .mtioc4c_pin_select   = POE3_MTIOC4C_PIN_SELECT_P18_0,
                                                              .mtioc4a_active_level = POE3_ACTIVE_LEVEL_HIGH,
                                                              .mtioc4c_active_level = POE3_ACTIVE_LEVEL_HIGH,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_ENABLED
                                                          }
                             },
    .poe4                  = {
                                 .mode                  = POE3_HIZ_MODE_FALLING_EDGE,
                                 .interrupt             = POE3_INTERRUPT_ENABLE_DISABLED,
                                 .mtioc6b_mtioc6d       = {
                                                              .mtioc6b_pin_select   = POE3_MTIOC6B_PIN_SELECT_P21_2,
                                                              .mtioc6d_pin_select   = POE3_MTIOC6D_PIN_SELECT_P21_4,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          },
                                 .mtioc7b_mtioc7d       = {
                                                              .mtioc7b_pin_select   = POE3_MTIOC7B_PIN_SELECT_P21_6,
                                                              .mtioc7d_pin_select   = POE3_MTIOC7D_PIN_SELECT_P22_0,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          },
                                 .mtioc7a_mtioc7c       = {
                                                              .mtioc7a_pin_select   = POE3_MTIOC7A_PIN_SELECT_P21_5,
                                                              .mtioc7c_pin_select   = POE3_MTIOC7C_PIN_SELECT_P21_7,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          }
                             },
    .poe8                  = {
                                 .mode                  = POE3_HIZ_MODE_FALLING_EDGE,
                                 .interrupt             = POE3_INTERRUPT_ENABLE_DISABLED,
                                 .mtioc0a               = {
                                                              .pin_select           = POE3_MTIOC0A_PIN_SELECT_P13_2,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          },
                                 .mtioc0b               = {
                                                              .pin_select           = POE3_MTIOC0B_PIN_SELECT_P14_4,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          },
                                 .mtioc0c               = {
                                                              .pin_select           = POE3_MTIOC0C_PIN_SELECT_P13_3,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          },
                                 .mtioc0d               = {
                                                              .pin_select           = POE3_MTIOC0D_PIN_SELECT_P13_4,
                                                              .hiz_output           = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                                                          }
                             },
    .oscillation_stop      = POE3_HIZ_OUTPUT_ENABLE_ENABLED,
    .dsmif0_error          = POE3_HIZ_OUTPUT_ENABLE_ENABLED,
    .dsmif1_error          = POE3_HIZ_OUTPUT_ENABLE_DISABLED,
    .short_circuit1        = { .interrupt  = POE3_INTERRUPT_ENABLE_DISABLED,
                               .hiz_output = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                             },
    .short_circuit2        = { .interrupt  = POE3_INTERRUPT_ENABLE_DISABLED,
                               .hiz_output = POE3_HIZ_OUTPUT_ENABLE_DISABLED
                             },
    .p_context             = NULL,
};
/* Instance structure to use this module. */
const poe3_instance_t g_poe30 =
{
    .p_ctrl                = &g_poe30_ctrl,
    .p_cfg                 = &g_poe30_cfg,
    .p_api                 = &g_poe30_on_poe3
};
dmac_instance_ctrl_t g_transfer1_ctrl;

dmac_register_set_setting_t g_transfer1_next1_register_setting =
{
    .p_dest = NULL,
    .p_src  = NULL,
    .length = 1
};

dmac_extended_info_t g_transfer1_extend_info =
{
    .src_size            = DMAC_TRANSFER_SIZE_1_BYTE,
    .dest_size           = DMAC_TRANSFER_SIZE_1_BYTE,
    .p_next1_register_setting = &g_transfer1_next1_register_setting,
};

transfer_info_t g_transfer1_info =
{
    .transfer_settings_word_b.dest_addr_mode      = TRANSFER_ADDR_MODE_INCREMENTED,
    .transfer_settings_word_b.repeat_area         = (transfer_repeat_area_t) 0, // Unused
    .transfer_settings_word_b.irq                 = (transfer_irq_t) 0, // Unused
    .transfer_settings_word_b.chain_mode          = (transfer_chain_mode_t) 0, // Unused
    .transfer_settings_word_b.src_addr_mode       = TRANSFER_ADDR_MODE_FIXED,
    .transfer_settings_word_b.size                = (transfer_size_t) 0, // Unused
    .transfer_settings_word_b.mode                = TRANSFER_MODE_NORMAL,
    .p_dest              = (void *) NULL,
    .p_src               = (void const *) NULL,
    .num_blocks          = 0, // Unused
    .length              = 6,
    .p_extend            = &g_transfer1_extend_info,
};

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer1_extend =
{
    .unit                = 0,
    .channel             = 1,
#if defined(VECTOR_NUMBER_DMAC0_INT1)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT1,
#else
    .dmac_int_irq         = FSP_INVALID_VECTOR,
#endif
    .dmac_int_ipl         = (9),
    .dmac_int_irq_detect_type = (0),

    .activation_source   = ELC_EVENT_SCI1_RXI,

    .ack_mode               = DMAC_ACK_MODE_LEVEL_MODE,
    .detection_mode         = (dmac_detection_t) ((0) << 2 | (0) << 1 | (1) << 0),
    .activation_request_source_select = DMAC_REQUEST_DIRECTION_SOURCE_MODULE,

    .next_register_operation = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

    .dmac_mode              = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
    .p_descriptor           = &NULL,
#else
    .p_descriptor           = NULL,
#endif

    .transfer_interval      = 0,
    .channel_scheduling     = DMAC_CHANNEL_SCHEDULING_FIXED,

    .p_callback          = g_dma_rec_end,
    .p_context           = NULL,

    .p_peripheral_module_handler = NULL,
};
const transfer_cfg_t g_transfer1_cfg =
{
    .p_info              = &g_transfer1_info,
    .p_extend            = &g_transfer1_extend,
};
/* Instance structure to use this module. */
const transfer_instance_t g_transfer1 =
{
    .p_ctrl        = &g_transfer1_ctrl,
    .p_cfg         = &g_transfer1_cfg,
    .p_api         = &g_transfer_on_dmac
};
gpt_instance_ctrl_t g_timer2_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_timer2_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT0_UDF,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      =  GPT_OUTPUT_DISABLE_NONE,
    .adc_trigger         =  GPT_ADC_TRIGGER_NONE,
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext1  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count_ext2  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_func_ovf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_unf    = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_a  = GPT_INTERRUPT_SKIP_SELECT_NONE,
    .interrupt_skip_func_adc_b  = GPT_INTERRUPT_SKIP_SELECT_NONE,
};
#endif
const gpt_extended_cfg_t g_timer2_extend =
{
    .gtioca = { .output_enabled = false,
                .stop_level     = GPT_PIN_LEVEL_LOW
              },
    .gtiocb = { .output_enabled = false,
                .stop_level     = GPT_PIN_LEVEL_LOW
              },
    .start_source        = (gpt_source_t) ( GPT_SOURCE_NONE),
    .stop_source         = (gpt_source_t) ( GPT_SOURCE_NONE),
    .clear_source        = (gpt_source_t) ( GPT_SOURCE_NONE),
    .count_up_source     = (gpt_source_t) ( GPT_SOURCE_NONE),
    .count_down_source   = (gpt_source_t) ( GPT_SOURCE_NONE),
    .capture_a_source    = (gpt_source_t) ( GPT_SOURCE_NONE),
    .capture_b_source    = (gpt_source_t) ( GPT_SOURCE_NONE),
    .capture_a_ipl       = (BSP_IRQ_DISABLED),
    .capture_b_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CCMPA,
#else
    .capture_a_irq       = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CCMPB,
#else
    .capture_b_irq       = FSP_INVALID_VECTOR,
#endif
    .capture_filter_gtioca       = GPT_CAPTURE_FILTER_NONE,
    .capture_filter_gtiocb       = GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_timer2_pwm_extend,
#else
    .p_pwm_cfg                   = NULL,
#endif
    .dead_time_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT0_DTE,
#else
    .dead_time_irq       = FSP_INVALID_VECTOR,
#endif
    .icds                = 0,
};
const timer_cfg_t g_timer2_cfg =
{
    .mode                = TIMER_MODE_PERIODIC,
    /* Actual period: 0.0001 seconds. Actual duty: 50%. */ .period_counts = (uint32_t) 0x9c40, .duty_cycle_counts = 0x4e20, .source_div = (timer_source_div_t)0,
    .channel             = 0,
    .p_callback          = fac_gpt0_isr,
    .p_context           = NULL,
    .p_extend            = &g_timer2_extend,
    .cycle_end_ipl       = (10),
#if defined(VECTOR_NUMBER_GPT0_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_OVF,
#else
    .cycle_end_irq       = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const timer_instance_t g_timer2 =
{
    .p_ctrl        = &g_timer2_ctrl,
    .p_cfg         = &g_timer2_cfg,
    .p_api         = &g_timer_on_gpt
};
mtu3_instance_ctrl_t g_mtu3ch2_ctrl;
#if 0
const mtu3_extended_uvw_cfg_t g_mtu3ch2_uvw_extend =
{
    .tgru_val                       = 0x0000,
    .tgrv_val                       = 0x0000,
    .tgrw_val                       = 0x0000,
    .mtu3_clk_div_u                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_v                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_w                 = MTU3_DIV_UVW_PCLKH_1,
    .output_pin_level_u             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_v             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_w             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .noise_filter_mtioc_setting_uvw = (mtu3_noise_filter_setting_uvw_t)(MTU3_NOISE_FILTER_UVW_DISABLE),
    .noise_filter_mtioc_clk_uvw     = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

    .capture_u_ipl                  = (BSP_IRQ_DISABLED),
    .capture_v_ipl                  = (BSP_IRQ_DISABLED),
    .capture_w_ipl                  = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
    .capture_u_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
    .capture_v_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
    .capture_w_irq                  = FSP_INVALID_VECTOR,
#endif
};
const mtu3_extended_pwm_cfg_t g_mtu3ch2_pwm_extend =
{
    .interrupt_skip_mode_a          = MTU3_INTERRUPT_SKIP_MODE_1,
    .interrupt_skip_mode_b          = MTU3_INTERRUPT_SKIP_MODE_1,
    .adc_a_compare_match            = 0x0000,
    .adc_b_compare_match            = 0x0000,
    .interrupt_skip_count_tciv4     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia3     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tciv7     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia6     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
};
#endif
const mtu3_extended_cfg_t g_mtu3ch2_extend =
{
    .tgra_val            = 1000,
    .tgrb_val            = 12500,
    .tgrc_val            = 1000,
    .tgrd_val            = 12500,
    .mtu3_clk_div        = MTU3_DIV_PCLKH_1,
    .clk_edge            = MTU3_CLOCK_EDGE_RISING,
    .mtu3_clear          = MTU3_TCNT_CLEAR_TGRB,
    .mtioc_ctrl_setting  = { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT,
                             .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT
                           },
    .capture_a_ipl       = (10),
    .capture_b_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIA2)
    .capture_a_irq       = VECTOR_NUMBER_TGIA2,
#else
    .capture_a_irq       = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB2)
    .capture_b_irq       = VECTOR_NUMBER_TGIB2,
#else
    .capture_b_irq       = FSP_INVALID_VECTOR,
#endif
    .noise_filter_mtioc_setting  = (mtu3_noise_filter_setting_t)( MTU3_NOISE_FILTER_DISABLE),
    .noise_filter_mtioc_clk      = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
    .noise_filter_mtclk_setting  = (mtu3_noise_filter_mtclk_setting_t)( MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
    .noise_filter_mtclk_clk      = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
	.adc_request_enable          = 0,
#if 0
    .p_uvw_cfg                   = &g_mtu3ch2_uvw_extend,
    .p_pwm_cfg                   = &g_mtu3ch2_pwm_extend,
#else
    .p_uvw_cfg                   = NULL,
    .p_pwm_cfg                   = NULL,
#endif
};
const timer_cfg_t g_mtu3ch2_cfg =
{
    .mode                = TIMER_MODE_PERIODIC,
    .channel             = 2,
    .p_callback          = g_mtu3ch2_captureA,
    .p_context           = NULL,
    .p_extend            = &g_mtu3ch2_extend,
    .cycle_end_ipl       = (12),
#if defined(VECTOR_NUMBER_TCIV2)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV2,
#else
    .cycle_end_irq       = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const timer_instance_t g_mtu3ch2 =
{
    .p_ctrl        = &g_mtu3ch2_ctrl,
    .p_cfg         = &g_mtu3ch2_cfg,
    .p_api         = &g_timer_on_mtu3
};
mtu3_instance_ctrl_t g_timer1_ctrl;
#if 0
const mtu3_extended_uvw_cfg_t g_timer1_uvw_extend =
{
    .tgru_val                       = 0x0000,
    .tgrv_val                       = 0x0000,
    .tgrw_val                       = 0x0000,
    .mtu3_clk_div_u                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_v                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_w                 = MTU3_DIV_UVW_PCLKH_1,
    .output_pin_level_u             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_v             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_w             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .noise_filter_mtioc_setting_uvw = (mtu3_noise_filter_setting_uvw_t)(MTU3_NOISE_FILTER_UVW_DISABLE),
    .noise_filter_mtioc_clk_uvw     = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

    .capture_u_ipl                  = (BSP_IRQ_DISABLED),
    .capture_v_ipl                  = (BSP_IRQ_DISABLED),
    .capture_w_ipl                  = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
    .capture_u_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
    .capture_v_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
    .capture_w_irq                  = FSP_INVALID_VECTOR,
#endif
};
const mtu3_extended_pwm_cfg_t g_timer1_pwm_extend =
{
    .interrupt_skip_mode_a          = MTU3_INTERRUPT_SKIP_MODE_1,
    .interrupt_skip_mode_b          = MTU3_INTERRUPT_SKIP_MODE_1,
    .adc_a_compare_match            = 0x0000,
    .adc_b_compare_match            = 0x0000,
    .interrupt_skip_count_tciv4     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia3     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tciv7     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia6     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
};
#endif
const mtu3_extended_cfg_t g_timer1_extend =
{
    .tgra_val            = 2000,
    .tgrb_val            = 3000,
    .tgrc_val            = 2000,
    .tgrd_val            = 3000,
    .mtu3_clk_div        = MTU3_DIV_PCLKH_1,
    .clk_edge            = MTU3_CLOCK_EDGE_RISING,
    .mtu3_clear          = MTU3_TCNT_CLEAR_DISABLE,
    .mtioc_ctrl_setting  = { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT,
                             .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT
                           },
    .capture_a_ipl       = (BSP_IRQ_DISABLED),
    .capture_b_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIA4)
    .capture_a_irq       = VECTOR_NUMBER_TGIA4,
#else
    .capture_a_irq       = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB4)
    .capture_b_irq       = VECTOR_NUMBER_TGIB4,
#else
    .capture_b_irq       = FSP_INVALID_VECTOR,
#endif
    .noise_filter_mtioc_setting  = (mtu3_noise_filter_setting_t)( MTU3_NOISE_FILTER_DISABLE),
    .noise_filter_mtioc_clk      = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
    .noise_filter_mtclk_setting  = (mtu3_noise_filter_mtclk_setting_t)( MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
    .noise_filter_mtclk_clk      = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
	.adc_request_enable          = 0,
#if 0
    .p_uvw_cfg                   = &g_timer1_uvw_extend,
    .p_pwm_cfg                   = &g_timer1_pwm_extend,
#else
    .p_uvw_cfg                   = NULL,
    .p_pwm_cfg                   = NULL,
#endif
};
const timer_cfg_t g_timer1_cfg =
{
    .mode                = TIMER_MODE_PERIODIC,
    .channel             = 4,
    .p_callback          = NULL,
    .p_context           = NULL,
    .p_extend            = &g_timer1_extend,
    .cycle_end_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TCIV4)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV4,
#else
    .cycle_end_irq       = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const timer_instance_t g_timer1 =
{
    .p_ctrl        = &g_timer1_ctrl,
    .p_cfg         = &g_timer1_cfg,
    .p_api         = &g_timer_on_mtu3
};
mtu3_instance_ctrl_t g_timer0_ctrl;
#if 0
const mtu3_extended_uvw_cfg_t g_timer0_uvw_extend =
{
    .tgru_val                       = 0x0000,
    .tgrv_val                       = 0x0000,
    .tgrw_val                       = 0x0000,
    .mtu3_clk_div_u                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_v                 = MTU3_DIV_UVW_PCLKH_1,
    .mtu3_clk_div_w                 = MTU3_DIV_UVW_PCLKH_1,
    .output_pin_level_u             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_v             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .output_pin_level_w             = MTU3_IO_PIN_LEVEL_UVW_NO_FUNC,
    .noise_filter_mtioc_setting_uvw = (mtu3_noise_filter_setting_uvw_t)(MTU3_NOISE_FILTER_UVW_DISABLE),
    .noise_filter_mtioc_clk_uvw     = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,

    .capture_u_ipl                  = (BSP_IRQ_DISABLED),
    .capture_v_ipl                  = (BSP_IRQ_DISABLED),
    .capture_w_ipl                  = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIU5)
    .capture_u_irq                  = VECTOR_NUMBER_TGIU5,
#else
    .capture_u_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIV5)
    .capture_v_irq                  = VECTOR_NUMBER_TGIV5,
#else
    .capture_v_irq                  = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIW5)
    .capture_w_irq                  = VECTOR_NUMBER_TGIW5,
#else
    .capture_w_irq                  = FSP_INVALID_VECTOR,
#endif
};
const mtu3_extended_pwm_cfg_t g_timer0_pwm_extend =
{
    .interrupt_skip_mode_a          = MTU3_INTERRUPT_SKIP_MODE_1,
    .interrupt_skip_mode_b          = MTU3_INTERRUPT_SKIP_MODE_1,
    .adc_a_compare_match            = 0x0000,
    .adc_b_compare_match            = 0x0000,
    .interrupt_skip_count_tciv4     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia3     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tciv7     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgia6     = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr4an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_count_tgr7an_bn = MTU3_INTERRUPT_SKIP_COUNT_0,
};
#endif
const mtu3_extended_cfg_t g_timer0_extend =
{
    .tgra_val            = 0x186a,
    .tgrb_val            = 1000,
    .tgrc_val            = 0x186a,
    .tgrd_val            = 1000,
    .mtu3_clk_div        = MTU3_DIV_PCLKH_1,
    .clk_edge            = MTU3_CLOCK_EDGE_RISING,
    .mtu3_clear          = MTU3_TCNT_CLEAR_DISABLE,
    .mtioc_ctrl_setting  = { .output_pin_level_a = MTU3_IO_PIN_LEVEL_NO_OUTPUT,
                             .output_pin_level_b = MTU3_IO_PIN_LEVEL_NO_OUTPUT
                           },
    .capture_a_ipl       = (BSP_IRQ_DISABLED),
    .capture_b_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_TGIA3)
    .capture_a_irq       = VECTOR_NUMBER_TGIA3,
#else
    .capture_a_irq       = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_TGIB3)
    .capture_b_irq       = VECTOR_NUMBER_TGIB3,
#else
    .capture_b_irq       = FSP_INVALID_VECTOR,
#endif
    .noise_filter_mtioc_setting  = (mtu3_noise_filter_setting_t)( MTU3_NOISE_FILTER_DISABLE),
    .noise_filter_mtioc_clk      = MTU3_NOISE_FILTER_CLOCK_PCLKH_DIV_1,
    .noise_filter_mtclk_setting  = (mtu3_noise_filter_mtclk_setting_t)( MTU3_NOISE_FILTER_EXTERNAL_DISABLE),
    .noise_filter_mtclk_clk      = MTU3_NOISE_FILTER_EXTERNAL_CLOCK_PCLKH_DIV_1,
	.adc_request_enable          = 0,
#if 0
    .p_uvw_cfg                   = &g_timer0_uvw_extend,
    .p_pwm_cfg                   = &g_timer0_pwm_extend,
#else
    .p_uvw_cfg                   = NULL,
    .p_pwm_cfg                   = NULL,
#endif
};
const timer_cfg_t g_timer0_cfg =
{
    .mode                = TIMER_MODE_PERIODIC,
    .channel             = 3,
    .p_callback          = g_mtu3ch3_ovf,
    .p_context           = NULL,
    .p_extend            = &g_timer0_extend,
    .cycle_end_ipl       = (10),
#if defined(VECTOR_NUMBER_TCIV3)
    .cycle_end_irq       = VECTOR_NUMBER_TCIV3,
#else
    .cycle_end_irq       = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{
    .p_ctrl        = &g_timer0_ctrl,
    .p_cfg         = &g_timer0_cfg,
    .p_api         = &g_timer_on_mtu3
};
mtu3_three_phase_instance_ctrl_t g_three_phase0_ctrl;
const mtu3_three_phase_extended_cfg_t g_three_phase0_extend =
{
    .pwm_mode    = MTU3_THREE_PHASE_PWM_MODE_1,
    .period_half = 12500 / 2,
    .dead_time   = 0,
    .duty_val    =
    {
        1000,
        2000,
        3000
    },
    .period_out  = MTU3_THREE_PHASE_PSYE_NO_SIGNAL,
    .level       = MTU3_THREE_PHASE_OUTPUT_LEVEL_ACTIVE_LOW,
    .duty_double =
    {
        1000,
        2000,
        3000
    },
    .sync        = MTU3_THREE_PHASE_SYNCHRONOUS_CHANNEL_DISABLE
};
const three_phase_cfg_t g_three_phase0_cfg =
{
    .buffer_mode         = THREE_PHASE_BUFFER_MODE_SINGLE,
    .p_timer_instance    =
    {
        &g_timer0,
        &g_timer1
    },
    .channel_mask        = (1 << 3) | (1 << 4),
    .p_context           = NULL,
    .p_extend            = &g_three_phase0_extend,
};
/* Instance structure to use this module. */
const three_phase_instance_t g_three_phase0 =
{
    .p_ctrl        = &g_three_phase0_ctrl,
    .p_cfg         = &g_three_phase0_cfg,
    .p_api         = &g_three_phase_on_mtu3_three_phase
};
sci_uart_instance_ctrl_t     g_uart1_ctrl;

            baud_setting_t               g_uart1_baud_setting =
            {
                /* Baud rate calculated with 0.156% error. */ .baudrate_bits_b.abcse = 0, .baudrate_bits_b.abcs = 0, .baudrate_bits_b.bgdm = 1, .baudrate_bits_b.cks = 0, .baudrate_bits_b.brr = 1, .baudrate_bits_b.mddr = (uint8_t) 213, .baudrate_bits_b.brme = true
            };

            /** UART extended configuration for UARTonSCI HAL driver */
            const sci_uart_extended_cfg_t g_uart1_cfg_extend =
            {
                .clock                = SCI_UART_CLOCK_INT,
                .rx_edge_start          = SCI_UART_START_BIT_FALLING_EDGE,
                .noise_cancel         = SCI_UART_NOISE_CANCELLATION_DISABLE,
                .rx_fifo_trigger        = SCI_UART_RX_FIFO_TRIGGER_MAX,
                .p_baud_setting         = &g_uart1_baud_setting,
                .uart_mode              = UART_MODE_RS232,
                .ctsrts_en              = SCI_UART_CTSRTS_RTS_OUTPUT,
#if 0
                .flow_control_pin       = BSP_IO_PORT_00_PIN_00,
#else
                .flow_control_pin       = (bsp_io_port_pin_t) (0xFFFFU),
#endif
                .sync_bypass            = SCI_UART_SYNCHRONIZER_NOT_BYPASS,
            };

            /** UART interface configuration */
            const uart_cfg_t g_uart1_cfg =
            {
                .channel             = 1,
                .data_bits           = UART_DATA_BITS_8,
                .parity              = UART_PARITY_OFF,
                .stop_bits           = UART_STOP_BITS_1,
                .p_callback          = fa_uart_callback,
                .p_context           = NULL,
                .p_extend            = &g_uart1_cfg_extend,
#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
                .p_transfer_tx       = NULL,
#else
                .p_transfer_tx       = &FSP_NOT_DEFINED,
#endif
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
                .p_transfer_rx       = NULL,
#else
                .p_transfer_rx       = &FSP_NOT_DEFINED,
#endif
#undef FSP_NOT_DEFINED
                .rxi_ipl             = (12),
                .txi_ipl             = (12),
                .tei_ipl             = (12),
                .eri_ipl             = (12),
#if defined(VECTOR_NUMBER_SCI1_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI1_RXI,
#else
                .rxi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI1_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI1_TXI,
#else
                .txi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI1_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI1_TEI,
#else
                .tei_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI1_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI1_ERI,
#else
                .eri_irq             = FSP_INVALID_VECTOR,
#endif
            };

/* Instance structure to use this module. */
const uart_instance_t g_uart1 =
{
    .p_ctrl        = &g_uart1_ctrl,
    .p_cfg         = &g_uart1_cfg,
    .p_api         = &g_uart_on_sci
};
dmac_instance_ctrl_t g_transfer0_ctrl;

dmac_register_set_setting_t g_transfer0_next1_register_setting =
{
    .p_dest = NULL,
    .p_src  = NULL,
    .length = 1
};

dmac_extended_info_t g_transfer0_extend_info =
{
    .src_size            = DMAC_TRANSFER_SIZE_1_BYTE,
    .dest_size           = DMAC_TRANSFER_SIZE_1_BYTE,
    .p_next1_register_setting = &g_transfer0_next1_register_setting,
};

transfer_info_t g_transfer0_info =
{
    .transfer_settings_word_b.dest_addr_mode      = TRANSFER_ADDR_MODE_FIXED,
    .transfer_settings_word_b.repeat_area         = (transfer_repeat_area_t) 0, // Unused
    .transfer_settings_word_b.irq                 = (transfer_irq_t) 0, // Unused
    .transfer_settings_word_b.chain_mode          = (transfer_chain_mode_t) 0, // Unused
    .transfer_settings_word_b.src_addr_mode       = TRANSFER_ADDR_MODE_FIXED,
    .transfer_settings_word_b.size                = (transfer_size_t) 0, // Unused
    .transfer_settings_word_b.mode                = TRANSFER_MODE_NORMAL,
    .p_dest              = (void *) NULL,
    .p_src               = (void const *) NULL,
    .num_blocks          = 0, // Unused
    .length              = 1,
    .p_extend            = &g_transfer0_extend_info,
};

#ifndef NULL
extern dmac_link_cfg_t NULL;
#endif

const dmac_extended_cfg_t g_transfer0_extend =
{
    .unit                = 0,
    .channel             = 0,
#if defined(VECTOR_NUMBER_DMAC0_INT0)
    .dmac_int_irq         = VECTOR_NUMBER_DMAC0_INT0,
#else
    .dmac_int_irq         = FSP_INVALID_VECTOR,
#endif
    .dmac_int_ipl         = (9),
    .dmac_int_irq_detect_type = (0),

    .activation_source   = ELC_EVENT_TGIA2,

    .ack_mode               = DMAC_ACK_MODE_MASK_DACK_OUTPUT,
    .detection_mode         = (dmac_detection_t) ((0) << 2 | (1) << 1 | (0) << 0),
    .activation_request_source_select = DMAC_REQUEST_DIRECTION_SOURCE_MODULE,

    .next_register_operation = DMAC_REGISTER_SELECT_REVERSE_DISABLE,

    .dmac_mode              = DMAC_MODE_SELECT_REGISTER,
#ifndef NULL
    .p_descriptor           = &NULL,
#else
    .p_descriptor           = NULL,
#endif

    .transfer_interval      = 0,
    .channel_scheduling     = DMAC_CHANNEL_SCHEDULING_FIXED,

    .p_callback          = g_dma_send_end,
    .p_context           = NULL,

    .p_peripheral_module_handler = NULL,
};
const transfer_cfg_t g_transfer0_cfg =
{
    .p_info              = &g_transfer0_info,
    .p_extend            = &g_transfer0_extend,
};
/* Instance structure to use this module. */
const transfer_instance_t g_transfer0 =
{
    .p_ctrl        = &g_transfer0_ctrl,
    .p_cfg         = &g_transfer0_cfg,
    .p_api         = &g_transfer_on_dmac
};
sci_uart_instance_ctrl_t     g_uart0_ctrl;

            baud_setting_t               g_uart0_baud_setting =
            {
                /* Baud rate calculated with 0.160% error. */ .baudrate_bits_b.abcse = 0, .baudrate_bits_b.abcs = 0, .baudrate_bits_b.bgdm = 1, .baudrate_bits_b.cks = 0, .baudrate_bits_b.brr = 51, .baudrate_bits_b.mddr = (uint8_t) 256, .baudrate_bits_b.brme = false
            };

            /** UART extended configuration for UARTonSCI HAL driver */
            const sci_uart_extended_cfg_t g_uart0_cfg_extend =
            {
                .clock                = SCI_UART_CLOCK_INT,
                .rx_edge_start          = SCI_UART_START_BIT_FALLING_EDGE,
                .noise_cancel         = SCI_UART_NOISE_CANCELLATION_DISABLE,
                .rx_fifo_trigger        = SCI_UART_RX_FIFO_TRIGGER_MAX,
                .p_baud_setting         = &g_uart0_baud_setting,
                .uart_mode              = UART_MODE_RS232,
                .ctsrts_en              = SCI_UART_CTSRTS_RTS_OUTPUT,
#if 0
                .flow_control_pin       = BSP_IO_PORT_00_PIN_00,
#else
                .flow_control_pin       = (bsp_io_port_pin_t) (0xFFFFU),
#endif
                .sync_bypass            = SCI_UART_SYNCHRONIZER_NOT_BYPASS,
            };

            /** UART interface configuration */
            const uart_cfg_t g_uart0_cfg =
            {
                .channel             = 3,
                .data_bits           = UART_DATA_BITS_8,
                .parity              = UART_PARITY_OFF,
                .stop_bits           = UART_STOP_BITS_1,
                .p_callback          = user_uart_callback,
                .p_context           = NULL,
                .p_extend            = &g_uart0_cfg_extend,
#define FSP_NOT_DEFINED (1)
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
                .p_transfer_tx       = NULL,
#else
                .p_transfer_tx       = &FSP_NOT_DEFINED,
#endif
#if (FSP_NOT_DEFINED == FSP_NOT_DEFINED)
                .p_transfer_rx       = NULL,
#else
                .p_transfer_rx       = &FSP_NOT_DEFINED,
#endif
#undef FSP_NOT_DEFINED
                .rxi_ipl             = (12),
                .txi_ipl             = (12),
                .tei_ipl             = (12),
                .eri_ipl             = (12),
#if defined(VECTOR_NUMBER_SCI3_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI3_RXI,
#else
                .rxi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI3_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI3_TXI,
#else
                .txi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI3_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI3_TEI,
#else
                .tei_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI3_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI3_ERI,
#else
                .eri_irq             = FSP_INVALID_VECTOR,
#endif
            };

/* Instance structure to use this module. */
const uart_instance_t g_uart0 =
{
    .p_ctrl        = &g_uart0_ctrl,
    .p_cfg         = &g_uart0_cfg,
    .p_api         = &g_uart_on_sci
};
void g_hal_init(void) {
g_common_init();
}
