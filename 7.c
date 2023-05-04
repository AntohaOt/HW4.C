#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);
    int digits[num], countZero = 0, countPlus = 0,  countMin = 0;
    {
        while (num > 0)
        {
            scanf("%d", &digits[--num]);
            if (digits[num] == 0) countZero++;
            if (digits[num] > 0) countPlus++;
            if (digits[num] < 0) countMin++;
        }     
            printf("%d %d %d", countZero, countPlus,  countMin);
    }
}