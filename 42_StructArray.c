#include <stdio.h>
#include <string.h>

// 1. We define the struct outside the main function
struct Students{
    char name[15];
    float average;
};

int main(){
    // 2. We initialize some structs -- struct structName variablename
    struct Students student1 = {"Eloka", 95.35};
    struct Students student2 = {"Derrick", 45.47};
    struct Students student3 = {"Ugochukwu", 67.89};
    struct Students student4 = {"Tochukwu", 99.78};
    struct Students student5 = {"Uwakwe", 34.22};

    // 3. We then create the 'array of struct' with an array variable name
    struct Students studentlist[] = {student1, student2, student3, student4, student5};

    // 4. We use a for loop to display the array contents
    for(int i = 0; i < sizeof(studentlist)/sizeof(studentlist[0]); i++){
        printf("%-12s\t", studentlist[i].name); // REMEMBER: the -12 specifies a minimum fieldwidth of 12 spaces ensuring uniform indentation 
        printf("%.2f\n", studentlist[i].average);
    }

    return 0;
}