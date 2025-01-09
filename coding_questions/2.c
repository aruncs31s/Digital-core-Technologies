#include <stdio.h>

void main() {
  int something = 2;

  switch (something) {
  case 1:
    printf("A");
  case 2:
    printf("B");
  default:
    printf("C");
  case 3:
    printf("D");
  }
}
