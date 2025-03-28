#include <stdio.h>

int main(){
    // BITWISE OPERATORS = special operators used in bit level programming

    // & = Bitwise AND
    // | = OR
    // ^ = XOR
    // <<  left shift
    // >> right shift

    int x = 6;  // 6 = 0000 0110
    int y = 12; //12 = 0000 1100
    int z;      // 4 = 0000 0100 
    z = x & y; // for a bit of z, is 1 if both bits of x and y are 1
    printf("AND = %d\n", z);

    int a = 6;  // 6 = 0000 0110
    int b = 12; //12 = 0000 1100
    int c;      //14 = 0000 1110
    c = a | b; // for a bit of c, is 1 if one of the bits of a and b is 1
    printf("OR = %d\n", c);

    int d = 6;  // 6 = 0000 0110
    int e = 12; //12 = 0000 1100
    int f;      //10 = 0000 1010 
    f = d ^ e; // for a bit of f, is 1 if only either bits of d and f is 1
    printf("XOR = %d\n", f);

    int g = 6;  // 6 = 0000 0110
    int i;      // 12 = 0000 1100 
    i = g << 1; // shifts the bits of g = 0000 0110 one spot to the left

    int m;      // 24 = 0001 1000; doubles the number with each incremental shift
    m = g << 2; // shifts 2 spots to the left
    printf("g << 1 = %d\n", i);
    printf("g << 2 = %d\n", m);

    int j = 6;  // 6 = 0000 0110
    int k;      // 3 = 0000 0011 
    k = j >> 1; // shifts the bits of j = 0000 0110 one spot to the left

    int n;      // 1 = 0000 0001; cuts the number into 2 with each incremental shift; technically 1.5 but we can't store the .5 so it's truncated
    n = g >> 2; // shifts 2 spots to the right
    printf("j >> 1 = %d\n", k);
    printf("j >> 2 = %d\n", n);

    return 0;
}

// More bitwise op: one's complement (~)
// The one's complement operator(~) sometimes called the bitwise complement operator, yields a bitwise one's complement of its operand. i.e. every bit that is 1 in the operand is 0 in the result. Conversely, every bit that is 0 in the operand is 1 in the result. The operand to the one's complement operator must be an integral type