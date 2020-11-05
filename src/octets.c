#include <stdio.h>

int main ()
{
    char a;
    char *addr_a = &a;
    printf("adresse a : %#x\n",addr_a);
    short b;
    short *addr_b = &b;
    printf("adresse b : %#x\n",addr_b);
    int c;
    int *addr_c = &c;
    printf("adresse c : %#x\n",addr_c);
    long int d;
    long int *addr_d = &d;
    printf("adresse d : %#x\n",addr_d);
    float e;
    float *addr_e = &e;
    printf("adresse e : %#x\n",addr_e);
    double f;
    double *addr_f = &f;
    printf("adresse f : %#x\n",addr_f);
    long double g;
    long double *addr_g = &g;
    printf("adresse g : %#x\n",addr_g);
    return 0;
}