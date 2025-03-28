#include <stdio.h>
#include <stdbool.h>

int main()
{
    float c = 3.141592; //4 bytes (32-bits of precision), 6-7 s.f. digits %f
    double d = 3.1415923141897; // 8 bytes (64-bits of precision), 15-16 s.f. digits %lf

    printf("The answer is %f\n", c);
    printf("The answer is precisely %lf\n", d); //displays only the first 6 s.f. digits, more on this

    float e = 3.1415923141897;

    printf("%0.15f\n", e); //same as below but loses precision, no longer same sf digits with the original value
    printf("%0.15lf\n", d); //%the amount of s.f. digit you want displayed, kinda forcing precision; tend to use doubles more because of precision

    bool x = true; //1 byte of storage, 1 for true, 0 for false %d
    printf("the value for true in machine language is %d\n", x);

    //char can be used to display numbers from -128 to +127. %d or %c
    char m = 101; 
    char n = 101;

    printf("%d\n", m); //displays the number if within the range
    printf("%c\n", n); //displays the ASCII character equivalent of the number

    //check out
    char p = 129;
    printf("%c\n", p); //prints ü

    /*char p = 1300;
    printf("%c", p); -- overflow*/

    unsigned char s = 237; //takes out the negative part, (0 - +255) %d or %c
    printf("%c\n", s);

    //most data-types are signed by nature

    /*unsigned char t = 256;
    printf("%d", t); overflows and resets to 0*/

    short int k = 32768;
    printf("maximum value of unsigned short \"k\" is %d\n", k); //2 bytes  (-32,768 to +32, 767) %d
    
    unsigned short int l = 65535;
    printf("maximum value of signed short \"l\" is %d\n", l); //2 bytes (0 - 65,535) %

    //overflows are reset to the minimum value of their data-types. 
    //unsigned/signed short 'int' can be just called signed/unsigned 'short'

    int j = 2147483647;
    unsigned int q = 4294967295;
    printf("%d\n", j); // 4 bytes (-2,147,483,648 to +2,147,483,648) %d
    printf("%u\n", q); //4 bytes (0 to 4,294,967,295) %u !!!!!!! Putting d here outputted -1

    long long int r = 9223372036854775807; //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int v = 18446744073709551615U; //8 bytes (0 to 18 quintillion) %llu. Attach a'U' to the back of the llu number to bypass the size warning.

    printf("%lld\n", r);
    printf("%llu\n", v);

    //DON'T USE A VARIABLE TWICE, unless you know what you're doing
    //Focus: char, int, double & bool

    return (0);
}