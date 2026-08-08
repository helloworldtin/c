#include <stdio.h>
#include <stdarg.h>

char *max_pair(int num_pairs, ...)
{
    if(num_pairs < 1) {
        return NULL;
    }

    int current_int_value, max_value,  i;
    char *current_str_value, *max_value_str;
    
    va_list ap;
    
    va_start(ap, num_pairs);

    max_value = va_arg(ap, int);
    max_value_str = va_arg(ap, char *);

    for(i = 0; i < num_pairs - 1; i++) {
        current_int_value = va_arg(ap, int);
        current_str_value = va_arg(ap, char *);

        if(current_int_value > max_value) {
            max_value = current_int_value;
            max_value_str = current_str_value;
        }
    }
    
    va_end(ap);
    
    return max_value_str;
}

int main(void)
{
    char *result = max_pair(5, 180, "Seinfeld", 180, "I love lucky", 39, "The Honeymooners", 210, "All the family", 86, "The Soparnos");
    puts(result);
    return 0;
}
