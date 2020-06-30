#include <stdio.h>

int main()
{
    char ulang;
    int total = 0, input;

    do
    {
        printf("Masukkan bilangan =  ");
        scanf("%d", &input);
        total = total + input;

        printf("Ulang lagi (y/n)? ");
        scanf("%s", &ulang);
    } while (ulang == 'y' || ulang == 'Y');

    printf("Total = %d\n\n", total);
}