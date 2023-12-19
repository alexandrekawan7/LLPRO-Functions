#include <stdio.h>
#include <stdbool.h>

int factorial(int n) {
    int r = n;

    do {
        r = r * (--n);
    } while (n != 0);

    return n;
}