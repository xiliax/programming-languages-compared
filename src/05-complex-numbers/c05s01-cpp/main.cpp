#include <iostream>
#include <complex>

using namespace std;

int main(void)
{

    cout << "Complex Numbers" << endl;
    complex<double> a = 5 + 3i;

    cout << "a = "
         << a << endl;
    complex<double> b = a * a;

    cout << "b = "
         << b << endl;

    auto c = complex<double>(3.6, 2.5);
    c += complex<double>(0, 2.5);

    cout << "c = " << c << endl;

    complex<double> z4 = 1. + 2i, z5 = 1. - 6i;
    cout << z4 << " * " << z5 << " = " << z4 * z5 << '\n';
    return 0;
}