int analogPin = 0; // water sensor connected to the analog port 1
//Int led = 12; // LEd connected to the digital mouth 12
int val = 0; // definition variable val initial value as 0
int data = 0; // definition variable data initial value as 0

void setup ()
{
  //PinMode (led, OUTPUT); // definition led as output pin
  Serial.begin (9600); // set the baud rate as 9600
}

void loop ()
{
  val = analogRead (analogPin); // read the simulation value and send to variable val
  if (val > 700) {// judgment variable val is whether more than 700 or not
    //DigitalWrite (LED, HIGH); // variable val greater than 700, LED on
    Serial.println("Greater than 700!");
  }
  else {
      //DigitalWrite (led, LOW); // variable val less than 700, LED off
      Serial.println("Less than 700!");
  }
    data = val; // variable val assignment to variable data
    Serial.println (data); // serial print variable data
    delay (100);
}
