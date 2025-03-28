#include <stdio.h>
#include <string.h>

// 2. To create a struct outside our main function... 
// SYNTAX: struct structName{};
struct Room{
    char name[12];
    int switchstate;
};

// Also
struct Player{
    char name[12];
    int score;
};
int main(){
    // 1. STRUCT
    // struct = collection of related members('variables')
    // can consist of different data types unlike arrays
    // listed under one name in a block of memory, in order to refer to that struct, we can refer to a variable name
    // VERY SIMILAR to classes in other languages (but no 'methods' within a struct only 'members')
    // VARIABLE NAMES ARE NOW BAPTIZED AS DATATYPES

    // Kinda an ARTIFICIAL HYBRID DATATYPE
    // We can use struct to mimic real world objects
    // E.g. In a smart home system, we have different rooms with particular room-names and lightswitch state...
    // The Room names and the lightswitch states are the members of the struct
    // You can also use games as an example: A game with 2 players, each player has a name and a score, the name and scores are 'members' of the struct

    // 3. To assign a value to the members, we are going to create a type of a variable and room is going to be kinda the datatype
// Imagine:                 struct                              Room                                    room1
    //    (tells you we're dealing with a struct) (baptized datatype made up of ints, chars..)       (variable name)
    struct Room room1;  // with the struct definition above, structs can be reused 
    struct Room room2;  // SYNTAX: struct() Room(datatype) room2(structname) => Human --- Surname --- Firstname

    // 4. Now we assign values to the members... we'll be using the strcpy function to do it for the string because of the string array
    // To access a particular member => struct.member; the '.' is a MEMBER ACCESS OPERATOR

    strcpy(room1.name, "Parlour");
    room1.switchstate = 1;  // values assigned directly for non-string types

    strcpy(room2.name, "Bedroom");
    room2.switchstate = 0;

    // 5. To print the data...
    printf("Room1: %s\n", room1.name);
    printf("Switch: %d\n", room1.switchstate);

    printf("Room2: %s\n", room2.name);
    printf("Switch: %d\n", room2.switchstate);

    // ---------------
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Acer");
    player1.score = 10;

    strcpy(player2.name, "Charlie");
    player2.score = 13;

    printf("\nplayer1: %s\n", player1.name);
    printf("score: %d\n", player1.score);

    printf("player2: %s\n", player2.name);
    printf("score: %d\n", player2.score);

    return 0;
}