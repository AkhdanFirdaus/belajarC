#include <iostream>

using namespace std;

void rataRata(int n)
{
    int k = 1, x, jumlah = 0;

    while (k <= n)
    {
        cout << "Masukkan bilangan ke-" << k << "= ";
        cin >> x;
        if (x > 0)
        {
            jumlah += x;
            k++;
        }
        else
        {
            cout << x << " bukan bilangan bulat" << endl;
        }
    }

    cout << "Rata-rata = " << jumlah / n << endl;
}

int main()
{
    int n;
    cout << "Masukkan jumlah bilangan = ";
    cin >> n;
    rataRata(n);
}