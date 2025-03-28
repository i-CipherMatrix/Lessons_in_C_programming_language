#include <stdio.h>
#include <string.h>

    // 2. initializing the typedef outside our main function...
    // SYNTAX: typedef datatype 'nickname'          // For arrays = typedef datatype 'nickname' [size]
    typedef char user [25];     // so now xter array of 25bytes will be known as a user

    /* 5. Let us implement typedefs in a struct, first let's create a struct...
    struct User{
        char name[25];
        char password[12];
        int id;
    };*/

    // 7. Using typedef on the struct above will look like this...
    typedef struct{     // struct initializer
        char name[25];
        char password[12];
        int id;
    } User;

int main(){
    // typedef = 'typedef' nicknames a 'declaration' even a baptized one (structs) so you don't have to be using the same datatype over and over again.
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // USAGE

    // 1. this a xter array of 25 bytes, so, typedef provides you with a way of 'nicknaming' char arrays with[25bytes] to a name simpler
    // char name[25] = "Charlie";
    
    // 3. So we don't need all the above syntax now, when we need a xter array of 25bytes, we don't need to spell it all out, just...
    // user user1 = "Charlie";     // the char datatype + all its stressful [] are all just nicknamed 'user'!

    // 4. This is used a lot in structs. Now structs and typedefs have some similaritiies  but also core differences compared below..
    //                          struct                                                          typedefs  
    /* a. syntax: struct 'assumed datatype' 'variable name'               a. syntax: typedef 'native datatypes' 'variable name'
       b. structs functions beyond mere declarations                      b. typedefs are just used for the 'nicknaming'
       c. structs have members                                            c. typedefs don't have members unless technically it's nicknamed a struct
    */
    
    // 6. using the struct above we create the following...
    //struct User user1 = {"Charlie", "#xcode", 787898};
    //struct User user2 = {"Priscy", "#suga*", 972367};

    // 8. So now we don't have to be calling the datatype struct again, just...
    User user1 = {"Charlie", "#xcode", 787898};
    User user2 = {"Priscy", "#suga*", 972367};

    // 9. Now we print our outputs...
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    
    return 0;
}