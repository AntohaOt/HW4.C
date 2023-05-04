#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);
    int digits[num], count = 0;
    if (num >= 1 && num <= 10000)
    {
        while (num > 0)
        {
            scanf("%d", &digits[--num]);
            if (digits[num] > 0) count++;
        }     
        printf("%d", count);
    }
    else
        printf("Массив не соответствует требованиям");
}