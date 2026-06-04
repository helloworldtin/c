#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void)
{
    char str[100] = "   sushil sunar";
    reverse_name(str);
    puts(str);
    return 0;
}

void reverse_name(char *name)
{
   char *first_address_ptr = name;
   char first_first_character;

   // ignore the first spaces
    while(*name == ' ')
        name++;

    // get the first name first letter
    first_first_character = *name;
    name++;

    // go to the space
    while(*name != ' ')
        name++;

    // ignore the middle space
    while(*name == ' ')
        name++;

    // set where last name start
    char *ptr = name;

    while(*ptr && *ptr != ' ')
        ptr++;

    if(*ptr == ' ')
        *ptr = '\0';

    strcat(name, ", ");
    char last_name_first_char_str[2];
    sprintf(last_name_first_char_str, "%c", first_first_character);

    strcat(name, last_name_first_char_str);

    while(*name){
        *first_address_ptr = *name;
        first_address_ptr++;
        name++;
    }

    *first_address_ptr = '\0';
}
