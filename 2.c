#include <stdio.h>
void main()
{ 
    int n, k;
    printf("Введите номер дня недели и количество дней: \n"); 
    scanf("%d %d", &n, &k);
    for (int j=1; j<=n; j++) printf("   ");
    for (int i=1; i<=k; i++)
    {
        if (i < 10) printf(" ");
        printf(" %d", i);
        if ( (i + n) % 7 == 0) printf("\n");
    }
}