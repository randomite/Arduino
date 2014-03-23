void setup() {
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(A0, OUTPUT);
pinMode(A1, OUTPUT);
pinMode(A3, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(A5, OUTPUT);

}


void loop() {
  test();
}

static void test() {
    for(int ten = 0; ten < 10; ten++) {
               switch(ten) {
                 case 0: 
                     tenZero();
                 break; 
            
                 case 1: 
                     tenOne();
                 break; 
                 
                 case 2: 
                     tenTwo();
                 break; 
                 
                 case 3: 
                     tenThree();
                 break; 
                 
                 case 4: 
                     tenFour();
                 break; 
                 
                 case 5: 
                     tenFive();
                 break; 
                 
                 case 6: 
                     tenSix();
                 break; 
                 
                 case 7: 
                     tenSeven();
                 break; 
                 
                 case 8: 
                     tenEight();
                 break; 
                 
                 case 9: 
                     tenNine();
                 break; 
               }
               
               for (int one = 0; one < 10; one++) {
               }
               
    }     
}                 

        static void tenZero(){
	    digitalWrite(A0, LOW);
            digitalWrite(A1, LOW);
	    digitalWrite(4, LOW);
	    digitalWrite(3, HIGH);
	    digitalWrite(A3,LOW);
	    digitalWrite(2, LOW);
	    digitalWrite(0, LOW);
	    digitalWrite(1, HIGH);

            delay(1000);



            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);


        }
       
         
         static void tenOne(){
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, LOW);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, LOW);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
            
            
            delay(1000);
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
         } 
         
         static void tenTwo(){
           
            digitalWrite(A0, LOW);
            digitalWrite(A1, HIGH);
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            digitalWrite(A3,LOW);
            digitalWrite(2, HIGH);
            digitalWrite(0, LOW);
            digitalWrite(1, HIGH);
            
            delay(1000);
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
           
         }
         
        static void tenThree(){
            digitalWrite(A0, LOW);
            digitalWrite(A1, HIGH);
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            digitalWrite(A3,HIGH);
            digitalWrite(2, LOW);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
            
            delay(1000);
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
          
          
          
        }
        
       static void tenFour(){
           
         
            digitalWrite(A0, HIGH);
            digitalWrite(A1, LOW);
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            digitalWrite(A3,HIGH);
            digitalWrite(2, LOW);
            digitalWrite(0, HIGH);
            digitalWrite(1, LOW);
            
            delay(1000);
            
            
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
         }
        
        
       static void tenFive(){
           
            digitalWrite(A0, LOW);
            digitalWrite(A1, LOW);
            digitalWrite(4, HIGH);
            digitalWrite(3, LOW);
            digitalWrite(A3,HIGH);
            digitalWrite(2, LOW);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
            
            
            delay(1000);
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
         }
         
         
        static void tenSix(){
          
            digitalWrite(A0, LOW);
            digitalWrite(A1, LOW);
            digitalWrite(4, HIGH);
            digitalWrite(3, LOW);
            digitalWrite(A3,LOW);
            digitalWrite(2, LOW);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
            
            delay(1000);
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
        }
        
       static void tenSeven(){
         
            digitalWrite(A0, LOW);
            digitalWrite(A1, HIGH);
            digitalWrite(4, LOW);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, LOW);
            digitalWrite(0, HIGH);
            digitalWrite(1, LOW);
            
            
            delay(1000);
            
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
       }
       
       
       static void tenEight(){
          
            digitalWrite(A0, LOW);
            digitalWrite(A1, LOW);
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            digitalWrite(A3,LOW);
            digitalWrite(2, LOW);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
            
            
            delay(1000);
            
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
        }
        
        
       static void tenNine(){ 
        
            digitalWrite(A0, LOW); 
            digitalWrite(A1, LOW);
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            digitalWrite(A3,HIGH);
            digitalWrite(2, LOW);
            digitalWrite(0, LOW);
            digitalWrite(1, LOW);
            
            delay(1000);
            
            digitalWrite(A0, HIGH);
            digitalWrite(A1, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(3, HIGH);
            digitalWrite(A3,HIGH);
            digitalWrite(2, HIGH);
            digitalWrite(0, HIGH);
            digitalWrite(1, HIGH);
         
         
       }
       
       
       
       
       
       /*
void setDisplay(int number) {
 int left //left digit
 int right //right digit
   display(left, true);
   display(right, false);
}

void display(int digit, boolean left) {
 //displays the digit on the left display if true, right if false 
}

*/


           


