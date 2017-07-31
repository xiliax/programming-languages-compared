#include <stdio.h>
#include <limits.h>

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
    printf("variable initialization\n");
    char c = 35;
    int i = 23432343;
    long l = 892320938920;
    float f = 90892232e23;
    double d = 90929324909023.290932342;
    long double ld = 90992343e208;
    unsigned short us = 65000;
    unsigned char uc = 128;
    printf("1.\tc - %c\n", c);
    printf("2.\tc - %i\n", c);
    printf("3.\ti - %d\n", i);
    printf("4.\tl- 0x%lX\n", l);
    printf("5.\tf - %F\n", f);
    printf("6.\td - %E\n", d);
    printf("7.\tld - %LG\n", ld);
}

void varDeclar()
{
    printf("variable declaration\n");
    char c;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    unsigned short us;
    unsigned char uc;
    printf("1.\tc - %c\n", c);
    printf("2.\tc - %i\n", c);
    printf("3.\ti - %d\n", i);
    printf("4.\tl- 0x%lX\n", l);
    printf("5.\tf - %F\n", f);
    printf("6.\td - %E\n", d);
    printf("7.\tld - %LG\n", ld);
}