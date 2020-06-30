#include <stdio.h>

int luasLingkaran(int r)
{
    return 3.14 * (r * r);
}

int main()
{
    int r;
    float luas;
    printf("Menghitung luas lingkaran\n");
    printf("=========================\n");
    printf("Masukkan jari-jari: ");
    scanf("%d", &r);
    luas = luasLingkaran(r);
    printf("Luas Lingkaran\t: %f\n", luas);
}