#include <stdio.h>

int pangkat(int x, int y);

int main()
{
    int x, y, hasil;
    printf("Program pemangkatan dengan menggunakan looping\n");
    printf("==============================================\n");
    printf("Masukkan nilai x	: ");
    scanf("%d", &x);
    printf("Masukkan nilai y	: ");
    scanf("%d", &y);
    hasil = pangkat(x, y);
    printf("Hasil	= %d", hasil);
}

int pangkat(int x, int y)
{
    int hasil = 1;
    for (int i = 1; i <= y; i++)
    {
        hasil = hasil * x;
    }
    return hasil;
}