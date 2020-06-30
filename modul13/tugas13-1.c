#include <stdio.h>

int hitungJumlah(int data[], int dataLength, int dicari)
{
    int jumlah = 0;
    int i = 0;
    while (i < dataLength)
    {
        if (data[i] == dicari)
        {
            jumlah++;
        }
        i++;
    }
    return jumlah;
}

int main()
{
    int jumlahData = 10;
    int data[] = {4, 5, 3, 5, 1, 7, 9, 6, 5, 8};
    int dicari;

    printf("Data : ");
    for (int i = 0; i < jumlahData; i++)
    {
        printf(" %d ", data[i]);
    }

    printf("\n\nMasukan data yang dicari : ");
    scanf("%d", &dicari);

    printf("\nJumlah bilangan %d dalam array adalah : %d\n", dicari, hitungJumlah(data, jumlahData, dicari));

    return 0;
}