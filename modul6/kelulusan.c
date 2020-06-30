#include <stdio.h>

int main()
{
    char gender;
    float tb;
    char ulang;

    do
    {
        printf("Masukkan gender (l/p) : ");
        scanf("%c", &gender);

        if (gender == 'l' || gender == 'L')
        {
            printf("Masukkan tinggi badan anda : ");
            scanf("%f", &tb);
            if (tb >= 165)
            {
                printf("lulus\n");
            }
            else
            {
                printf("tidak lulus\n");
            }
        }
        else if (gender == 'p' || gender == 'P')
        {
            printf("Masukkan tinggi badan anda : ");
            scanf("%f", &tb);
            if (tb >= 160)
            {
                printf("lulus\n");
            }
            else
            {
                printf("tidak lulus");
            }
        }
        else
        {
            printf("Masukkan gender dengan benar\n");
        }
        printf("\nUlang lagi (y/t) : ");
        scanf("%s", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
}
