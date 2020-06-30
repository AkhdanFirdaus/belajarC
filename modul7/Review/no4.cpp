#include <iostream>

using namespace std;

bool kabisat(int tahun)
{
    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int tahun;
    cout << "Masukkan tahun = ";
    cin >> tahun;

    if (kabisat(tahun))
    {
        cout << tahun << " adalah tahun kabisat " << endl;
    }
    else
    {
        cout << tahun << " bukan tahun kabisat " << endl;
    }
}