#include <Arduino.h>
#include <TM1637Display.h>
#include <ezButton.h>

// TM1637 7-segment display pins
#define TM_CLK D1
#define TM_DIO D2

// Rotary encoder pins
#define ENC_CLK D7
#define ENC_DT  D6
#define ENC_SW  D5

#define DIRECTION_CW  0
#define DIRECTION_CCW 1

int counter = 0;
int direction = DIRECTION_CW;
int CLK_state;
int prev_CLK_state;

TM1637Display display(TM_CLK, TM_DIO);
ezButton button(ENC_SW);

void setup() {
  Serial.begin(9600);

  display.setBrightness(5);
  display.showNumberDec(counter, false, 4);

  pinMode(ENC_CLK, INPUT);
  pinMode(ENC_DT, INPUT);
  button.setDebounceTime(50);

  prev_CLK_state = digitalRead(ENC_CLK);
}

void loop() {
  button.loop();  // Required for debouncing

  CLK_state = digitalRead(ENC_CLK);

  // Detect rising edge (LOW → HIGH)
  if (CLK_state != prev_CLK_state && CLK_state == HIGH) {
    if (digitalRead(ENC_DT) == HIGH) {
      counter--;
      direction = DIRECTION_CCW;
    } else {
      counter++;
      direction = DIRECTION_CW;
    }

    Serial.print("Direction: ");
    Serial.print(direction == DIRECTION_CW ? "CW" : "CCW");
    Serial.print(" | Counter: ");
    Serial.println(counter);

    display.showNumberDec(counter, false, 4);
  }

  prev_CLK_state = CLK_state;

  // ✅ Reset counter to 0 on button press
  if (button.isPressed()) {
    counter = 0;
    display.showNumberDec(counter, false, 4);
    Serial.println("Counter reset to 0.");
  }
}
