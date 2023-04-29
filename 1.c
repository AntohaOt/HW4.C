#include <stdio.h>
void main()
{
    // определяем массив 12 месяцев
    int arrDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, y;
    scanf("%d %d", &m, &y);
    int result = arrDays[m - 1];
    if ( (y-2020)%4 == 0 && m == 2 ) result++;
    printf("%d", result);
    
    // каждые 4 года в февралю +1 день. Отсчет от 2020
} 
