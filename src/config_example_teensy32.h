#ifndef CONFIG_H
#define CONFIG_H

//===================================
// CONFIGURATION CONSTANTS
//===================================

// GENERAL
#define ADC_RESOLUTION 16
#define BAUD_RATE 115200
#define FTM0PIN 5
#define FTM1PIN 3
#define FTM2PIN 25
#define NUM_PINS 34
#define PWM0_FREQUENCY 187500
#define PWM1_FREQUENCY 187500
#define PWM2_FREQUENCY 187500
#define PWM_RESOLUTION 8

// DEVICES
#define ANALOG_INPUT_CODE 'A'
#define ANALOG_INPUT_READ_CODE 'R'
#define ANALOG_OUTPUT_CODE 'a'
#define ANALOG_OUTPUT_WRITE_CODE 'W'
#define COLOR_CODE 'C'
#define COLOR_READ_CODE 'R'
#define DEVICELIST_ADD_CODE 'A'
#define DEVICELIST_CLEAR_CODE 'C'
#define DEVICELIST_CODE 255
#define DEVICELIST_HELLO_CODE 'K'
#define DEVICELIST_REMOVE_CODE 'R'
#define DIGITAL_INPUT_CODE 'D'
#define DIGITAL_INPUT_READ_CODE 'R'
#define DIGITAL_OUTPUT_CODE 'd'
#define DIGITAL_OUTPUT_WRITE_CODE 'W'
#define ENCODER_CODE 'E'
#define ENCODER_READ_CODE 'R'
#define ENCODER_WRITE_CODE 'W'
#define FEEDBACK_MOTOR_CODE 'm'
#define GYRO_CALIBRATE_CODE 'C'
#define GYRO_CODE 'G'
#define GYRO_READ_CODE 'R'
#define IR_CODE 'I'
#define IMU_CODE 'i'
#define IMU_READ_CODE 'R'
#define MOTOR_CODE 'M'
#define MOTOR_WRITE_CODE 'W'
#define SERVO_CODE 'S'
#define SERVO_WRITE_CODE 'W'
#define STEPPER_CODE 's'
#define ULTRASONIC_CODE 'U'

// PACKETS
#define PACKET_MAX_SIZE 32
#define PACKET_MIN_REQUEST_SIZE 6
#define PACKET_MIN_RESPONSE_SIZE 5
#define PACKET_START_BYTE 240

// SERIAL ERRORS
#define PACKET_OOR_CODE 'L'
#define NO_MANS_LAND_CODE 'N'
#define PACKET_SHORT_CODE 'S'

// GENERAL RESPONSES
#define DEST_NOT_FOUND_CODE 'D'
#define OK_CODE 'G'
#define REQUEST_BODY_INVALID_CODE 'W'
#define REQUEST_LENGTH_INVALID_CODE 'X'
#define DEVICE_OOR_CODE 'Y'
#define DEVICE_INVALID_CODE 'Z'

#endif
