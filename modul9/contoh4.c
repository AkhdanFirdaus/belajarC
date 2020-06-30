/* Program menginput data dengan array */
#include <stdio.h>

int main()
{
    char nama[10][25];
    char nim[10][25];
    int nilai[10];
    int i, n;
    /* 	 menentukan banyaknya data yg akan diinputkan ---- */
    printf("Banyak data :");
    scanf("%i", &n);
    printf("\n");
    /* --- input data sesuai dengan banyaknya data yg ditentukan --- */
    for (i = 1; i <= n; i++)
    {
        printf("Data ke-%i \n", i);
        printf("Nama : ");
        scanf("%s", nama[i]);
        printf("Nim : ");
        scanf("%s", nim[i]);
        printf("Nilai : ");
        scanf("%i", &nilai[i]);
        printf("\n");
    }
    /* --- menampilkan data sesuai dengan yg diinputkan --- */
    printf(" ----------------------------------------------------	\n");
    for (i = 1; i <= n; i++)
    {
        printf("Data ke-%i \n", i);
        printf("Nim : %s\n", nim[i]);
        printf("Nama : %s\n", nama[i]);
        printf("Nilai : %i\n", nilai[i]);
        printf("\n");
    }
}
