#include <stdio.h>

void printcharsonnewline(char *s);

void printcharsonnewline(char *s) {
  for (char index = 0; s[index] != 0; index++) {
    char currentchar = s[index];
    printf("%c\n", currentchar);
  }
}

int main() {
  char input[] = "someString";
  printcharsonnewline(input);

  return 0;
}

