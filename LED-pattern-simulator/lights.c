#include "lights.h"
#include <windows.h>
#include <stdbool.h>
#include <stdio.h>

#define LIGHTS_LENGTH 4
static bool lights[LIGHTS_LENGTH] = {false, false, false, false};

static int setLight(int lightId, bool state) {
  if (lightId < 0 || lightId >= LIGHTS_LENGTH) {
    return -1;
  }

  lights[lightId] = state;

  return 0;
}

void printLights() {
  for (int index = 0 ; index < LIGHTS_LENGTH ; index ++ ) {
    printf("%s ", (lights[index] ? "O" : "."));
  }
  printf("\n");
  Sleep(200);
}

int onLight(int lightId) {
  return setLight(lightId, true);
}

int offLight(int lightId) {
  return setLight(lightId, false);
}

void offLightAll() {
  for(int index = 0 ; index < LIGHTS_LENGTH ; index++) {
    lights[index] = false;
  }
}