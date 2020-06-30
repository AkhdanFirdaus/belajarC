#include <stdio.h>
int main()
{
    int x;
    char ulang;

    do
    {
        printf("Masukan bilangan : ");
        scanf("%d", &x);

        if (x > 0)
        {
            printf("%i adalah bilangan positif \n", x);
        }
        else if (x < 0)
        {
            printf("%i adalah bilangan negatif \n", x);
        }
        else
        {
            printf("ini adalah bilangan nol\n");
        }
        printf("\nUlang lagi (y/t) : ");
        scanf("%s", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
}
