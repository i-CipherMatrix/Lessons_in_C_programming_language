#include <stdio.h>
#include <string.h>

int main ()
{
    char name[200];
    int age;

    printf("Hi! What is your name? ");
    fgets(name, 200, stdin);    // syntax: fgets(variable, string size, stdin);
    name[strlen(name)-1] = '\0';

    printf("Hi %s, tell me your age.\n", name);
    scanf("%d", &age);

    printf("Welcome %s, aged %d\n", name, age);

    return(0);

}