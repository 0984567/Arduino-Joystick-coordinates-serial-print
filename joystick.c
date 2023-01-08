// Franklin Jolley
// Unit 75 Task 1  

void setup() 
{
  Serial.begin(9600);  // Setup serial communication at 9600 bits per second
  Serial.println("Joystick Module coordinates"); // Print "Joystick Module coordinates" on serial monitor
  delay(1000);
}

void loop() 
{
  int x = analogRead(A0);  // Read values of VRx
  int y = analogRead(A1);  // Read values of VRy

  x = map(x, 0, 1023, -100, 100); // Scale the x values to a range of -100 to 100
  y = map(y, 0, 1023, -100, 100); // Scale the y values to a range of -100 to 100

  Serial.print("X: ");
  Serial.print(x);
  Serial.print("    Y: ");
  Serial.println(y);

  delay(200); // delay 0.2 seconds before printing updated values
}
