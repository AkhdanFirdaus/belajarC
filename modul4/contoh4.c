#include <stdio.h>
#include <string.h>

int main()
{
    char nama[15], ket[30], kode;
    printf("Masukkan nama mahasiswa:");
    fgets(nama, sizeof(nama), stdin);
    printf("Pilih kode jurusan [A/B/C/D] : ");
    scanf("%c", &kode);

    switch (kode)
    {
    case 'A':
        strcpy(ket, "Jurusan Teknik Informatika");
        break;
    case 'B':
        strcpy(ket, "Jurusan Manajemen Informatika");
        break;
    case 'C':
        strcpy(ket, "Jurusan Sistem Informasi");
        break;
    case 'D':
        strcpy(ket, "Jurusan Teknik Komputer");
        break;
    }

    printf("\n \n");
    printf("Nama mahasiswa : %s \n", nama);
    printf("Kode jurusan : %c \n", kode);
    printf("Nama jurusan : %s\n", ket);

    return 0;
}