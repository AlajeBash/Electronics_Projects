# Ultrasonic Sensor with Buzzer

This Arduino program utilizes an ultrasonic sensor to detect the distance of an object. When an object is detected within a certain range (e.g., 20cm), a buzzer connected to the Arduino will sound.

## Components Required
- Arduino board
- Ultrasonic sensor (HC-SR04)
- Buzzer
- Jumper wires
- And a Bread Board

## Circuit Diagram
Connect the components as follows:
![Circuit Diagram](https://github.com/AlajeBash/Electronics_Projects/blob/main/Obstacle%20Detector./ObjectDetactor.png)

## Connection
### Arduino 
Connect the Arduino to a Computer Or Power Bank

### Ultrasonic Sensor
- GND --> GND
- 5V --> VCC
- Arduino Pin 5 --> Trig Pin
- Arduino Pin 4 --> Echo Pin

### Buzzer
- Negative --> GND.
- Positive Pin --> Arduino Pin 9.


## Program Description

- The ultrasonic sensor is connected to pins `Trig` (trigger) and `Echo` (echo) of the Arduino.
- The buzzer is connected to pin `BUZZER_PIN`.
- In the `setup()` function, the pin modes are set and serial communication is initialized.
- The `loop()` function repeatedly triggers the ultrasonic sensor to send out a pulse and measures the time taken for the pulse to return.
- Based on the measured duration, the distance to the object is calculated in centimeters.
- If an object is detected within a certain distance (e.g., 20cm), the buzzer will sound; otherwise, it remains silent.
- The measured distance is printed via serial communication for debugging purposes.
- There is a delay of 100 milliseconds between each iteration of the loop.

## Usage

1. Connect the components according to the provided circuit diagram.
2. Upload the provided Arduino code to your Arduino board.
3. Open the serial monitor to view the distance measurements.
4. Place objects in front of the ultrasonic sensor to test the buzzer functionality.

## Project Link On Thinkercad
[Feel Free To thinker it](https://www.tinkercad.com/things/bbRDZ6IULxZ-object-detector)

## Author
- Github: [My Github Ptofile](https://github.com/AlajeBash)
- LinkedIn:
- Instagram:
- Youtube:
