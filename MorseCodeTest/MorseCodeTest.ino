//Initilizing the variables to be used
int buzzerPin=13;
int sound=300;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//tone(buzzerPin, sound);     //function which takes the location of the pin where buzzer is connect and take the intensity of sound
//delay(1000);
//noTone(buzzerPin);      //for turning off the buzzer
//delay(1000);

//Assuming, Unit Time=1 second
  //Dot=1 unit
  //Dash=3 units
//sound for dits/dot
tone(buzzerPin, sound);
delay(1000);
noTone(buzzerPin);
delay(1000);

//sound for dahs/dash
tone(buzzerPin, sound);
delay(3000);
noTone(buzzerPin);
delay(1000);
}
