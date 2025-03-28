#include <stdio.h>

int main(){
    int i;

    do{
        printf("Enter a positive number: ");
        scanf("%d", &i);
    }while(i >= 0);

    return 0;
}