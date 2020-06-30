#include <stdio.h>
#include <string.h>

#define NUM 5
#define MAX_STRING_SIZE 40

void pencarian(char data[NUM][MAX_STRING_SIZE], char dicari[])
{
    for (int i = 0; i < NUM; i++)
    {
        char *hasil = strstr(data[i], dicari);
        if (hasil != NULL)
        {
            printf("%s\n", data[i]);
        }
    }
    printf("\n");
}

void tampilNama(char data[NUM][MAX_STRING_SIZE])
{
    printf("Daftar Nama: ");
    for (int i = 0; i < NUM; i++)
    {
        printf("%s", data[i]);
        printf(", ");
    }
}

int main()
{
    char data[NUM][MAX_STRING_SIZE] = {
        "ayuningtyas",
        "ayung",
        "rahayu",
        "bayu",
        "diah"};
    tampilNama(data);

    char dicari[] = "ayu";
    printf("\n\nNama yang mengandung nama '%s' adalah\n", dicari);
    pencarian(data, dicari);

    return 0;
}