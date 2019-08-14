void setup() {//I declare whether I'm using the pins for input/output 
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
}
int sp = 10;      //Speaker Pin
int tp = 7;       //Trigger Pin
int ep = 8;       // Echo Pin
int c = 523;
int d = 587;
int e = 659;
int f = 698;     //These are the frequency      
int g = 784;     //values of the different notes
int a = 880;   
int b = 988;
int c2 = 1047;
void loop() {     //This is the main loop, that keeps repeating
  int notes[] = {c,d,e,f,g,a,b,c2}; //An array storing all the notes. It's kind of like a dictionary.
  long duration, distance; //Variables to store the values of time and length
  digitalWrite(tp,LOW);
  delayMicroseconds(2);         
  digitalWrite(tp,HIGH);      //This area sends out a pulse from the trigger
  delayMicroseconds(5);
  digitalWrite(tp,LOW);                 
  duration = pulseIn(ep, HIGH); //The echo is recieved, and saved as the duration
  distance = (duration/2)/29.1; // We convert the time into distance in centimeters, using the speed of sound and other factors.
  if(distance>4&&distance<42)
  {
    if(distance>4&&distance<7)      //For a distance between 4 and 7, it plays C for 100 milliseconds
      tone(sp,notes[0],100);
    else 
      if(distance>8&&distance<11)
        tone(sp,notes[1],100);      //For a distance between 8 and 11, it plays D for 100 milliseconds
    else
      if(distance>12&&distance<15)
        tone(sp,notes[2],100);      //For a distance between 12 and 15, it plays E for 100 milliseconds
    else
      if(distance>16&&distance<19)
        tone(sp,notes[3],100);      //For a distance between 16 and 19, it plays F for 100 milliseconds
    else
      if(distance>20&&distance<23)
        tone(sp,notes[4],100);      //For a distance between 20 and 23, it plays G for 100 milliseconds
    else
      if(distance>24&&distance<27)
        tone(sp,notes[5],100);      //For a distance between 24 and 27, it plays A for 100 milliseconds
    else
      if(distance>28&&distance<31)
        tone(sp,notes[6],100);      //For a distance between 28 and 31, it plays B for 100 milliseconds
    else
      if(distance>32&&distance<35)
        tone(sp,notes[7],100);      //For a distance between 32 and 35, it plays high C for 100 milliseconds
  }

}
