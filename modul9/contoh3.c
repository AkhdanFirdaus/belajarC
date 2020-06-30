#include <stdio.h>
#include <math.h>

int main()
{
    int data, a, z, b;
    printf("Masukan jumlah data = ");
    scanf("%d", &data);
    int nilai[data];
    for (a = 0; a < data; a++)
    {
        printf("data ke %d = ", a + 1);
        scanf("%d", &nilai[a]);
    }
    for (a = 0; a < data; a++)
    {
        for (b = a + 1; b < data; b++)
        {
            if (nilai[a] < nilai[b])
            {
                z = nilai[b];
                nilai[b] = nilai[a];
                nilai[a] = z;
            }
        }
    }
    printf("Data urutannya dari terbesar adalah ");

    for (a = 0; a < data; a++)
    {
        printf("%d", nilai[a]);
        if (a < data - 1)
        {
            printf(",");
        }
    }

    return 0;
}
