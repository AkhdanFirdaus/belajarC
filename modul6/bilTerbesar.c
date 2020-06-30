#include <stdio.h>

int main()
{
    int x, y;
    char ulang;

    do
    {
        printf("Maasukan bilangan ke-1 = ");
        scanf("%d", &x);
        printf("Masukan bilangan ke-2 = ");
        scanf("%d", &y);
        if (x > y)
        {
            printf("%i lebih besar dari %i\n", x, y);
        }
        else if (x < y)
        {
            printf("%i lebih besar dari %i\n", y, x);
        }
        else
        {
            printf("kedua bilangan sama besar\n");
        }
        printf("\nUlang lagi (y/t) : ");
        scanf("%s", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
}
