#include <stdio.h>

int main()
{
    int kode;
    char ulang;

    do
    {
        printf("Menu makanan Warung Nasi :\n");
        printf("1. Nasi goreng\t\tHarga = Rp.11000\n");
        printf("2. Nasi Kuning\t\tHarga = Rp.8000\n");
        printf("3. Nasi uduk\t\tHarga = Rp.7500\n");
        printf("4. Nasi padang\t\tHarga = Rp.15000\n");
        printf("input pilihan anda : ");
        scanf("%d", &kode);

        switch (kode)
        {
        case 1:
        {
            printf("\nanda memilih Nasi goreng\n");
            printf("Harga = Rp.11000\n");
            break;
        }
        case 2:
        {
            printf("\nanda memilih Nasi kuning\n");
            printf("Harga = Rp.8000\n");
            break;
        }
        case 3:
        {
            printf("\nanda memilih Nasi uduk\n");
            printf("Harga = Rp.7500\n");
            break;
        }
        case 4:
        {
            printf("\nanda memilih Nasi padang\n");
            printf("Harga = Rp.15000\n");
            break;
        }
        default:
        {
            printf("\npilihan tidak ada\n");
        }
        }
        printf("\nPesan lagi (y/t) : ");
        scanf("%s", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
}