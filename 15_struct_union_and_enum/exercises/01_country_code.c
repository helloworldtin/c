#include <stdio.h>

#define N 12

struct dialing_code {
    char *country;
    int code;
};

const struct  dialing_code country_codes[N] = {
    {"Argentina",               54}, {"Bangladesh",         880},
    {"Brazil",                  55}, {"Burma (Myanmar)",     95},
    {"China",                   86}, {"Colombia",            57},
    {"Congo, Dem. Rep. of",    243}, {"Egypt",               20},
    {"Ethiopia",               251}, {"France",              33},
    {"Germany",                 49}, {"India",               91},
    /* So on and so fourth */

};

int main(void)
{
    int dialing_code, i;
    printf("Enter the international dialing code: ");
    scanf("%d", &dialing_code);

    for(i = 0; i < N; i++){
        if(dialing_code == country_codes[i].code){
            printf("The name of the country you are dialing is %s\n", country_codes[i].country);
            return 0;
        }
    }
    printf("Sorry the code are you searching for is not available in our program\n");

    return 0;
}
