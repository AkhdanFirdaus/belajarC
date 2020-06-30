#include <stdio.h>

int main()
{
    int i, n, total = 0;
    printf("Masukkan nilai N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1 && i > 0)
        {
            total = total + i;
            printf("%d ", i);
        }
    }
    printf("\nTotal : %d \n", total);
}