// Stepper Motor with a Remote
case 0xFFA857:                       
small_stepper.setSpeed(300); 
Steps2Take =  2048;                        
small_stepper.step(Steps2Take);
delay(2000); 
break;

case 0xFF629D:                       
small_stepper.setSpeed(500);
Steps2Take  =  -2048;                      
small_stepper.step(Steps2Take);
delay(1000); 
break;



