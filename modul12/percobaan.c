#include <stdio.h>

int data[10], data2[10];
int n;

void tukar(int a, int b)
{
    int temp;
    temp = data[b];
    data[b] = data[a];
    data[a] = temp;
}

void bubble_sort()
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            if (data[j] < data[j - 1])
            {
                tukar(j, j - 1);
            }
        }
    }
}

void selection_sort()
{
    int i, j, pos;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j] < data[pos])
            {
                pos = j;
            }
            if (pos != j)
            {
                tukar(pos, i);
            }
        }
    }
}

void input()
{
    printf("Masukkan Jumlah Data = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan data ke-%d = ", (i + 1));
        scanf("%d", &data[i]);
        data2[i] = data[i];
    }
}

void acakLagi()
{
    for (int i = 0; i < n; i++)
    {
        data[i] = data2[i];
    }
    printf("Data Sudah teracak\n");
}

void tampil()
{
    printf("Data : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main()
{
    int pil;
    do
    {
        printf("1. Input data\n");
        printf("2. Bubble Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Tampil\n");
        printf("5. Acak\n");
        printf("6. Exit\n");
        printf("Pilihan = ");
        scanf("%d", &pil);
        switch (pil)
        {
        case 1:
            input();
            break;
        case 2:
            bubble_sort();
            break;
        case 3:
            selection_sort();
            break;
        case 4:
            tampil();
            break;
        case 5:
            acakLagi();
            break;
        default:
            break;
        }
    } while (pil != 6);
}