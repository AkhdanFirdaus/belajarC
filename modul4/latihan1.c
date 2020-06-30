#include <stdio.h>

int main()
{
    char golongan;
    char namaKaryawan[30];
    int gaji, jamKerja, upah, lembur = 4000;

    printf("Menghitung Upah Karyawan\n");
    printf("Nama Karyawan\t: ");
    fgets(namaKaryawan, sizeof(namaKaryawan), stdin);
    printf("Golongan\t: ");
    scanf("%c", &golongan);
    printf("Jam Kerja\t: ");
    scanf("%d", &jamKerja);

    switch (golongan)
    {
    case 'a':
        upah = 5000;
        break;
    case 'b':
        upah = 7000;
        break;
    case 'c':
        upah = 8000;
        break;
    case 'd':
        upah = 10000;
        break;

    default:
        upah = 5000;
        break;
    }

    if (jamKerja % 48 == 0)
    {
        gaji = 48 * upah;
    }
    else
    {
        lembur = jamKerja % 48;
        gaji = (48 + lembur) * upah;
    }

    printf("\nNama Karyawan\t: %s", namaKaryawan);
    printf("Jam Lembur\t: %d jam\n", lembur);
    printf("Gaji\t\t: %d\n", gaji);
    return 0;
}