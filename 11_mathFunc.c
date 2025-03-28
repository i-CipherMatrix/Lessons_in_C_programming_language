#include <stdio.h>
#include <math.h>

int main()
{
    double A = sqrt(121);
    double B = pow(9, 2);
    int C = round(3.14);
    int D = ceil(4.23);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(10);
    double H = sin(30);
    double I = cos(30);
    double J = tan(90);

    printf("A = %0.2lf\n", A);
    printf("B = %0.2lf\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);
    printf("F = %lf\n", F);
    printf("G = %lf\n", G);
    printf("H = %lf\n", H);
    printf("I = %lf\n", I);
    printf("K = %lf\n", J);


    return (0);
}