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
    unsigned char uc = 330;
    printf("1.\t%c - %i\n", c, c);
    printf("2.\t%c - %i\n", uc, uc);
    printf("3.\t%i - %d\n", i, l);
    printf("4.\t0x%x - ox%X\n", c, c);
    printf("5.\t0x%x - 0x%X\n", uc, uc);
    printf("6.\t0x%x - 0x%X\n", i, l);
    printf("7.\t%f - %F\n", f, f);
    printf("8.\t%f - %F\n", d, d);
    printf("9.\t%e - %E\n", f, f);
    printf("10.\t%e - %E\n", d, d);
    printf("11.\t%g - %G\n", f, f);
    printf("12.\t%g - %G\n", d, d);
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
    printf("1.\t%c - %i\n", c, c);
    printf("2.\t%c - %i\n", uc, uc);
    printf("3.\t%i - %d\n", i, l);
    printf("4.\t0x%x - ox%X\n", c, c);
    printf("5.\t0x%x - 0x%X\n", uc, uc);
    printf("6.\t0x%x - 0x%X\n", i, l);
    printf("7.\t%f - %F\n", f, f);
    printf("8.\t%f - %F\n", d, d);
    printf("9.\t%e - %E\n", f, f);
    printf("10.\t%e - %E\n", d, d);
    printf("11.\t%g - %G\n", f, f);
    printf("12.\t%g - %G\n", d, d);
}