/* Program menentukan huruf vokal */
#include <stdio.h>

int main()
{
    char huruf;
    printf("Program Menentukan Huruf Vokal \n");
    printf("\n\n");
    printf("Masukkan huruf : ");
    scanf("%c", &huruf);
    if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o')
        printf("Huruf %c adalah huruf vokal\n", huruf);
    return 0;
}
