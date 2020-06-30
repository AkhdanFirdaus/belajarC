#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *judul;
    char *tanggal;
    char *jumlahSembuh;
    char *jumlahMeninggal;

    char inputTanggal[30];
    int inputJumlahSembuh, inputJumlahMeninggal;

    judul = "Data Perkembangan COVID-19 di Kota Bandung\n";
    tanggal = "Tanggal\t\t: ";
    jumlahSembuh = "Jumlah Sembuh\t: ";
    jumlahMeninggal = "Jumlah Meninggal: ";

    FILE *ftpr;

    ftpr = fopen("covid19.txt", "w");

    if (ftpr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("%s", judul);
    printf("%s", tanggal);
    fgets(inputTanggal, sizeof(inputTanggal), stdin);
    printf("%s", jumlahSembuh);
    scanf("%d", &inputJumlahSembuh);
    printf("%s", jumlahMeninggal);
    scanf("%d", &inputJumlahMeninggal);

    fprintf(ftpr, "%s%s%s%s%d\n%s%d\n", judul, tanggal, inputTanggal, jumlahSembuh, inputJumlahSembuh, jumlahMeninggal, inputJumlahMeninggal);
    fclose(ftpr);

    return 0;
}