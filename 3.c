#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char password[15]; // Выделяем память с запасом, что бы определить - ввел ли пользователь больше 14 символов:
    scanf("%15s", &password);
    //printf(password);
    int len = strlen(password), bs=0, ss=0, dd=0, os=0;
    if (len >= 8 && len <= 14)
    {
        for (int i=0;  i < len; i++)
        {
            char ch = password[i];
            if (ch >= 33 && ch <= 126)
            {
                if (islower(ch)) ss = 1;
                else 
                    if (isupper(ch)) bs = 1;
                    else
                        if (isdigit(ch)) dd = 1;
                        else os++;
            }
            else
                printf("Введен некорректный символ %c", ch);
        } 
        if (bs + ss + dd + os >=3)
            printf("YES");
        else
            printf("Использованы не все классы символов");
    }
    else
        printf("Длина пароля должна быть от 8 до 14 символов"); 
}