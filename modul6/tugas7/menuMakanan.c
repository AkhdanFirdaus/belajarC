#include <stdio.h>

int main()
{
    int kode;
    char ulang;

    do
    {
        printf("\nMenu makanan:\n");
        printf("1. Nasi goreng\n");
        printf("2. Nasi Uduk\n");
        printf("3. Mie Goreng\n");
        printf("4. Kwetiaw\n");
        printf("5. Keluar\n");
        printf("input pilihan anda : ");
        scanf("%d", &kode);

        switch (kode)
        {
        case 1:
        {
            printf("anda memilih Nasi goreng\n");
            break;
        }
        case 2:
        {
            printf("anda memilih Nasi Uduk\n");
            break;
        }
        case 3:
        {
            printf("anda memilih Mie Goreng\n");
            break;
        }
        case 4:
        {
            printf("anda memilih Kwetiaw\n");
            break;
        }
        case 5:
        {
            printf("\nTerimakasih telah mampir\n");
            ulang = 'n';
            return 0;
        }
        default:
        {
            printf("\npilihan tidak ada\n");
        }
        }
        ulang = 'y';
    } while (ulang == 'y');
}