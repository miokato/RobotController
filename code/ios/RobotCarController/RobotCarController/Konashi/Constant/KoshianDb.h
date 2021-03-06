//
//  KoshianDb.h
//  Konashi
//
//  Created by Akira Matsuda on 9/18/14.
//  Copyright (c) 2014 Akira Matsuda. All rights reserved.
//

#ifndef KOSHIAN_DB
#define KOSHIAN_DB

#define KOSHIAN_LEVEL_SERVICE_READ_LEN                          1
#define KOSHIAN_PIO_INPUT_NOTIFICATION_READ_LEN                 1
#define KOSHIAN_ANALOG_READ_LEN                                 2
#define KOSHIAN_UART_RX_NOTIFICATION_READ_LEN                   1
#define KOSHIAN_HARDWARE_LOW_BAT_NOTIFICATION_READ_LEN          1

#define KOSHIAN_BATT_SERVICE_UUID  [CBUUID UUIDWithString:@"180F"]
#define KOSHIAN_LEVEL_SERVICE_UUID [CBUUID UUIDWithString:@"2A19"]
#define KOSHIAN_POWER_STATE_UUID   [CBUUID UUIDWithString:@"2A1B"]

/***************************
 KOSHIAN GATT DB
 ****************************/

#define KOSHIAN_SERVICE_UUID [CBUUID UUIDWithString:@"229BFF00-03FB-40DA-98A7-B0DEF65C2D4B"]

// PIO
#define KOSHIAN_PIO_SETTING_UUID [CBUUID UUIDWithString: @"229B3000-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_PIO_PULLUP_UUID [CBUUID UUIDWithString: @"229B3001-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_PIO_OUTPUT_UUID [CBUUID UUIDWithString: @"229B3002-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_PIO_INPUT_NOTIFICATION_UUID [CBUUID UUIDWithString: @"229B3003-03FB-40DA-98A7-B0DEF65C2D4B"]

// PWM
#define KOSHIAN_PWM_CONFIG_UUID [CBUUID UUIDWithString: @"229B3004-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_PWM_PARAM_UUID [CBUUID UUIDWithString: @"229B3005-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_PWM_DUTY_UUID [CBUUID UUIDWithString: @"229B3006-03FB-40DA-98A7-B0DEF65C2D4B"]

// Analog
#define KOSHIAN_ANALOG_DRIVE_UUID [CBUUID UUIDWithString: @"229B3007-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_ANALOG_READ0_UUID [CBUUID UUIDWithString: @"229B3008-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_ANALOG_READ1_UUID [CBUUID UUIDWithString: @"229B3009-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_ANALOG_READ2_UUID [CBUUID UUIDWithString: @"229B300A-03FB-40DA-98A7-B0DEF65C2D4B"]

// I2C
#define KOSHIAN_I2C_CONFIG_UUID [CBUUID UUIDWithString: @"229B300B-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_I2C_START_STOP_UUID [CBUUID UUIDWithString: @"229B300C-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_I2C_WRITE_UUID [CBUUID UUIDWithString: @"229B300D-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_I2C_READ_PARAM_UIUD [CBUUID UUIDWithString: @"229B300E-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_I2C_READ_UUID [CBUUID UUIDWithString: @"229B300F-03FB-40DA-98A7-B0DEF65C2D4B"]

// UART
#define KOSHIAN_UART_CONFIG_UUID [CBUUID UUIDWithString: @"229B3010-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_UART_BAUDRATE_UUID [CBUUID UUIDWithString: @"229B3011-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_UART_TX_UUID [CBUUID UUIDWithString: @"229B3012-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_UART_RX_NOTIFICATION_UUID [CBUUID UUIDWithString: @"229B3013-03FB-40DA-98A7-B0DEF65C2D4B"]

// Hardware
#define KOSHIAN_HARDWARE_RESET_UUID [CBUUID UUIDWithString: @"229B3014-03FB-40DA-98A7-B0DEF65C2D4B"]
#define KOSHIAN_HARDWARE_LOW_BAT_NOTIFICATION_UUID [CBUUID UUIDWithString: @"229B3015-03FB-40DA-98A7-B0DEF65C2D4B"]

// OTA
#define KOSHIAN_UUID_WS_UPGRADE_SERVICE [CBUUID UUIDWithString: @"3908d54f-0c55-4ea1-8fd1-8394a172257d"]
#define KOSHIAN_UUID_WS_UPGRADE_CHARACTERISTIC_CONTROL_POINT [CBUUID UUIDWithString: @"0f7a29bb-a965-4279-8546-b56e981c008b"]
#define KOSHIAN_UUID_WS_UPGRADE_CHARACTERISTIC_DATA [CBUUID UUIDWithString: @"8e922cce-eec6-47b0-b46d-09563a8da638"]

#endif
