// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

// #define  NUM_PLANET 9

// void convert_to_lower(char str[]){
//     *str = toupper(*str);
//     str++;
//     while(*str){
//         *str = tolower(*str);
//         str++;
//     }
// }

// int main(int argc, char *argv[])
// {
//     char *planets[] = { "Mercury", "Venus", "Earth", "Mars",
//                         "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto",
//                       };
//     int i, j;

//     for(i = 1; i < argc; i++){
//         for(j = 0; j < NUM_PLANET; j++){
//             convert_to_lower(argv[i]);
//             if(strcmp(argv[i], planets[j]) == 0){
//                 printf("%s is planet %d\n", argv[i], j + 1);
//                 break;
//             }
//         }

//         if(j == NUM_PLANET)
//             printf("%s is not a planet\n", argv[i]);
//     }

//     return 0;
// }


#include <ctype.h>
#include <stdio.h>

#define NUM_PLANET 9

int string_equal(const char *s1, const char *s2);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int i, j;

    for(i = 1; i < argc; i++){
        for(j = 0; j < NUM_PLANET; j++){
            if(string_equal(argv[i], planets[j])){
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }

        if(j == NUM_PLANET){
            printf("%s is not a planet\n", argv[i]);
        }
    }

    return 0;
}

int string_equal(const char *s, const char *t)
{
    int i;

    for(i = 0; toupper(s[i]) == toupper(t[i]); i++)
        if(s[i] == '\0')
            return 1;

    return 0;
}
