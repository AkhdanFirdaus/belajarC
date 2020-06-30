#include <stdio.h>

int main()
{

    int i = 0, total;

    while (i <= 50)
    {
        total = total + i;
        printf("%d", i);
        if (i < 50)
        {
            printf(" + ");
        }
        i++;
    }

    printf(" = %d\n\n", total);
}