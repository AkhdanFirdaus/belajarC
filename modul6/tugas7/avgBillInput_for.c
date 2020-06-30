#include <stdio.h>

int main()
{
    int i, n, total = 0, input;
    float avg;

    printf("Masukkan jumlah bilangan n =  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Masukkan bilangan ke-%d =  ", i);
        scanf("%d", &input);

        total = total + input;
    };

    avg = total / n;

    printf("Total\t= %d\n", total);
    printf("Rata-rata= %f\n\n", avg);
}