#include <iostream>

using namespace std;

void hitungLuasSegitiga(int a, int b)
{
    float hasil;
    hasil = a * b / 2;
    cout << "Luas = " << hasil << endl;
}

int main()
{
    int n;

    cout << "Input banyak segitiga = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int alas, tinggi;
        cout << "Input alas: ";
        cin >> alas;
        cout << "Input tinggi: ";
        cin >> tinggi;
        hitungLuasSegitiga(alas, tinggi);
    }
}
