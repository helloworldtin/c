#include <stdio.h>
#include <stdio.h>

// this should be global variable
// because we should call it from different.
jup_buf env;

int main(void)
{
    char code;

    for(;;) {
        setjmp(env);

        printf("Enter the operation code: ");
        scanf("%c", &code);

        while(getchar() != '\n')
            ;

        switch(code) {
            case 'i': {
                insert();
                break;
            }
            case 's': {
                search();
                break;
            }

            default: {
                printf("Very bad code try again\n");
                longjmp(env, 0);
            }
                
        }
    }
    return 0;
}
