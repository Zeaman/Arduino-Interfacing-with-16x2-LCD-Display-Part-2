/* Title: Arduino Interfacing with 16x2 LCD display */
#include<LiquidCrystal.h>           //call the library of LCD

LiquidCrystal lcd(2,3,8,9,10,11); //(RS, E,D4,D5,D6,D7) pins connection to the arduino   


void setup()                  
{
  lcd.begin(16,2);                //Intalizing the LCD size of 16x2, coulmns:16 & rows:2
}

void loop() 
{
  lcd.setCursor(0,0);             // set the cursor of the LCD @ (0,0) coulmn-0 & row-0 
  lcd.blink();                    // a function to create blinking of LCD at above specified cursor location 
  delay(2000);                    // delay for blinking: 2 sec
  lcd.cursor();                   // Under_cursor blinking function
  delay(1000);                    // delay for Under_cursor blinking
  lcd.noCursor();                 // turn-off the Under_cursor blinking
  lcd.noBlink();                  // switch-off the belinking function
  lcd.print("Hello ");            // display the first output at above specified cursor location
  lcd.setCursor(0,1);             // set the cursor position @ (0,1) column-0 & row-1
  lcd.print("T|Tech#Projects");   // display the second output at above specified cursor location
  delay(3000);                    // delay for displaying: 3 sec
  lcd.clear();                    // clear the LCD
  lcd.setCursor(0,0);             // set the cursor position @ (0,0) column-0 & row-0
  lcd.print("How R U?");          // display the third output @ the above location
  delay(3000);                    // delay for display: 3 sec
  lcd.clear();                    // finaly clear the LCD
}
