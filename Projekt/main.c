#include "modul.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  Trojuhelnik *trojuhelnik = newTrojuhelnik(10, 5, 44);

  // chyba v produkci: neosetrujeme zda-li neni trojuhlenik NULL

  printTrojuhelnik(trojuhelnik);
  return EXIT_SUCCESS;
}
