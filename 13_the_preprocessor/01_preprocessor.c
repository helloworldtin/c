#include <stdio.h>

// simple macro
#define STR_LEN 80
#define TRUE 1
#define FALSE 0
#define  PI 3.14159
#define CR '\r'
#define EOS '\0'
#define MEM_ERR "Error, not enough memory"

// para macros
#define  MAX(x,y) ((x) > (y))?(x):(y))
#define  IS_EVEN(x) ((n)%2==0)
#define TOUPPER(c) ('a'<=(c) && (c)<='z'?(c)-'a'+'A':(c))
#define PRINT_INT(n) printf("%d\n", n)
#define PRINT_STR(s) printf("%s\n",s)

// single(#) operator(convert the parameters to string literal)
#define PRINT_INT_SECOND(n) printf(#n " = %d\n", n)

// (##) operator
// used to combine to token identifier
#define MK_ID(n) i##n

// generic max function
#define GENERIC_MAX(type)           \
type type##_max(type x, type y)     \
{                                   \
    return x > y ? x : y;           \
}

// when we call them
GENERIC_MAX(int);
// this will evaluate to
// int int_max(int x, int y) { return x > y? x: y;}
GENERIC_MAX(float);
// same as above

// longer macros
#define ECHO(s) (gets(s), puts(s))
#define ECHO2(s) { gets(s); puts(s); }

#define ECHO3(s)              \
                do {          \
                    gets(s);  \
                    puts(s);  \
                 }while(0)

#define CHECK_ZERO(divisor) \
    if(divisor == 0) \
        printf("*** Attempt to divide by zero on line %d " \
            "or file %s ***\n", __LINE__, __FILE__)


#define  MK_STR(x) #x

#define  JOIN(x,y,z) x##y##z

// int JOIN(a,b,c), JOIN(a, b,) , JOIN(a, , c), JOIN(, , c);
// expands to
// int abc, ab, ac, c


#define TEST(condition, ...) ((condition) ? \
    printf("Passed test: %s\n",#condition): \
    printf(__VA_ARGS__))

// function identifier
#define  FUNCTION_CALLED() printf("%s called\n", __func__);
#define  FUNCTION_RETURNS() printf("%s returns\n", __func__);


void f(void)
{
    FUNCTION_CALLED();
    int sum = 100 + 10;
    PRINT_INT(sum);
    FUNCTION_RETURNS();
}

int main(){
    int max_voltage = 1;
    int voltage = 10;
    TEST(voltage <= max_voltage, "Voltage %d exceed %d\n",voltage, max_voltage);
    f();
    return 0;
}
