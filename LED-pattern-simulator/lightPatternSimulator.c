#include <stdio.h>
#include <windows.h>
#include "patterns.h"
#include "lights.h"



  #define PATTERNS_LENGTH 3

  void (*patterns[PATTERNS_LENGTH])(void) = {patternBlinkOnOff, patternAlternate, patternChase};
  int activePatternIndex = 0;

  void advanceActivePatternIndex() {
    activePatternIndex++;
    if (activePatternIndex >= PATTERNS_LENGTH) {
      activePatternIndex = 0;
    }
  }

int main() {
  for (int iteration = 0 ; iteration < 100 ; iteration++) {
    if (GetAsyncKeyState(VK_ESCAPE) & 0x0001) { // uses logical and and bitmask to check least significant bit of return value, which indicates "key waspressed since last call"
            break;
        }
    if (GetAsyncKeyState(VK_SPACE) & 0x0001) { // uses logical and and bitmask to check least significant bit of return value, which indicates "key waspressed since last call"
            advanceActivePatternIndex();
            offLightAll();
        }
    patterns[activePatternIndex]();
  }

  return 0;
}