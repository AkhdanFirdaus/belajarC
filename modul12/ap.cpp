#include <iostream>

using namespace std;

int main()
{
	int angka[20], a, b, c;
	char huruf[20], kedua[20][20], pilihan;

	cout << "\nMasukan Jumlah Maksimal : ";
	cin >> a;
	cout << "___________ \n";

	for (b = 0; b < a; b++)
	{
		cout << "Masukan Huruf ke " << b + 1 << ": ";
		cin >> huruf[b];
		cout << "Masukan Angka ke " << b + 1 << ": ";
		cin >> angka[b];
		cout << endl;
	}
	system("cls");
	cout << "\nData Sebelum Diurutkan : \n";

	for (b = 0; b < a; b++)
	{
		cout << huruf[b] << " ";
	}
	cout << endl;

	for (b = 0; b < a; b++)
	{
		cout << angka[b] << " ";
	}

	for (b = 0; b < a - 1; b++)
	{
		for (c = 0; c < a - 1 - b; c++)
		{
			if (huruf[c] > huruf[c + 1])
			{
				int tmp, tmp1;
				tmp = huruf[c];
				tmp1 = angka[c];
				huruf[c] = huruf[c + 1];
				huruf[c + 1] = tmp;
				angka[c] = angka[c + 1];
				angka[c + 1] = tmp1;
			}
		}
	}

	cout << endl;
	cout << "\n\nUrutan Berdasarkan Huruf :\n";
	cout << endl;

	for (b = 0; b < a; b++)
	{
		cout << huruf[b] << " ";
	}

	cout << endl;

	for (b = 0; b < a; b++)
	{
		cout << angka[b] << " ";
	}
}