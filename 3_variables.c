#include <stdio.h>

int main (void)
{
    //variables -   Allocated space in memory to store a value
    //              we refer to the variable's name to access the stored data
    //              the variable now behaves as if it was the value it contains
    /*              but we need to declare the type of data we are storing*/

    int a; //declaration
    a = 321; //Initialization
    int b = 123; //declaration + Initialization

    int voltage = 220; //integer
    float cgpa = 4.59; //floating integer
    char grade = 'B'; //stores single character

    /*C is not an object-oriented language so there's no 'strings' data type, strings are technically objects*/
    /*We use array instead to fit in a string of characters, see....*/

    char name[] = "Charlie";

    //Formatting
    //format with % + datatype initial, e.g. d for decimal, c for character, s for strings, f for float.
    //pass the variable name as the argument of the format

    printf("Hello, World!\n");
    printf("My name is %s\n", name);
    printf("The volatage rating of the Smart switch is %dV\n", voltage);
    printf("I graduated with a CGPA of %f\n", cgpa); //this guy gave me 4.590000, we'll talk about format specifiers and type conversion later
    printf("I got a %c in MCT 359\n", grade);


    return (0);
}