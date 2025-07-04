#include <stdio.h>

int main() {
  float celsius, fahr;
  float step, upper, lower; 

  step = 20;
  upper = 300;
  lower = 0;

  celsius = lower; 
  printf("Celsious --- Fahrenheit\n");
  while(celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  };
}