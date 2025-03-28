#include <stdio.h>

int main()
{
    // augmented assignment operator - shortcut used to replace a statement where an operator takes a variable
    //                                 as one of its argument and assigns the result back to the same variable
    //                                 x = x + 1;
    //                                 x+=1;

    int a = 10;
    //a = a + 2;
    a+=2;
    printf("%d\n", a);

    int b = 10;
    //b = b - 2;
    b-=2;
    printf("%d\n", b);

    int c = 10;
    //c = c * 2;
    c*=2;
    printf("%d\n", c);

    int d = 10;
    //d = d / 2;
    d/=2;
    printf("%d\n", d);

    int e = 11;
    //e = e % 2;
    e%=2;
    printf("%d\n", e);

    return (0);

}