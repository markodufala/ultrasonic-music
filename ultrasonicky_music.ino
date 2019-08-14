// defines pins numbers
 const int tp = 10;
const int ep = 9;
      int sp = 7
long duration,distance;
     
int e4 = 329.63;
int d4# = 311.13;
int b3 = 246.94;
int d4 = 293.66;     //These are the frequency      
int c4 =  261.63;     //values of the different notes
int a3 = 220;   
int d3 = 146.83;
int f3 = 174.61;      
int a3# =  233.08;
int buttonPin = 4;
int buttonState = 0;


void setup() {
 pinMode(tp, OUTPUT); // Sets the trigPin as an Output
 pinMode(ep, INPUT); // Sets the echoPin as an Input
 Serial.begin(9600); // Starts the serial communication
 pinMode(sp, OUTPUT);
 pinMode(buttonPin, INPUT);
}

  void loop() {
     buttonState = digitalRead(buttonPin);
     int notes[] = {e4,d4#,b3,d4,c4,a3,d3,f3}; 
// Clears the trigPin
digitalWrite(tp, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(tp, HIGH);
delayMicroseconds(5);
digitalWrite(tp, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(ep, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance is: ");
Serial.print(distance);
Serial.println(" centimeters ");

if(distance>4&&distance<42)
  {
    if(distance>4&&distance<7)      //e4
      tone(sp,notes[0],650);
    else 
      if(distance>8&&distance<11)
        tone(sp,notes[1],650);      //d4
    else
      if(distance>12&&distance<15)
        tone(sp,notes[2],700);      //b3
    else
      if(distance>16&&distance<19)
        tone(sp,notes[3],700);      //d4#
    else
      if(distance>20&&distance<23)
        tone(sp,notes[4],700);      //c4
    else
      if(distance>24&&distance<27)
        tone(sp,notes[5],700);      //a3
    else
      if(distance>28&&distance<31)
        tone(sp,notes[6],1900);      //d3
    else
      if(distance>32&&distance<35)
        tone(sp,notes[7],700);      //f3
         
  }

}
