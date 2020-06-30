#include <stdio.h>

char nim[30], nama[30], jurusan[30], alamat[30], jenKel;

void output()
{
    printf("NIM\t: %s\n", nim);
    printf("Nama\t: %s\n", nama);
    printf("Jurusan : %s\n", jurusan);
    printf("Alamat\t: %s\n", alamat);
    printf("JenKel\t: %c\n", jenKel);
}

void biodata()
{
    printf("Input NIM Anda\t\t: ");
    gets(nim);
    printf("Input NAMA Anda\t\t: ");
    gets(nama);
    printf("Input Jurusan Anda\t: ");
    gets(jurusan);
    printf("Input Alamat Anda\t: ");
    gets(alamat);
    printf("Input Jenis Kelamin[L/P]: ");
    scanf("%c", &jenKel);
}

int main()
{
    printf("===========================\n");
    printf("\tBiodata\n");
    biodata();
    printf("===========================\n");
    printf("\tBiodata\n");
    printf("===========================\n");
    output();
}