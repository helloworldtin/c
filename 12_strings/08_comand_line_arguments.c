#include <stdio.h>

/* 1 this is known as program parameter
*which is supplied while running the program.
*argc = argument count, argv = argument vector */
// int main(int argc, char *argv[]){
//     int i ;

//     for(i = 0; i < argc; i++){
//         puts(argv[i]);
//     }
//     return 0;
// }


int main(int argc, char *argv[]){
    // pointer of of the pointer of character.
    char **p;

    for(p = &argv[1]; *p != NULL; p++)
        printf("%s\n", *p);
}
