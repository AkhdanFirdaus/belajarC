#include <stdio.h>

int main()
{

    int i = 0, total;

    do
    {
        total = total + i;
        printf("%d", i);
        if (i < 50)
        {
            printf(" + ");
        }
        i++;
    } while (i <= 50);

    printf(" = %d\n\n", total);
}