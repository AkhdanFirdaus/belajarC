#include <iostream>

using namespace std;

int maks(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;

    cout << "Input nilai a = ";
    cin >> a;

    cout << "Input nilai b = ";
    cin >> b;

    cout << "Terbesar = " << maks(a, b) << endl;
}