#define DRUM1 0    // Our analog pin

byte val = 0;      // Initializing the variable for the voltage value

void setup()
{
  Serial.begin(9600);  // Initializing the serial port at 9600 baud
}

void loop()
{
  val = analogRead(DRUM1);  // Read the voltage
  Serial.println(val); // Print the voltage to the terminal
}
