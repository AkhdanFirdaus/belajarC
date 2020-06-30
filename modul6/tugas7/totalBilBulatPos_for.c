#include <stdio.h>

int main()
{

    int i, total;
    for (i = 0; i <= 50; i++)
    {
        total = total + i;
        printf("%d", i);
        if (i < 50)
        {
            printf(" + ");
        }
    }

    printf(" = %d\n\n", total);
}