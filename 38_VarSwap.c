#include <stdio.h>
#include <string.h>

int main(){
    // Swapping variables is important in sorting algorithms
    /*char x = 'X';
    char y = 'Y';

    printf("x = %c\n", x);
    printf("y = %c\n", y);*/

    // when we try to swap the values of our variables by a simple interchange the value of the newly assigned variable is updated and we have 2 same values, see..
    /*char x = 'X';
    char y = 'Y';
    x = y;

    printf("x = %c\n", x);
    printf("y = %c\n", y);*/

    /* So how do we make this interchange possible? We introduce a third variable thus...
    char x = 'X';
    char y = 'Y';
    char temp;
    temp = x; // use temp as a temporary storage of some value, in this case 'x'
    x = y; // swap x to y
    y = temp; // swap y to x (original value stored in temp)
    
    printf("x = %c\n", x);
    printf("y = %c\n", y);*/

    /* Now for strings, this doesn't work just so see...
    char x[] = "Water";
    char y[] = "Juice";
    char temp;
    temp = x; // use temp as a temporary storage of some value, in this case 'x'
    x = y; // swap x to y
    y = temp; // swap y to x (original value stored in temp)
    
    printf("x = %c\n", x);
    printf("y = %c\n", y);*/
    // this throws an error: expression must be a modifiable value. Because string is not modifiable just like a number or character

    // So, instead, we use the strcpy function
    /*char x[] = "Water";
    char y[] = "Juice";
    char temp[15];

     // you no longer use the assignment operator
    strcpy(temp, x);    // temp is like an empty glass that you transfer the water that fills up 'x' glass to
    strcpy(x, y);       // then you transfer the juice in 'y' to the now empty 'x'
    strcpy(y, temp);    // and you transfer the water now stored in 'temp' to 'y'
    // Because transferring one directly to the other will cause the contents to overflow
    
    printf("x = %s\n", x);
    printf("y = %s\n", y);*/

    // Now when using the strcpy function, if the length of the first argument is less than the first, it will cause unexpected behavior in the program... So to solve this, we assign the same size to the strings, see...(try the program without the array size and then with the array size)
    char x[10] = "Water";
    char y[10] = "Ice";
    char temp[10];

     // you no longer use the assignment operator
    strcpy(temp, x);    // temp is like an empty glass that you transfer the water that fills up 'x' glass to
    strcpy(x, y);       // then you transfer the juice in 'y' to the now empty 'x'
    strcpy(y, temp);    // and you transfer the water now stored in 'temp' to 'y'
    // Because transferring one directly to the other will cause the contents to overflow
    
    printf("x = %s\n", x);
    printf("y = %s\n", y);
    return 0;
}