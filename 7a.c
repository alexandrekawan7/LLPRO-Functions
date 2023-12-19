#include <stdio.h>

int s(int a, int b) { return a + b; }

int main(void) {
  int a, b;

  printf("Digite dois números inteiros: ");
  
  scanf("%d%d", &a, &b);

  printf("%d\n", s(a, b));
  
  return 0;
}