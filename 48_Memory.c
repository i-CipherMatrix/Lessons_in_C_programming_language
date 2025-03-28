#include <stdio.h>

int main(){
    // memory = an array of bytes within RAM (like a street)
    // memory block = a single unit (byte) within memory, used to hold some value (like a house housing a person)
    // memory address = the address of where a memory block is located (house address)

    // when we declare a variable we're setting aside some amount of memory block to erect a house for the variable
    char analogy = 'X'; // X is the person living in the house, value being stored

    // Analogy: we're walking down the street going from house to house looking for an address and we find a matching address then we knock on the 'block' to see "X"

    /*char a = 'X';
    char b = 'Y';
    char c = 'Z';*/

    /*short a = 'X';
    short b = 'Y';
    short c = 'Z';*/

    /*int a = 'X';
    int b = 'Y';
    int c = 'Z';*/

    /*double a = 'X';
    double b = 'Y';
    double c = 'Z';*/

    /*char a = 'X';
    char b[1];
    char c[1];*/

    /*char a[1];
    char b[2];
    char c[3];*/

    /*short a[1];
    short b[2];
    short c[3];*/

    int a[1];
    int b[2];
    int c[3];

    // let's find the sizeof each of this xters
    int size1 = sizeof(a);
    int size2 = sizeof(b);
    int size3 = sizeof(c);

    printf("%d bytes\n", size1);
    printf("%d bytes\n", size2);
    printf("%d bytes\n", size3);

    // We can access the address of the variables
    // Each variable is stored within a block of memory, i.e in a byte of memory
    // To display the address of the block, we...
    printf("%p\n", &a); // %p is the format specifier for address
    printf("%p\n", &b);
    printf("%p\n", &c);

    // Now the addresses are in a hexadecimal format
    // From the output of the addresses you'll notice that the hexadecimal is being incremented in steps of 1: 8, 9, a. In some machines, the address is decremented by 1

    // Now, if switch to a different datatype, the address is incremented in steps of the corresponding datatype size, see...(uncomment block for shorts above)
    // Steps of 2(bytes) for shorts
    // Steps of 4(bytes) for ints
    // Steps of 8(bytes) for doubles

    // For arrays(chars), it is increased in steps of the specified size to accommodate the increased size of the array

    // If the datatype of the array is changed, the size is increased by the (size of the datatype in memory * specified no. of size in block)
    /* Example for shorts:
        0x7fffce4b8d9c // increased by 2 bytes
        0x7fffce4b8d9e // increased by 4 bytes
        0x7fffce4b8da2 // increased by 6bytes
    */
    /* For ints:
        0x7ffff7dc3880 // increased by 4 bytes
        0x7ffff7dc3884 // increased by 8 bytes
        0x7ffff7dc388c // increased by 12 bytes
    */

    return 0;
}