#include <stdio.h> 

int main() {
  int character; 
  while((character = getchar()) != EOF) {
    if(character == '\t') {putchar('\\'); putchar('t');};
    if(character == '\b') {putchar('\\'); putchar('b');};
    if(character == '\\') {putchar('\\'); putchar('\\');};

    if(character != '\\' && character != '\b' && character != '\t'){
      putchar(character);
    };
  };
  return 0;
}