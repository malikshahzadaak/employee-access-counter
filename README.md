# Employee Access Counter System
ESP32-based solution for tracking employee entries with physical counter, LCD display, and web dashboard.

## Features
- Real-time counting with physical button
- 16x2 LCD display with multiple view modes
- Web dashboard showing daily/monthly stats
- Automatic daily reset
- Data persistence through power cycles

## Hardware Requirements
- ESP32 Dev Board
- 16x2 I2C LCD (address 0x27)
- 4x Tactile buttons
- LED with 220Ω resistor
- Breadboard & jumper wires

## Setup
1. Upload `employee_counter_esp32.ino` to ESP32
2. Connect components as per pinout below
3. Configure WiFi credentials in code
4. Access dashboard at `http://<ESP_IP>`

## Pin Connections
| ESP32 GPIO | Component       |
|------------|-----------------|
| 12         | RESET_BTN       |
| 13         | COUNTER_BTN     |
| 14         | LED             |
| 15         | WIFI_BUTTON     |
| 26         | MODE_BUTTON     |
| SDA (21)   | LCD SDA         |
| SCL (22)   | LCD SCL         |
