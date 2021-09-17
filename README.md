# OTA-TinyML: Load Tensorflow Lite TinyML Models on Arduino Boards via Internet

This repo contains code of OTA-TinyML, that via HTTPS, loads the C source file of ML models from a webserver into the resource-constrained embedded devices in IoT. OTA-TinyML does not strain hardware (resource-friendly) as its implementation is only a few lines of code. It is compatible with a range of ML models (e.g. text, speech, image domains) and MCUs (e.g. Cortex M series, STM32, Xtensa). The OTA-TinyML is tested by performing remote fetching of 6 types of ML models, storing them on 4 types of memory units, then loading and executing on 7 popular MCU boards. 

## MCU Boards, Models for OTA-TinyML Testing

### MCU boards (B1 - B7)

B1: [Teensy 4.0](https://www.pjrc.com/teensy/) (Cortex-M7 @600 MHz, 2MB Flash, 1MB SRAM) <br/>
B2: [STM32 Nucleo H7](https://www.st.com/en/evaluation-tools/nucleo-h743zi.html) (Cortex-M7 @480 MHz, 2MB Flash, 1 MB SRAM) <br/>
B3: [Arduino Portenta](https://store.arduino.cc/portenta-h7) (Cortex-M7+M4 @480 MHz, 2MB Flash, 1MB SRAM) <br/>
B4: [Feather M4 Express](https://www.adafruit.com/product/3857)  (Cortex-M4 @120 MHz, 2MB Flash, 192KB SRAM) <br/>
B5: [Generic ESP32](https://esphome.io/devices/nodemcu_esp32.html) (Xtensa LX6 @240 MHz, 4MB Flash, 520KBSRAM) <br/>
B6: [Arduino Nano 33](https://store.arduino.cc/arduino-nano-33-iot) (Cortex-M4 @64 MHz, 1MB Flash, 256KB SRAM) <br/>
B7: [Raspberry Pi Pico](https://www.raspberrypi.org/products/raspberry-pi-pico/) (Cortex-M0+ @133 MHz, 16MB Flash, 264KB SRAM) <br/>

### ML Models

|          Task: Model Name          |      Score      | .tflite (KB) |  .h (KB)  |
|:----------------------------------:|:---------------:|:------------:|:---------:|
| Recognize Gestures: MagicWand      | 0.67 (Acc)      | 19           | 118       |
| Visual Wake Words: MicroNet S-L    | 0.76-0.82 (Acc) | 273-529      | 1689-3267 |
| Speech Recognition: Wav2letter     | 0.0783 (LER)    | 22600        | 143421    |
| Keyword Spotting: DNN S-L          | 0.82-0.86 (Acc) | 82-491       | 508-3029  |
| Keyword Spotting: CNN S-L          | 0.91-0.92 (Acc) | 75-492       | 436-3029  |
| Keyword Spotting: MicroSpeech      | 0.62 (Acc)      | 18           | 112       |
| Image Classification: MobileNet v2 | 0.69 (Acc)      | 3927         | 24215     |
| Anomaly Detection: MicroNet S-L    | 0.95-0.96 (AUC) | 246-452      | 1523-2794 |