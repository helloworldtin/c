// #include <stdbool.h>
// #include <stdio.h>
// #include <string.h>

// #define PLANET_COUNT 9

// int main(int argc, char *argv[])
// {
//     char **args;
//     char *planets[] = { "mercury","venus", "earth", "mars", "jupiter","saturn","uranus","neptune","pluto"};

//     for(args = &argv[1]; *args != NULL; args++){
//         bool planet_exist = false;
//         for(int i = 0; i < PLANET_COUNT; i++){
//             if(strcmp(*args, planets[i]) == 0){
//                 planet_exist = true;
//                 break;
//             }
//         }
//         if(planet_exist)
//             printf("%s planet is exist\n", *args);
//         else
//             printf("%s planet does not exist\n",*args);
//     }
//     return 0;
// }


#include <stdio.h>
#include <string.h>

#define NUM_PLANET 9

int main(int argc, char *argv[])
{
    char *planets[] = { "Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto",
                      };
    int i, j;

    for(i = 1; i < argc; i++){
        for(j = 0; j < NUM_PLANET; j++){
            if(strcmp(argv[i], planets[j]) == 0){
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }

        if(j == NUM_PLANET)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
