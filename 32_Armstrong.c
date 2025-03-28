#include <stdio.h>
#include <math.h>

int main(){
    int n;

    printf("ARMSTRONG NUMBERS\n");
    printf("Enter number range: ");
    scanf("%d", &n);


    for(int num = 1; num <= n; num++){
        int originalNum = num;
        int sum = 0;
        int numDigits = 0;

        for(int temp = num; temp > 0; temp /= 10){
            numDigits++;
        }

        for(int temp = num; temp > 0; temp /= 10){
            int digits = temp % 10;
            sum += pow(digits, numDigits);
        }

        if(sum == originalNum){
            printf("%d\n", originalNum);
        }
    }    

    return 0;
}