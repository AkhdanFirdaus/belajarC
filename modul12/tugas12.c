#include <stdio.h>

int angka[20], n, i, j;
char huruf[20];

void sort()
{
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (huruf[j] > huruf[j + 1])
			{
				int tmp, tmp1;
				tmp = huruf[j];
				tmp1 = angka[j];
				huruf[j] = huruf[j + 1];
				huruf[j + 1] = tmp;
				angka[j] = angka[j + 1];
				angka[j + 1] = tmp1;
			}
		}
	}
}

void display()
{
	for (i = 0; i < n; i++)
	{
		printf("%c  ", huruf[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d  ", angka[i]);
	}
}

void input()
{
	printf("Masukkan jumlah data = ");
	scanf("%d", &n);
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("Masukan huruf ke-%d : ", (i + 1));
		scanf("%s", &huruf[i]);
		printf("Masukan angka ke-%d : ", (i + 1));
		scanf("%d", &angka[i]);
		printf("\n");
	}
}

int main()
{
	input();
	printf("\nTampilkan sebelum sorting : \n");
	display();
	sort();
	printf("\n");
	printf("\nSetelah di sorting berdasarkan huruf\n");
	display();
	printf("\n");
}
