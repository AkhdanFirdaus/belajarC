#include <stdio.h>

int main()
{
    int i, n;
    printf("Masukkan nilai N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            printf("%d ", i);
    }
    printf("\n");
}