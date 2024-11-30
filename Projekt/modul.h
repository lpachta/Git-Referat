#ifndef MODUL
#define MODUL

typedef struct {
  float strana_A;
  float strana_B;
  float strana_C;
} Trojuhelnik;

Trojuhelnik *newTrojuhelnik(float A, float B, float C);

// UKOL 2: develop/feature: udelej funkci na vraceni obvodu trojuhelnika
void printTrojuhelnik(Trojuhelnik *trojuhelnik);

#endif // !MODUL
