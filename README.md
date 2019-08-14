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


                                                                                                                                       
