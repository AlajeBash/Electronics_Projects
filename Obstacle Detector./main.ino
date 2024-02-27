// Define the pin for the buzzer
#define BUZZER_PIN 9
#define Trig 5
#define Echo 4

void setup() {
  // Initialize the buzzer pin as an output
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Trigger the ultrasonic sensor
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);

  // Read the time taken for the pulse to return
  long duration = pulseIn(Echo, HIGH);

  // Calculate distance in cm
  int distance = duration * 0.034 / 2;

  // Check if an object is within a certain distance (e.g., 20cm)
  if (distance < 20) {
    // If an object is detected within 20cm, make the buzzer sound
    tone(BUZZER_PIN, 1000);
  } else {
    // If no object is detected within 20cm, turn off the buzzer
    noTone(BUZZER_PIN);
  }

  // Print distance for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Delay before next iteration
  delay(100); // Adjust the delay time as needed
}
