#include "modul.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  Trojuhelnik *trojuhelnik = newTrojuhelnik(10, 5, 44);

  // UKOL 3: main: neosetrujeme zda-li neni trojuhlenik NULL

  printTrojuhelnik(trojuhelnik);

  // UKOL 2: pridej sem vypis obvodu trojuhelnika
  return EXIT_SUCCESS;
}
