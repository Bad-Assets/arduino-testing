/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-light-sensor
 */

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // reads the input on analog pin A0 (value between 0 and 1023)
  int sensor1 = analogRead(A0);
  int sensor2 = analogRead(A1);
  int sensor3 = analogRead(A2);
  int sensor4 = analogRead(A3);
  int sensor5 = analogRead(A4);
  int sensor6 = analogRead(A5);
  int sensor7 = analogRead(A6);
  int sensor8 = analogRead(A7);



  // We'll have a few threshholds, qualitatively determined
  if (sensor1 < 50) {
    Serial.println("sensor1 activated");
  } 
  
  if (sensor2 < 50) {
    Serial.println("sensor2 activated");
  }

  if (sensor3 < 50) {
    Serial.println("sensor3 activated");
  }

  if (sensor4 < 50) {
    Serial.println("sensor4 activated");
  }
  
  if (sensor5 < 50) {
    Serial.println("sensor5 activated");
  }

  if (sensor6 < 50) {
    Serial.println("sensor6 activated");
  }

  if (sensor7 < 50) {
    Serial.println("sensor7 activated");
  }
  
  if (sensor8 < 50) {
    Serial.println("sensor8 activated");
  }

  delay(500);
}
