# ultrasonic-music

***Hello, this is about really simple project, we will need:***

*• Arduino Mega - you could use any other Arduino Board*                                                                                                                                                                               
*• HC-SR04 Ultrasonic Sensor -  more later*                                                                                      
*• Piezo Buzzer or Speaker*                                                                                                                                  
*• Jumper Cables -  Male to Male*                                                                                                                                 
*• A functioning computer with the Arduino IDE installed*                                                                                                                                 

**Ultrasonic sensor**                                                                                                                                                                                
We will be using this sensor to measure distances.

It detects the distance of the closest object in front of the sensor (from 3 cm up to 400 cm). 
As the name indicates, ultrasonic sensors measure distance by using ultrasonic waves.
The sensor head emits an ultrasonic wave and receives the wave reflected back from the target. Ultrasonic Sensors measure the distance to the target by measuring the time between the emission and reception.

*picture for better understanding*                                                                                                                                                                                                                                    
https://www.keyence.com/Images/sensorbasics_ultrasonic_info_img_01_1547954.jpg                                                                                                                                                                                    

You may ask how we calculate the distance. The formula is:                                                                                                                                                                                    
***L = 1/2 × T × C***                                                                                                                                                                                    
where L is the distance, T is the time between the emission and reception, and C is the sonic speed the value is multiplied                                                                                           by 1/2 because T is the time for go-and-return distance.


**How does project work?**                                                                                               
We use the distance detection of the sensor to set up different musical notes. So if there is an obstruction at 4 cm it plays one note, and a different note if the obstruction is at 10 cm. Doing this, we can get an octave of notes, which we play using an obstruction. The trigger pin sends out a pulse, and the echo pin receives its echo from the object. They work in unison to determine the time taken to return. We then convert this time into distance.

These are the notes and their ideal distances from the sensor. You can be off by half a centimeter while actually playing.


• e4 - 5cm                                                                                       
• d4# - 9cm                                                                                       
• b3 - 13cm                                                                                       
• d4 - 17cm                                                                                       
• c4 - 21cm                                                                                       
• a3- 25cm                                                                                       
• d3 - 29cm                                                                                       
• f3 - 33cm                                                                                       
