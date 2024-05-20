int switchState = 0;
int X = 100;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == LOW)
  {
    // Button is not pressed
    digitalWrite(3, HIGH); //Green LED turns on
    digitalWrite(4, LOW);  //Red LED is off
    digitalWrite(5, LOW);  //Red LED is off
  }
  else                     //Button is pressed
  {
    digitalWrite(3, LOW);  //Green LED turns off
    digitalWrite(4, LOW);  //Red LED is off
    digitalWrite(5, HIGH); //Red LED turns on


    delay(X);            //Wait a quarter of a second
    //Toggle the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);   
    
    delay(X);            //Wait another quarter of a second
  }

}                          //Back to the beginning of the loop