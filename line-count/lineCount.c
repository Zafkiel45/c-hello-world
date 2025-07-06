#include <stdio.h>

int main() {
  int ln, count; 
  count = 0;
  // added more cases, as tabs and blanks. The motivation is test and learn more. 
  while((ln = getchar()) != EOF) {
    if(ln == '\n' || ln == '\t' || ln == ' ') {
      ++count;
    };
  };

  printf("%d\n", count);
  return 0;
}