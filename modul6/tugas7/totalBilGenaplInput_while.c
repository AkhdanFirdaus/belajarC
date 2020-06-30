#include <stdio.h>

int main()
{
    char ulang = 'y';
    int total = 0, input;

    while (ulang == 'y' || ulang == 'Y')
    {
        printf("Masukkan bilangan =  ");
        scanf("%d", &input);

        if (input % 2 == 0)
        {
            total = total + input;
        }
        else
        {
            printf("%d bukan bilangan genap\n", input);
        }

        printf("Ulang lagi (y/n)? ");
        scanf("%s", &ulang);
    };

    printf("Total = %d\n\n", total);
}