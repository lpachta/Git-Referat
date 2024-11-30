#include "modul.h"
#include <stdio.h>
#include <stdlib.h>

Trojuhelnik *newTrojuhelnik(float A, float B, float C) {
  Trojuhelnik *newT = malloc(sizeof(Trojuhelnik));
  if (newT == NULL) {
    perror("newTrojuhelnik: malloc failed");
    return NULL;
  }
  newT->strana_A = A;
  newT->strana_B = B;
  newT->strana_C = C;
  return newT;
}

// UKOL 1: feature: udelej funkci na vraceni obvodu trojuhelnika

void printTrojuhelnik(Trojuhelnik *trojuhelnik) {
  printf("              /\\          \n");
  printf("             /  \\         \n");
  printf("            /    \\        \n");
  printf("      %2g   /      \\  %2g     \n", trojuhelnik->strana_A,
         trojuhelnik->strana_B);
  printf("          /        \\      \n");
  printf("         /          \\     \n");
  printf("        /____________\\    \n");
  printf("\n");
  printf("              %2g            ", trojuhelnik->strana_C);
}
