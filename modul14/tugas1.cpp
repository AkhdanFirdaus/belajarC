#include <iostream>

using namespace std;

char *nama_hari(int n)
{
    char *hari[] = {"Kode hari Salah!", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

    return n < 1 || n > 7 ? hari[0] : hari[n];
}

int main()
{
    int hari;

    cout << "Hari (1-7) : ";
    cin >> hari;

    cout << "Hari ke- " << hari << " adalah hari " << nama_hari(hari) << endl;

    return 0;
}
