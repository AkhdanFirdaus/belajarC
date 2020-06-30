#include <stdio.h>
#include <string.h>

int poskar(char st[], char m)
{
    int i, posisi, panjang;

    i = 0;
    posisi = -1;
    panjang = strlen(st);

    while ((i < panjang - 1) && posisi == -1)
    {
        if (st[i] == m)
        {
            posisi = i;
        }
        i++;
    }

    return posisi;
}

int main()
{
    printf("Metode Binary Search\n\n");

    char kalimat[] = "Teknik Informatika";

    char dicari = 'm';
    printf("Posisi %c dalam string %s berada pada index ke-[%d]", dicari, kalimat, poskar(kalimat, dicari));

    dicari = 'n';
    printf("\nPosisi %c dalam string %s berada pada index ke-[%d]", dicari, kalimat, poskar(kalimat, dicari));
}