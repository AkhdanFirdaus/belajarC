#include <stdio.h>

int minimal[100];
// minimal[0] = 4;
// minimal[1] = 3;
// minimal[2] = 2;
// minimal[3] = 1;

void inputNilai(int jumlahN)
{
    int input;

    for (int i = 0; i < jumlahN; i++)
    {
        printf("Masukkan nilai ke-%d = ", i + 1);
        minimal[i] = scanf("%d", &input);
    }
}

int nTerkecil(int jumlahN)
{
    int min;

    min = minimal[0];

    for (int i = 0; i < jumlahN; i++)
    {
        if (min > minimal[i])
        {
            min = minimal[i];
        }
    }

    return min;
}
int main()
{
    int n, hasil;

    printf("Nilai terkecil n\n");

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    inputNilai(n);
    hasil = nTerkecil(n);

    printf("Nilai terkecil = %d\n", hasil);
}