#include <stdio.h>

int main(){
    double impedance[] = {10.0, 20.0, 30.0, 40.0, 45.0, 54.0, 65.0, 43.2, 77.19};

    //printf("%d Bytes", sizeof(impedance)); // prints the sizeof the array. doubles have 8bytes so 9 elements of type 'double' * 8 = 72 bytes

    for(int i = 0; i < 9; i++){     // static/hardcoded loop of the array
        printf("%.2lf Ohms\n", impedance[i]);   // the number in the box at each time indicate the index or position`
    }
/*
    for(int i = 0; i < sizeof(impedance) / sizeof(impedance[0]); i++){  // dynamic loop of the array
        printf("%.2lf Ohms\n", impedance[i]);
    }*/

    return 0;
}