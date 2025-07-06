#include <stdio.h>

int main() {
  int previousChar, character; 

  previousChar = 0;

  while((character = getchar()) != EOF) {
    if(character == ' ') {
      if(previousChar != ' ') {
        putchar(character);
        previousChar = character;
      };
    };

    if(character != ' ') {
      putchar(character);
      previousChar = character;
    };
  };

  return 0;
}