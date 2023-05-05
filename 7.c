#include <stdio.h>

void main() {
    int num;
    // Ввод числа
    scanf("%d", &num);
    // Создание массива заданной длины и счетчиков
    int digits[num], countZero = 0, countPlus = 0,  countMin = 0;
    {
        // Цикл ввода чисел для подсчета
        while (num > 0)
        {
            // Ввод чисел
            scanf("%d", &digits[--num]);
            // Подсчет по условиям
            if (digits[num] == 0) countZero++;
            if (digits[num] > 0) countPlus++;
            if (digits[num] < 0) countMin++;
        }
        // Вывод результата
        printf("%d %d %d", countZero, countPlus,  countMin);
    }
}
