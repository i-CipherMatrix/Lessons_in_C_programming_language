#include <stdio.h>

void rotor(char turnspd[], int speed){
    printf("The rotor speed is %s\n", turnspd);
    printf("The speed is %d rpms", speed);

}

int main(){
    char turnspd[] = "fast";
    int speed = 125;

    rotor(turnspd, speed);

    return(0);
}