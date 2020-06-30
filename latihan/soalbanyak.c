#include <stdio.h>
#include <stdbool.h>

int array[100];
int n = 0, i;

int jumlah()
{
    int total = 0;

    for (i = 0; i < n; i++)
    {
        total += array[i];
    }

    return total;
}

int avg(int total)
{
    return total / n;
}

int min()
{
    int min = array[0];
    for (i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int maks()
{
    int maks = array[0];
    for (i = 0; i < n; i++)
    {
        if (maks < array[i])
        {
            maks = array[i];
        }
    }
    return maks;
}

void tambah()
{
    printf("Masukkan jumlah array = ");
    scanf("%d", &n);

    printf("Tambah\n");
    for (i = 0; i < n; i++)
    {
        printf("Indeks array ke-%d = ", i);
        scanf("%d", &array[i]);
    }
}

void lihat()
{
    printf("Lihat\n");
    for (i = 0; i < n; i++)
    {
        printf("Index array ke-%d = %d\n", i, array[i]);
    }
}

void hapus()
{
    printf("Hapus\n");
    lihat();
    int index;
    printf("Indeks yang ingin dihapus : ");
    scanf("%d", &index);
    if (index < 0 || index > n)
    {
        printf("Array tidak ada\n");
    }
    else
    {
        for (i = index - 1; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }
        n--;
    }
    printf("Setelah dihapus\n");
    lihat();
}

void operasi()
{
    int total = jumlah();
    printf("Operasi Array\n");
    printf("Total     = %d\n", total);
    printf("Rata-rata = %d\n", avg(total));
    printf("Nilai Min = %d\n", min());
    printf("Nilai Maks= %d\n", maks());
}

void pencarian()
{
    int bilangan;
    bool hasil = false;

    printf("Cari\n");
    printf("Cari bilangan = ");
    scanf("%d", &bilangan);

    for (i = 0; i < n; i++)
    {
        if (bilangan == array[i])
        {
            hasil = true;
            break;
        }
    }
    if (hasil)
    {
        printf("%d ada pada indeks ke-%d", bilangan, i);
    }
    else
    {
        printf("Bilangan %d tidak ditemukan", bilangan);
    }
}

void frekuensi()
{
    int dicari, jumlah = 0;
    printf("Masukkan nilai yang ingin dicari = ");
    scanf("%d", &dicari);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == dicari)
        {
            jumlah++;
        }
        printf("%d, ", array[i]);
    }
    printf("\nFrekuensi kemunculan nilai %d = %d", dicari, jumlah);
}

int main()
{
    char ulang = 'y';
    int pilihan;

    do
    {
        printf("\n\nMENU\n");
        printf("Asumsi: Data Harus lebih dari 0\n");
        printf("1. Tambah\n");
        printf("2. Lihat\n");
        printf("3. Hapus\n");
        printf("4. Jml-Avg-Min-Maks\n");
        printf("5. Pencarian\n");
        printf("6. Frekuensi\n");
        printf("7. Exit\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            tambah();
            break;
        case 2:
            if (n != 0)
            {
                lihat();
            }
            else
            {
                printf("Tambahkan array terlebih dahulu\n");
            }
            break;
        case 3:
            if (n != 0)
            {
                hapus();
            }
            else
            {
                printf("Tambahkan array terlebih dahulu\n");
            }
            break;
        case 4:
            if (n != 0)
            {
                operasi();
            }
            else
            {
                printf("Tambahkan array terlebih dahulu\n");
            }
            break;
        case 5:
            if (n != 0)
            {
                pencarian();
            }
            else
            {
                printf("Tambahkan array terlebih dahulu\n");
            }
            break;
        case 6:
            frekuensi();
            break;
        case 7:
            ulang = 't';
            break;
        default:
            printf("Menu tidak ada\n");
            break;
        }
    } while (ulang == 'y');
}