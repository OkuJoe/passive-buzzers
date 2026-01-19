int buzz_pin = 7;

// To produce a tone, we need a "square wave" (High, then Low).
// 1 millisecond = 1000 microseconds.
// If we want the buzzer on for 1ms and off for 1ms, we use 1000 microseconds.
int buzz_time_high = 1000;  
int buzz_time_low = 1000; 

void setup() {
  // CONFIGURATION
  // "pinMode" must start with a lowercase 'p'
  pinMode(buzz_pin, OUTPUT); 
  
  Serial.begin(9600);
}

void loop() {
  // 1. Turn the buzzer ON (push voltage out)
  digitalWrite(buzz_pin, HIGH);
  
  // 2. Wait for a tiny amount of time
  // delayMicroseconds takes time in microseconds. 
  delayMicroseconds(buzz_time_high); 
  
  // 3. Turn the buzzer OFF (stop voltage)
  // FIXED TYPO: "digitaMicrosecondslWrite" changed to "digitalWrite"
  digitalWrite(buzz_pin, LOW);
  
  // 4. Wait again
  // It is better to use delayMicroseconds here too for consistent tone pitch
  delayMicroseconds(buzz_time_low);
}



/*

/*
using a passive buzzer
by adjusting the delay time you can get tone from the buzzer
*/



int buzz_pin=7;
int buzz_time=1;   // TIME IN MILISECONDS 1*1000=1000 microseconds
int buzz_time2=2;  // TIME IN MILISECONDS 2*1000=2000 microseconds
void setup() {
  // put your setup code here, to run once:
PinMode(buzz_pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzz_pin,HIGH);
delayMicroseconds(buzz_time); // delay is in microseconds where one milisecondis equal to 1000 microseconds
digitaMicrosecondslWrite(buzz_pin,LOW);
delay(buzz_time2);

}
*/
