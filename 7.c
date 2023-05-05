#include <stdio.h>

void main() {
    // Создаем переменную "num":
    int num;
    // Вводим число, которое отвечает за кол-во элементов в массиве:
    scanf("%d", &num);
    // Создаем массив, длина которого зависит от значения переменной "num", а также создаем переменные:
    int digits[num], countZero = 0, countPlus = 0,  countMin = 0;
    {
        // Создаем цикл ввода чисел для подсчета:
        while (num > 0)
        {
            // Вводим числа:
            scanf("%d", &digits[--num]);
            // Создаем условия, проверяем их и добавляем к переменным единицы:
            if (digits[num] == 0) countZero++;
            if (digits[num] > 0) countPlus++;
            if (digits[num] < 0) countMin++;
        }
        // Выводим результат всех переменных:
        printf("%d %d %d", countZero, countPlus,  countMin);
    }
}
