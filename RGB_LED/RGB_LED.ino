void setup() {               
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);//power for anode 
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
}
  
void loop() {
  

 digitalWrite (9, HIGH);//power pin, HIGH by default

 digitalWrite (8, LOW);//red
 digitalWrite (10,LOW);//blue
 digitalWrite (11, HIGH);//green

 for (int i=0; i<7; i++){
  
   switch(i){
    case 0:
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, LOW);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;
     
     case 1:
       digitalWrite (8, LOW);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;
     
     case 2:
       digitalWrite (8, HIGH);//red
       digitalWrite (10,LOW);//blue
       digitalWrite (11, HIGH);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;
     
     case 3:
       digitalWrite (8, LOW);//red
       digitalWrite (10,LOW);//blue
       digitalWrite (11, LOW);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;
     
     
    case 4:
       digitalWrite (8, LOW);//red
       digitalWrite (10,LOW);//blue
       digitalWrite (11, HIGH);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;
      
      
      
      
      case 5:
       digitalWrite (8, LOW);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, LOW);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;
      
      
      
     case 6:
       digitalWrite (8, HIGH);//red
       digitalWrite (10,LOW);//blue
       digitalWrite (11, LOW);//green
       delay(1000);
       digitalWrite (8, HIGH);//red
       digitalWrite (10,HIGH);//blue
       digitalWrite (11, HIGH);//green
       break;       
  }//end switch statement 
 }//end for loop
}//end main loop

