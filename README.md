# OTA-TinyML: Load Tensorflow Lite TinyML Models on Arduino Boards via Internet

This repo contains code of OTA-TinyML, that via HTTPS, loads the C source file of ML models from a webserver into the resource-constrained embedded devices in IoT. OTA-TinyML does not strain hardware (resource-friendly) as its implementation is only a few lines of code. It is compatible with a range of ML models (e.g. text, speech, image domains) and MCUs (e.g. Cortex M series, STM32, Xtensa). 

**Why:** OTA-TinyML provides developers and engineers the freedom to remotely re-purpose (load and run the model on demand) IoT devices on-the-fly without the need for physical reflashing. For example, with OTA-TinyML, even the low-cost ESP32 board with only 4 MB flash can dynamically fetch *n* models from webserver such as keyword spotting (3 MB), anomaly detection (2.7 MB), visual wake words (3.2 MB), etc., store in internal memory or external filesystems, then execute any model upon demand.

## MCU Boards, Models for OTA-TinyML Testing

Since OTA-TinyML enables even constrained, low-cost IoT devices to perform end-to-end remote fetching, storing, and execution of ML models. So OTA-TinyML is tested by performing remote fetching of 6 types of ML models, storing them on 4 types of memory units, then loading and executing on 7 popular MCU boards. 

The models and MCU boards used for OTA-TinyML testing are given below.

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

## OTA-TinyML Testing Procedure

For Part 1 testing, to ensure extensiveness, the \texttt{.h} file size of models we fetch from cloud to edge MCUs varies from 112 KB (MicroSpeech) to 143421 KB (Wav2letter). 

For Part 2, we use 4 types of memory units to extensively test the onboard model storing, loading performance of OTA-TinyML. So, SDFS is interfaced to B3, B7; EEFS to B6, B4; Internal SPIFFS of B5; Internal flash memory of B1, B2. 

As shown in the first Figure, we first upload the *.bin* files of 16 pre-trained ML models (6 task types) into an HTTPS webserver. Then, the C++ implementation of the OTA-TinyML approach provided as a *.ino* file (server details entered in this file) is flashed on 7 different MCU boards B1 to B7 using Arduino IDE. At this stage, both the server and edge devices are ready for OTA-TinyML testing. 

## Extras

**Additional Datasets:** In [TinyML datasets](https://github.com/bharathsudharsan/OTA-TinyML/tree/main/TinyML%20Datasets) folder, the following 7 datasets are made available as *.h* files that can be used for training and inference using *Opt-OVO* on MCU boards. The details in brackets are samples size x features count x classes count.
1. [EMG](https://archive.ics.uci.edu/ml/datasets/EMG+data+for+gestures) (1648 x 63 x 5 ): Raw EMG data recorded by MYO Thalmic bracelet worn on a users forearm. This bracelet is equipped with eight sensors equally spaced around the forearm that simultaneously acquire myographic signals.
2. [Gas Sensor Array Drift](https://archive.ics.uci.edu/ml/datasets/Gas+Sensor+Array+Drift+Dataset) (1000 x 128 x 6): Contains measurements from 16 chemical sensors utilized in simulations for drift compensation in a discrimination task of 6 gases at various levels of concentrations.
3. [Gesture Phase Segmentaion](https://archive.ics.uci.edu/ml/datasets/gesture+phase+segmentation) (1000 x 19 x 5):  Contains features extracted from 7 videos with people gesticulating, aiming at studying Gesture Phase Segmentation. It contains 50 attributes divided into two files for each video.
4. [Human Activity](https://archive.ics.uci.edu/ml/datasets/human+activity+recognition+using+smartphones) (10299 x 561 x 6): Database built from the recordings of 30 subjects performing activities of daily living (ADL) while carrying a waist-mounted smartphone with embedded inertial sensors.
5. [Mammographic Mass](http://archive.ics.uci.edu/ml/datasets/mammographic+mass) (830 x 4 x 2): Dataset for discrimination of benign and malignant mammographic masses based on BI-RADS attributes and the patient's age.
6. [Sensorless Drive Diagnosis](https://archive.ics.uci.edu/ml/datasets/dataset+for+sensorless+drive+diagnosis)  (1000 x 48 x 11): Features are extracted from motor current. The motor has intact and defective components. This results in 11 different classes with different conditions.
7. [Sport Activity](https://archive.ics.uci.edu/ml/datasets/Daily+and+Sports+Activities) (4800 x 180 x 10): The dataset comprises motion sensor data of 19 daily and sports activities each performed by 8 subjects in their own style for 5 minutes. Five Xsens MTx units are used on the torso, arms, and legs.
