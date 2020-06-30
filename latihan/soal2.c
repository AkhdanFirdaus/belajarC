/* UTS No. 2 */
#include <stdio.h>
int main()
{
    int upah, jamkerja, upahlembur, jamlebur, lembur, golongan, gaji;

    printf("========================================\n");
    printf("PROGRAM MENGHTUNG GAJI KARYAWAN MINGGUAN\n");
    printf("========================================\n");
    printf("Golongan [1/2/3/4]	: ");
    scanf("%d", &golongan);
    printf("Jumlah Jam Kerja	: ");
    scanf("%d", &jamkerja);

    switch (golongan)
    {
    case 1:
        upah = 3000;
        break;

    case 2:
        upah = 3500;
        break;

    case 3:
        upah = 4000;
        break;

    case 4:
        upah = 5000;
        break;
    }

    if (jamkerja <= 40)
    {
        lembur = 0;
        gaji = jamkerja * upah;
    }
    else
    {
        lembur = (jamkerja - 40) * (upah * 1.5);
        gaji = (jamkerja * upah) + lembur;
    }

    printf("-------------------------------\n");
    printf("Hasil Perhitungan Gaji Karyawan\n");
    printf("-------------------------------\n");
    printf("Upah Kerja		: Rp. %d \n", gaji);
    printf("Lembur			: Rp. %d \n", lembur);
}