
#include <Keypad.h>

void setup()
{
  Serial.begin(9600);
}

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'#', '9', '6', '3'},
  {'0', '8', '5', '2'},
  {'*', '7', '4', '1'},
  {'D', 'C', 'B', 'A'}
};

byte rowPins[ROWS] = {28, 27, 26, 25};
byte colPins[COLS] = {/* Not 0 - 40*/, 30, 29, 3}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys),colPins, rowPins,  ROWS, COLS); 
  
void loop(){

  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
}
// ROW 0 | 25
// ROW 1 | 26
// ROW 2 | 27
// ROW 3 | 28

// COL 0 | 3
// COL 1 | 14
// COL 2 | 30
// COL 3 | 10
/*6
6
8
11
12
13
14
15
16
18
*/
