#include <stdio.h>

int main()
{
    int n, i, total;
    printf("Jumlah data yang dimasukkan: ");
    scanf("%d", &n);

    int bilangan[n];

    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &bilangan[i]);
        total += bilangan[i];
    }

    printf("====================\n");
    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d: %d\n", i + 1, bilangan[i]);
    }
    printf("Total Jumlah Data: %d\n", total);
    printf("Rata-rata Data   : %d\n", total / n);

    return 0;
}