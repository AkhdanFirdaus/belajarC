#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[20], jurusan[32], kelas[1], alamat[32];
    int nim, ttl, angkatan;

    printf("Input nama: ");
    scanf("%s", nama);
    printf("Input NIM: ");
    scanf("%d", &nim);
    printf("Input jurusan: ");
    scanf("%s", jurusan);
    printf("Input Tanggal Lahir(DD-MM-YYYY): ");
    scanf("%d", &ttl);
    printf("Input kelas(A/B): ");
    scanf("%s", kelas);
    printf("Input Angkatan: ");
    scanf("%d", &angkatan);
    printf("Input Alamat: ");
    scanf("%s", alamat);

    printf("\nNIM\t\t: %d", nim);
    printf("\nNama\t\t: %s \n", nama);
    printf("\nJurusan\t\t: %s \n", jurusan);
    printf("\nTanggal Lahir\t: %d", ttl);
    printf("\nKelas\t\t: %s \n", kelas);
    printf("\nAngkatan\t: %d", angkatan);
    printf("\nAlamat\t\t: %s \n", alamat);
    return 0;
}