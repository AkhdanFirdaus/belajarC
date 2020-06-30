#include <iostream>

using namespace std;

int main()
{
    long *p, x;

    p = &x;
    x = 40;

    cout << "Nilai X  = " << x << endl;
    cout << "Nilai *p = " << *p << endl;
    cout << "Nilai P  = " << p << endl;
    cout << "Nilai &x = " << &x << endl
         << endl;

    *p = 25;

    cout << "Nilai X  = " << x << endl;
    cout << "Nilai *p = " << *p << endl;
    cout << "Nilai P  = " << p << endl;
    cout << "Nilai &x = " << &x << endl
         << endl;
}