#include <stdio.h>
int main()
{
    int t;
    char ulang;

    do
    {
        printf("Masukan suhu air : ");
        scanf("%d", &t);
        if (t <= 0)
        {
            printf("wujud air tersebut dalam kedaan padat\n");
        }
        else if (t > 0 && t < 100)
        {
            printf("wujud air tersebut dalam kedaan cair\n");
        }
        else
        {
            printf("wujud air tersebut dalam kedaan gas\n");
        }
        printf("\nUlang lagi (y/t) : ");
        scanf("%s", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
}
