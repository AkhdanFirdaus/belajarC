#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hasil;

    FILE *fptr;

    if ((fptr = fopen("covid19.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    hasil = fgetc(fptr);
    while (hasil != EOF)
    {
        printf("%c", hasil);
        hasil = fgetc(fptr);
    }
    printf("\n\n");

    fclose(fptr);

    return 0;
}