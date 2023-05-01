#include <stdio.h>

void main() {
    int digit = 1, sum = 0, count = 0;
    while (digit != 0)
    {
        scanf("%d", &digit);
        sum += digit;
        count++;
    }
    float result = (float)sum / --count;
    printf("%f", result);
}
