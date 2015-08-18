//
// fade_led.ino - Fade an LED using PWM on an Arduino
//
// See https://www.arduino.cc/en/Tutorial/PWM
// See https://www.arduino.cc/en/Tutorial/Fade

int led = 5;
int increment = 5;
int brightness = 0;
int msec_delay = 30;

// The min and max duty cycles
// See https://www.arduino.cc/en/Reference/AnalogWrite
int minimum = 0;
int maximum = 255;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  brightness += fade;
  if (brightness < minimum || brightness > maximum) {
    increment = -increment;
    brightness += increment;
  }
  analogWrite(led, brightness);
  delay(msec_delay);
}
