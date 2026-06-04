// #include <stdio.h>
// #include <string.h>

// #define  STR_LEN 20

// int main(int argc, char *argv[])
// {
//     char smallest[STR_LEN + 1], largest[STR_LEN + 1], curr_word[STR_LEN + 1];

//     for(;;){
//         printf("Enter word: ");
//         scanf("%s", curr_word);

//         if(strlen(curr_word) == 4)
//             break;

//         if(strlen(curr_word) > 20){
//            printf("The word should not be more than twenty letter\n");
//            break;
//         };

//         if(strcmp(curr_word, smallest) <  0){
//             printf("The condition is matches and word is %s and %s\n", curr_word, smallest);
//             strcpy(smallest, curr_word);
//         }

//         if(strcmp(curr_word, largest) > 0)
//             strcpy(largest, curr_word);
//     }

//     printf("The largest word is %s\n", largest);
//     printf("The smallest word is %s\n", smallest);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

#define WORD_LEN 20


void read_line(char str[], int n);

int main(void)
{
    char smallest_word[WORD_LEN + 1],
         largest_word[WORD_LEN + 1],
         current_word[WORD_LEN + 1];


        printf("Enter word: ");
        read_line(current_word, WORD_LEN);
        puts(current_word);

        strcpy(smallest_word, strcpy(largest_word, current_word));

        while(strlen(current_word) != 4){
            printf("Enter world: ");
            read_line(current_word, WORD_LEN);

            if(strcmp(current_word, smallest_word) < 0)
                strcpy(smallest_word, current_word);

            if(strcmp(current_word, largest_word) > 0)
                strcpy(largest_word, current_word);
        }

        printf("\nSmallest word: %s\n", smallest_word);
        printf("Largest world: %s\n", largest_word);

        return 0;
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if(i < n)
            str[i++] = ch;

    str[i] = '\0';
}
