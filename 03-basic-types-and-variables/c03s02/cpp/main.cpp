#include <iostream>

using namespace std;

void varDeclar();
void varInit();

int main()
{
    varDeclar();
    varInit();
    return 0;
}
void varInit()
{
    cout << "variable initialization\n"
         << endl;

    auto b(true);
    auto c(35);
    auto i(23432343);
    auto l(892320938920);
    auto f(90892232e23);
    auto d(90929324909023.290932342);
    auto ld(90992343e208);
    unsigned short us(65000);
    unsigned char uc(128);

    cout << "0.\b - " << b << endl;
    cout << "1.\tc - "
         << c << endl;
    cout << "2.\tc - "
         << c << endl;
    cout << "3.\ti - "
         << i << endl;
    cout << "4.\tl- 0x" << hex
         << l << endl;
    cout << "5.\tf - " << fixed
         << f << endl;
    cout << "6.\td - " << scientific
         << d << endl;
    cout << "7.\tld - "
         << ld << endl;
}

void varDeclar()
{
    printf("variable declaration\n");
    bool b;
    char c;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    unsigned short us;
    unsigned char uc;
    cout << "0.\b - " << b << endl;
    cout << "1.\tc - "
         << c << endl;
    cout << "2.\tc - "
         << c << endl;
    cout << "3.\ti - "
         << i << endl;
    cout << "4.\tl- 0x" << hex
         << l << endl;
    cout << "5.\tf - " << fixed
         << f << endl;
    cout << "6.\td - " << scientific
         << d << endl;
    cout << "7.\tld - "
         << ld << endl;
}