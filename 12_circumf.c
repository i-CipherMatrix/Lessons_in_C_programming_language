#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Input radius of the circle.\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("The circumference of the cirle = %lf\n", circumference);
    printf("The area of the circle = %lf", area);

    return(0);

}