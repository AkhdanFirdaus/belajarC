#include <stdio.h>
int main()
{
    int P1, P2, P1pb, P1py, P2pb, P2py, P3, P3pb, P3py;
    int t, l;

    printf("PROGRAM PERKALIAN 2 PECAHAN\n");
    printf("===========================\n");
    printf("Masukkan P1 Pembilang = ");
    scanf("%d", &P1pb);
    printf("Masukkan P1 Penyebut = ");
    scanf("%d", &P1py);
    printf("\n");
    printf("Masukkan P2 Pembilang = ");
    scanf("%d", &P2pb);
    printf("Masukkan P2 Penyebut = ");
    scanf("%d", &P2py);

    P3pb = (P1pb * P2py) + (P2pb * P1py);
    P3py = P1py * P2py;

    printf("\nHasil Penjumlahan P1+P2\n");
    printf("\n %d/%d\n", P3pb, P3py);

    t = P3pb / P3py;
    l = P3pb % P3py;
    if (P3pb % P3py == 0)
    {
        printf("\nBilangan (%d/%d) di sederhanakan menjadi %d\n", P3pb, P3py, t);
    }
    else if (P3pb % P3py != 0)
    {
        printf("\nBilangan (%d/%d) di sederhankan menjadi (%d %d/%d)\n", P3pb, P3py, t, l, P3py);
    }
}