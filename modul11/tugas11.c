#include <stdio.h>

int main()
{
    int i, j, baris, kolom;

    printf("Matriks berordo m x n\n\n");
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &kolom);

    int matriksA[baris][kolom], matriksB[baris][kolom], hasil[baris][kolom];

    printf("\nMasukkan elemen matrix A: \n");
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            printf("Elemen Matriks A[%d,%d] = ", i + 1, j + 1);
            scanf("%d", &matriksA[i][j]);
        }
    }

    printf("\nMasukkan elemen matrix B: \n");
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            printf("Elemen Matriks B[%d,%d] = ", i + 1, j + 1);
            scanf("%d", &matriksB[i][j]);
        }
    }

    printf("\nHasil penjumlahan matrix A+B = \n");
    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
            printf("%d\t", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}