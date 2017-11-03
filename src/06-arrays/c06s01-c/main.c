#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN(a) (sizeof((a)) / sizeof((a)[0]))

#define MY_ARR_LEN 10

void print_array(int ar[], int len);

void print_array(int ar[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("ia[%d] = %d\n", i, ar[i]);
    }
}

int main(int argc, char **argv, char *env[])
{
    printf("Arrays in C\n");

    int ia[5][4][100][200];
    int ia2[3];

    ia[0][0][0][0] = 5;
    ia[3][0][0][1] = 17;

    int *da = malloc(MY_ARR_LEN * sizeof(int));
    for (int i = 0; i < MY_ARR_LEN; i++)
    {
        da[i] = i * 2;
    }

    // print_array(ia, ARR_LEN(ia));
    // print_array(ia2, ARR_LEN(ia2));
    print_array(da, MY_ARR_LEN);

    // int ia[10];

    // ia[0] = 5;
    // ia[3] = 17;

    // for (int i = 0; i < ARR_LEN(ia); i++)
    // {
    //     printf("ia[%d] = %d\n", i, ia[i]);
    // }

    // char *cp = 0;
    // short int *sip = 0;
    // int *ip = 0;
    // long *lp;

    // printf("INFO - sizeof(cp) = %lu, cp = %p\n", sizeof(cp), cp);
    // printf("INFO - sizeof(sip) = %lu, sip = %p\n", sizeof(sip), sip);
    // printf("INFO - sizeof(ip) = %lu, ip = %p\n", sizeof(ip), ip);
    // printf("INFO - sizeof(lp) = %lu, lp = %p\n", sizeof(lp), lp);

    // int *ar[2] = {};
    // int ia0[] = {1, 2, 3, 4, 5};
    // int ia1[] = {7, 6, 9};

    // ar[0] = ia0;
    // ar[1] = ia1;

    // printf("INFO - ia0(size) : %lu\n", ARR_LEN(ia0));
    // printf("INFO - ia1(size) : %lu\n", ARR_LEN(ia1));
    // printf("INFO - ar(size) : %lu\n", ARR_LEN(ar));

    // for (int i = 0; i < ARR_LEN(ar); i++)
    // {
    //     for (int j = 0; j < ARR_LEN(ar[i]); j++)
    //     {
    //         printf("INFO - ar[%d] = %p, j = %d, ar[i][j] = %d\n", i, ar[i], j, ar[i][j]);
    //     }
    // }

    // for (int i = 0; env[i]; i++)
    // {
    //     printf("INFO - env[%d] = %s\n", i, env[i]);
    // }

    // printf("INFO - argv[0] = %s\n", argv[0]);
    // printf("INFO - argc = %d\n", argc);
    return 0;
}