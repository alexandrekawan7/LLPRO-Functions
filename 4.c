#include <stdio.h>

int maior_de_dois(int a, int b) { return (a > b) ? a : b; }

int maior_de_tres(int a, int b, int c) {
  return maior_de_dois(maior_de_dois(a, b), c);
}

int main(void) { return 0; }