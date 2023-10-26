#include <iostream>

#include "Play.h"

int main() {
  Play playCycle(int maxCycles = 3, double snareTriggerDistance = 5);
  Play initPlay(int numPersonas = 2, int numSnares = 3, int matrixWidth = 20,
                int matrixHeight = 15);

  // not sure how to test

  // if persono wins
  void playCycle {
    if (maxCycles = 0) {
      printf("Persona has won the game!");
    }
    // if maximum cycles are reache
    else {
      printf("Maximum number of cycles reached. Game over.");
    }
  }
  return 0;
}