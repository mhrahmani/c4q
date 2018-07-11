//declaring our variables. we do it in the beginning so they turn
//into global variables that can be used in any part of the code

int val = 0;
int val2 = 0;
int thresh = 300;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); //this initializes the Serial Monitor, and the baud rate.
  
  pinMode(11, OUTPUT); //set pin 11 as an output (for buzzer)
  

}

void loop() {
  // put your main code here, to run repeatedly:

  
  val = analogRead(0); //reads the value of Piezo1 sensor from Analog Pin 0 and put it into val1
  
  val2 = analogRead(1); //reads the value of Piezo2 sensor from Analog Pin 1 and put it into val2

  // checking if the piezo1 has bin "hit". meaning the value is bigger than our threshold
  if (val > thresh){ 
    tone(11, 300, 30); //play a tone, on pin 11, with 300Hz frequency, for 30 milli seconds
    }

    // checking if the piezo2 has bin "hit". meaning the value is bigger than our threshold  
  if (val2 > thresh){ 
    tone(11, 500, 30); //play a tone, on pin 11, with 500Hz frequency, for 30 milli seconds
    }
  

}
