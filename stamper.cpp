
#include "stamper.h"
#include <Servo.h>
Servo servo;
stamper::stamper() {
    
}

    void begin(int servoPin){
      servo.attach(servoPin);
    };
    void stampHand(){
      if (pressAloud == true)
      stamp.press(pressDown)
      delay(500);
      stamp.press(pullUp)
      pressAloud = false; 
      else{
      stamp.press(pullUp)
      delay(500);
      pressAloud = true; 
      }//All of this is to keep it from double stamping.
    };
    void detectHand(){};//do this later.
