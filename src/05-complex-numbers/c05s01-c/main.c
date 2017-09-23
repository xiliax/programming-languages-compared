#include <stdio.h>
#include <complex.h>

int main(void)
{

    printf("Complex Numbers\n");
    complex double a = 5 + 3i;

    printf("a = %f + %fj\n", creal(a), cimag(a));
    complex double b = a * a;

    printf("b = %fi,  %f\n", cimag(b), creal(b));
    return 0;
}