#include <stdio.h>

/* 5. void printVolt(int voltage){ //let's first pass the integer

    printf("The voltage of the battery is %dV\n", voltage);

}*/

// 7. One can as well pass the pointer as parameters of a function
void printVolt(int *pVoltage){ // pointer declared fully

    printf("The voltage of the battery is %dV\n", *pVoltage); // dereference

}

int main(){
    //1. pointer = a "variable-like" reference that holds a memory address to another(main) variable, array etc.
    //           some tasks are performed more easily using pointers see..
    /* Advantages of Using Pointers
       a. Less time in program execution
       b. Working on the original variable
       c. With the help of pointers, we can create data structures (e.g. linked-list, stack, queue).
       d. Returning more than one values from functions.
       e. Searching and sorting very large data very easily.
       f. Dynamic memory allocation
    */

    // We'll be focusing on the basics of pointers in this lesson
    // We begin with declaring a variable 'age'

    int age = 25; //this variable 'age' has a value and an address

    // lets display this value and address
    printf("Address of age: %p\n", &age);
    printf("Value of age: %d\n", age);

    // Now, there's a lot of things that can be done with the value of age so as is a lot of things that can be done with the address
    // E.g. we can store the address of the variable 'age' in a variable - a 'variable-like' reference called the pointer

    // STEP 1: To initialze a pointer, we declare it with the same datatype as the variable it is referencing

    // STEP 2: you start naming the pointer first with '*' - the indirection operator followed by p'name of variable'. A common convention is that the name of the variable is started with an uppercase letter, see....

    int voltage = 220;
    int *pVoltage = &voltage; // the value of this should be the address of voltage which should be the same as the address of voltage when referred to directly, see...

    printf("Address of voltage: %p\n", &voltage);
    printf("Value of *pVoltage: %p\n", pVoltage); // the '*' is no longer used when interacting with the pointer directly

    //2. So, our pointer has its own address but the value stored within it is the address of 'voltage'
    //printf("Address of pointer: %p\n", &pVoltage);

    //3. Furthermore, we can access the value stored within the pointer by using the  indirection operator, this time the '*' operator dereferences the pointer, see...

    printf("Value stored within pVoltage: %d\n", *pVoltage); // see the '*' as "value at address" (dereferencing) 

    // REMEMBER: The datatype of pointer must BE the same as that of the variable it is referencing else, you'll run into an error

    // Now, let's  compare and print the size of the variable 'age' and the size of the pointer

    int sizeVoltage = sizeof(voltage);
    int size_pVoltage = sizeof(pVoltage);

    printf("Size of voltage: %d\n", sizeVoltage); // this has the normal int size of 4
    printf("Size of pVoltage: %d\n", size_pVoltage); // you'll notice that this have a size of 8 bytes even though it was declared with an int. This is because pointers use 8bytes of memory to store the (hexad) address of a variable

    //4. One thing we can use pointers to do is to use is to pass the pointer as an argument to a function, see function above

    // then we pass in our variable here (argument)
    // 6. printVolt(voltage);
    printVolt(pVoltage);

    // REMEMBER: pVariable_name is the  name of the pointer variable when not being INITIALIZED or DEREFERENCED

    // 8. We can declare and initialize a function in two steps
    // it will be good practice to set initially set the pointer to NULL if you'd want to declare initialize it with a variable later, see...

    int ohms = 330;
    int *pOhms = NULL;
    pOhms = &age; // Since we already declared the pointer above, we do not need to use the indirection operator '*' when assigning a value to it

    printf("Value of pOhms: %d\n", *pOhms);


    return 0;
}