#include <stdio.h>

void main() {
    int digit, bin[sizeof(digit)*8], sign = 0; // Определяем размер переменной "digit" в байтах
    scanf("%d", &digit);
    if (digit < 0)
    {
        sign = 1;
        digit = -digit;
    }
    int i = 0;
    while (digit != 0)
    {
        bin[i++] = digit % 2;
        digit = digit / 2;
    }
    if (sign) printf("-");
    while (i > 0)
        printf("%d", bin[--i]);
}