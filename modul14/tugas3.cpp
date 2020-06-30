#include <iostream>

using namespace std;

char *nama_bulan(int n)
{
    char *bulan[] = {"Kode bulan Salah!", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "juli", "Agustus", "September", "Oktober", "November", "Desember"};

    return n < 1 || n > 12 ? bulan[0] : bulan[n];
}

int main()
{
    int bln;

    cout << "Bulan (1-12) : ";
    cin >> bln;

    cout << "Bulan ke- " << bln << " adalah bulan " << nama_bulan(bln) << endl;
}
