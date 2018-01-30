#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int SwitchPin = 6;
int SwitchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(SwitchPin,INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Crystal Ball!");
}

void loop() {
  SwitchState = digitalRead(SwitchPin);
  if (SwitchState != prevSwitchState){
  if (SwitchState == LOW) {
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("The ball says:");
    switch(reply){
      case 0:
      lcd.print("Yes");
      break;
      case 1:
      lcd.print("Most Likely");
      break;
      case 2:
      lcd.print("Probably");
      break;
      case 3:
      lcd.print("A chance");
      break;
      case 4:
      lcd.print("Unsure");
      break;
      case 5:
      lcd.print("Ask beter");
      break;
      case 6:
      lcd.print("Doubtful");
      break;
      case 7:
      lcd.print("No");
      break;

      }
    }
  }
}











