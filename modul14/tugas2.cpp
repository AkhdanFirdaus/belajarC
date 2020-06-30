#include <iostream>

using namespace std;

int main()
{
    int aziz = 70, *defa, *dewi;

    cout << "aziz = 70" << endl;
    cout << "defa = aziz" << endl;
    cout << "dewi = aziz + 3" << endl
         << endl;

    defa = &aziz;
    cout << "a. Berapakah nilai Defa ?? " << endl;
    cout << "   Nilai Defa = " << *defa << endl;

    dewi = &aziz;
    cout << "b. Berapakah nilai Dewi ?? " << endl;
    cout << "   Nilai Dewi = " << *dewi << endl;

    cout << "\n\n aziz = 70\n";
    cout << " defa = &aziz\n";
    cout << " dewi = *aziz + 3\n\n";

    defa = &aziz;
    cout << "a. Berapakah nilai Defa ?? " << endl;
    cout << "   Nilai defa = " << *defa << endl;

    dewi = &aziz;
    cout << "b. Berapakah nilai Dewi ?? " << endl;
    cout << "   Nilai dewi = " << *dewi + 3 << endl;

    return 0;
}
