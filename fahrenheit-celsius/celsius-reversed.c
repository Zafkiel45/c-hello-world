#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
  float celsius, fahr;

  celsius = UPPER; 
  printf("Celsious --- Fahrenheit\n");
  while(celsius >= LOWER) {
    fahr = (celsius * (9.0/5.0)) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius -= STEP;
  };
}