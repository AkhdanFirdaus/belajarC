#include <iostream>

using namespace std;

int main()
{
    void *p_void;

    float var_f = 3.9;
    p_void = &var_f;

    cout << "Nilai variabel = " << var_f << endl;

    *(float *)p_void = 7.8;

    cout << "Nilai ubah variabel = " << var_f << endl;
    return 0;
}
