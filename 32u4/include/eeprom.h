#ifndef eeprom_h
#define eeprom_h

#include <avr/eeprom.h>

struct EEPROM_SETTINGS
{
	// FILLER
	uint8_t REG_00_DEVICE_TYPE;
	uint8_t REG_01_VERSION_CODE;
	uint8_t REG_02_DEVICE_STATUS;
	uint8_t REG_03_INTERRUPT_STATUS1;
	uint8_t REG_04_INTERRUPT_STATUS2;

	// 12
	uint8_t REG_05_INTERRUPT_ENABLE1;
	uint8_t REG_06_INTERRUPT_ENABLE2;
	uint8_t REG_07_OPERATING_MODE1;
	uint8_t REG_08_OPERATING_MODE2;
	uint8_t REG_09_OSCILLATOR_LOAD_CAPACITANCE;
	uint8_t REG_0A_UC_OUTPUT_CLOCK;
	uint8_t REG_0B_GPIO_CONFIGURATION0;
	uint8_t REG_0C_GPIO_CONFIGURATION1;
	uint8_t REG_0D_GPIO_CONFIGURATION2;
	uint8_t REG_0E_IO_PORT_CONFIGURATION;
	uint8_t REG_0F_ADC_CONFIGURATION;
	uint8_t REG_10_ADC_SENSOR_AMP_OFFSET;

	// FILLER
	uint8_t REG_11_ADC_VALUE;

	// 5
	uint8_t REG_12_TEMPERATURE_SENSOR_CALIBRATION;
	uint8_t REG_13_TEMPERATURE_VALUE_OFFSET;
	uint8_t REG_14_WAKEUP_TIMER_PERIOD1;
	uint8_t REG_15_WAKEUP_TIMER_PERIOD2;
	uint8_t REG_16_WAKEUP_TIMER_PERIOD3;

	// FILLER
	uint8_t REG_17_WAKEUP_TIMER_VALUE1;
	uint8_t REG_18_WAKEUP_TIMER_VALUE2;

	// 2
	uint8_t REG_19_LDC_MODE_DURATION;
	uint8_t REG_1A_LOW_BATTERY_DETECTOR_THRESHOLD;

	// FILLER
	uint8_t REG_1B_BATTERY_VOLTAGE_LEVEL;

	// 10
	uint8_t REG_1C_IF_FILTER_BANDWIDTH;
	uint8_t REG_1D_AFC_LOOP_GEARSHIFT_OVERRIDE;
	uint8_t REG_1E_AFC_TIMING_CONTROL;
	uint8_t REG_1F_CLOCK_RECOVERY_GEARSHIFT_OVERRIDE;
	uint8_t REG_20_CLOCK_RECOVERY_OVERSAMPLING_RATE;
	uint8_t REG_21_CLOCK_RECOVERY_OFFSET2;
	uint8_t REG_22_CLOCK_RECOVERY_OFFSET1;
	uint8_t REG_23_CLOCK_RECOVERY_OFFSET0;
	uint8_t REG_24_CLOCK_RECOVERY_TIMING_LOOP_GAIN1;
	uint8_t REG_25_CLOCK_RECOVERY_TIMING_LOOP_GAIN0;

	// FILLER
	uint8_t REG_26_RSSI;

	// 1
	uint8_t REG_27_RSSI_THRESHOLD;

	// FILLER
	uint8_t REG_28_ANTENNA_DIVERSITY1;
	uint8_t REG_29_ANTENNA_DIVERSITY2;

	// 1
	uint8_t REG_2A_AFC_LIMITER;

	// FILLER
	uint8_t REG_2B_AFC_CORRECTION_READ;

	// 3
	uint8_t REG_2C_OOK_COUNTER_VALUE_1;
	uint8_t REG_2D_OOK_COUNTER_VALUE_2;
	uint8_t REG_2E_SLICER_PEAK_HOLD;

	// FILLER
	uint8_t REG_2F_UNKNOWN;

	// 1
	uint8_t REG_30_DATA_ACCESS_CONTROL;

	// FILLER
	uint8_t REG_31_EZMAC_STATUS;

	// 21
	uint8_t REG_32_HEADER_CONTROL1;
	uint8_t REG_33_HEADER_CONTROL2;
	uint8_t REG_34_PREAMBLE_LENGTH;
	uint8_t REG_35_PREAMBLE_DETECTION_CONTROL1;
	uint8_t REG_36_SYNC_WORD3;
	uint8_t REG_37_SYNC_WORD2;
	uint8_t REG_38_SYNC_WORD1;
	uint8_t REG_39_SYNC_WORD0;
	uint8_t REG_3A_TRANSMIT_HEADER3;
	uint8_t REG_3B_TRANSMIT_HEADER2;
	uint8_t REG_3C_TRANSMIT_HEADER1;
	uint8_t REG_3D_TRANSMIT_HEADER0;
	uint8_t REG_3E_PACKET_LENGTH;
	uint8_t REG_3F_CHECK_HEADER3;
	uint8_t REG_40_CHECK_HEADER2;
	uint8_t REG_41_CHECK_HEADER1;
	uint8_t REG_42_CHECK_HEADER0;
	uint8_t REG_43_HEADER_ENABLE3;
	uint8_t REG_44_HEADER_ENABLE2;
	uint8_t REG_45_HEADER_ENABLE1;
	uint8_t REG_46_HEADER_ENABLE0;

	// FILLER
	uint8_t REG_47_RECEIVED_HEADER3;
	uint8_t REG_48_RECEIVED_HEADER2;
	uint8_t REG_49_RECEIVED_HEADER1;
	uint8_t REG_4A_RECEIVED_HEADER0;
	uint8_t REG_4B_RECEIVED_PACKET_LENGTH;
	uint8_t REG_4C_UNKNOWN;
	uint8_t REG_4D_UNKNOWN;
	uint8_t REG_4E_UNKNOWN;
	uint8_t REG_4F_UNKNOWN;
	uint8_t REG_50_ANALOG_TEST_BUS_SELECT;
	uint8_t REG_51_DIGITAL_TEST_BUS_SELECT;
	uint8_t REG_52_TX_RAMP_CONTROL;
	uint8_t REG_53_PLL_TUNE_TIME;
	uint8_t REG_55_CALIBRATION_CONTROL;
	uint8_t REG_56_MODEM_TEST;
	uint8_t REG_57_CHARGE_PUMP_TEST;

	// 1
	uint8_t REG_58_CHARGE_PUMP_CURRENT_TRIMMING;

	// FILLER
	uint8_t REG_59_DIVIDER_CURRENT_TRIMMING;
	uint8_t REG_5A_VCO_CURRENT_TRIMMING;
	uint8_t REG_5B_VCO_CALIBRATION;
	uint8_t REG_5C_SYNTHESIZER_TEST;
	uint8_t REG_5D_BLOCK_ENABLE_OVERRIDE1;
	uint8_t REG_5E_BLOCK_ENABLE_OVERRIDE2;
	uint8_t REG_5F_BLOCK_ENABLE_OVERRIDE3;

	// 1
	uint8_t REG_60_CHANNEL_FILTER_COEFFICIENT_ADDRESS;

	// FILLER
	uint8_t REG_61_CHANNEL_FILTER_COEFFICIENT_VALUE;

	// 1
	uint8_t REG_62_CRYSTAL_OSCILLATOR_POR_CONTROL;

	// FILLER
	uint8_t REG_63_RC_OSCILLATOR_COARSE_CALIBRATION;
	uint8_t REG_64_RC_OSCILLATOR_FINE_CALIBRATION;
	uint8_t REG_65_LDO_CONTROL_OVERRIDE;
	uint8_t REG_66_LDO_LEVEL_SETTINGS;
	uint8_t REG_67_DELTA_SIGMA_ADC_TUNING1;
	uint8_t REG_68_DELTA_SIGMA_ADC_TUNING2;

	// 1
	uint8_t REG_69_AGC_OVERRIDE1;

	// FILLER
	uint8_t REG_6A_AGC_OVERRIDE2;
	uint8_t REG_6B_GFSK_FIR_FILTER_COEFFICIENT_ADDRESS;
	uint8_t REG_6C_GFSK_FIR_FILTER_COEFFICIENT_VALUE;

	// 16
	uint8_t REG_6D_TX_POWER;
	uint8_t REG_6E_TX_DATA_RATE1;
	uint8_t REG_6F_TX_DATA_RATE0;
	uint8_t REG_70_MODULATION_CONTROL1;
	uint8_t REG_71_MODULATION_CONTROL2;
	uint8_t REG_72_FREQUENCY_DEVIATION;
	uint8_t REG_73_FREQUENCY_OFFSET1;
	uint8_t REG_74_FREQUENCY_OFFSET2;
	uint8_t REG_75_FREQUENCY_BAND_SELECT;
	uint8_t REG_76_NOMINAL_CARRIER_FREQUENCY1;
	uint8_t REG_77_NOMINAL_CARRIER_FREQUENCY0;
	uint8_t REG_79_FREQUENCY_HOPPING_CHANNEL_SELECT;
	uint8_t REG_7A_FREQUENCY_HOPPING_STEP_SIZE;
	uint8_t REG_7C_TX_FIFO_CONTROL1;
	uint8_t REG_7D_TX_FIFO_CONTROL2;
	uint8_t REG_7E_RX_FIFO_CONTROL;

	// FILLER
	uint8_t REG_7F_FIFO_ACCESS;
} __attribute__((packed));

struct EEPROM_SETTINGS2
{
	uint8_t TX_RETRIES;
	char CALLSIGN[7];
} __attribute__((packed));

void eeprom_store_settings( const struct EEPROM_SETTINGS *settings );
void eeprom_read_settings( struct EEPROM_SETTINGS *settings );
void eeprom_store_setting( const uint8_t index, const uint8_t *setting, const uint8_t len );
void eeprom_read_setting( const uint8_t index, uint8_t *setting, const uint8_t len );

extern struct EEPROM_SETTINGS EEMEM rf22_settings;
extern struct EEPROM_SETTINGS2 EEMEM system_settings;

#endif //eeprom_h
