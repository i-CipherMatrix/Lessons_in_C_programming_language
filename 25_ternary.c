#include <stdio.h>

int checker(int x, int y)
{
    /*if (x > y){
        return x;
    }

    else{
        return y;
    }*/
   return(x > y) ? x : y; // this does the same thing as the if/else statement above
}

int main()
{
    // ternary operator: also known as conditional operator is used as a shortcut the if/else statement when assigning or returning a value
    // SYNTAX: (condition) ? value if true : value if false

    int disp = checker(3, 4);

    printf("%d", disp);

    return (0);
}