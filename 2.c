#include <stdio.h>

int dobro(int n) { return n * 2; }

int dobro_maior(int n, int m) {
  if (n > m) {
    return dobro(n);
  }

  return dobro(m);
}

int main(void) { return 0; }