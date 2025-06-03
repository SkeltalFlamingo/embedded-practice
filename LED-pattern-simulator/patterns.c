

#include "patterns.h"
#include "lights.h"


void patternBlinkOnOff() {
  onLight(0);
  printLights();

  offLight(0);
  printLights();
};

void patternAlternate() {
  onLight(0);
  printLights();

  offLight(0);
  onLight(1);
  printLights();

  offLight(1);
};

void patternChase() {
  onLight(0);
  printLights();

  offLight(0);
  onLight(1);
  printLights();

  offLight(1);
  onLight(2);
  printLights();

  offLight(2);
  onLight(3);
  printLights();

  offLight(3);
};

