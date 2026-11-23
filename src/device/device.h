#ifndef DEVICE_H
#define DEVICE_H

#include <Wire.h>

#include "../libs/UnixTime.h"
#include "./gpio/gpio.h"
#include "./runner/runner.h"

// ESP32_Relay_X2_Modbus_V1.1
#define RELAY_COUNT 2
#define INPUT_COUNT 2

extern Device device;

extern const uint8_t relayGpios[RELAY_COUNT];
extern const uint8_t inputGpios[INPUT_COUNT];

void setupDevice();
void setupFirstDevice();
void deviceGPIO(Port* port, uint8_t type);
void loopDevice(uint32_t now);
void onWsEventDevice(void* arg, uint8_t* data, size_t len, uint32_t clientId, uint8_t task);

#endif