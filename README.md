# C Programming - A Modern Approach - 2nd_Ed(C89, c99) - by King.

# All Exercises are implemented with topics.

## Fundaments.

### 1. What is the function?
- Function is simply the series of statements that is combine together by name given.

### 2. What is identifier?
- The Name of the variables, function, struct and so on which give identity to something is called identifier.

### 3. Good way to compile C code.
```cmd
gcc -O -Wall -W -pedantic -ansi -std=99 -o a.out a.c
```
- -O -> Optimization
- -Wall -> Shows all common warning.
- -W -> extra warnings
- -pedantic -> enforce strict language rules
- -ansi -> use ANSI C
- -std=99 -> Uses C99 version
- -o -> where executable should be locate

## Formatted IO

### printf function
- "printf" is the function which take the string and infinite number of
expression as the arguments.
-  number of conversion specifications = numbers of expression.

### Escape Sequence Character.
- There are such types of characters that that cannot be directly inserted in the strings. So they help both coder and the compiler to add theses types of character, such as (quote)" new line(\n) and so on.

### scanf function
- "scanf" is same as the printf rather this is used to input the as many values and as what format we want.No Limit.

## Expressions

### Arithmetics Operator(left associativity)
- operation on (int) and (float) is always results as float such as 1 + 1.2f = 2.2f.
- int/int = truncated int even the result has float (x.y) in truncated division all after (.) will be ignored.
- The % operator requires integer operands; if either operand is not an integer,
the program won't compile.

### Assignment Operator(right associativity)
- In C the '=' is also the operator like + because if we use '+' operator to add two number we get one result that is sum. So, in the assignment operator will also produce some result.
```c
 float a = 9043.48f;
 int b = a; // the value of b will become 9043 because '=' operator remove the value after decimal.

 // associative example
 i = j = k = 0;
 i = (j = (k = 0))
 ```

 - assignment is always on lvalues.

 - Compound Operator (right associativity)
  - i = i + 1 which is equal to i += 1;
  - also possible i += j += k

- increment operator.
  - (++i or i++) and (--i or i--)

## Relation Operator 
- <,>,<=,>=
- Less precedence than arithmetic operator. (left associative)
- return either 0 or 1.(0 when relation is not correct)

## Equability Operator.
- ==, !=
- Less precedence than Relation Operator
- return either 0 or 1.(0 when condition don't match and 1 when condition matched)

## Short Circuit Evaluation.
- (i != 0 ) && ( j / i > 0)
- In this expression if the value if is = 0 then only the left hand operation will evaluated right side is ignored because i is already equal to zero.This is known as Short Circuit Evaluation.

## Logical Operator.
- !(logical Negation), && (logical and), ||(Logical OR)
- This operator follow the short circuit evaluation.
- The precedence of the logical negation is higher than "and" and "or" logical operator and that is right associative. And other two are right associative.

## Types of Statements.
- Selection Statement: if and switch statement.
- Iteration Statement: while,for,do.
- Jump Statements: return,break,continue,goto.
- Compound Statement: function group of statements.
- Null Statement: Perform no action.


## if and else clause (Selection Statement)
- 'Dangling else' means the else clause will belong to the nearest if clause. So we need to use braces to avoid this problem.

## Switch Statements
- The statement should only be in value switch(int value);
- The label must be a const statements.case constant expression: other statements.

## Loops
### Comma operator
- We can initialize more than one variable in for statement.
- for(int i = 0,j = 0; j < 10; j++);
- we can omit the initialization to the other line. And increment in body of loop like while loop.

## Basic Types
### Integers types
- 2^n - 1 is the max number of int the n bit can hold.
- to store constant number we use normal
- to store octal the number should always start from 0 and 0x... for the hex.

### Reading and writing of the Integers (Conversion Specifier);
- u => unsinged int
- o => octal int
- x => Hexadecimal
- hd => short int
- ld => long int
- lld => long long int
- lu => long unsigned
- llu => long long unsigend

### Reading and writing of the Floating Point Values(Conversion Specifiers)

- e -> Exponent Form
- f -> Fixed pont
- g -> General Form. Means can accept both. e and g

- le -> to get double value in exponent format
- lf -> To get the double value in point format.
- lg -> To get the double value in the general form.

- Le -> same as le witht but long double
- LF -> same
- LG -> same

- NOTE: We Don't need to specifc that for printf.

## Arrays
- Using macros for the size of the array is excellent choice.

- ### Array Initialization datatype
  - datatype arr[10];
  - int arr[10] = {1,2,3,4,5,6,7,8,9,10} 
  - int arr[10] = {1,2} .... [1,2,0...0]
  - int arr[10] = {0}
  - Designated initializer int arr[25] = {[2]=100, [2] = 100}
## Function
- When we pass the value in the argument like 10 in argument x. Then 10 will be copied in x.

- ### Structure of the function
 ```c
     return-type function-name (parameters){
        declarations
        statements
     }
 ```

### Function Deceleration
- if we don't declare the function and used above there will be no error.
Because compiler assume that if function has do definition it will return int by default,
and we will get error in run time. So, to prevent from this error we need to use function deceleration
so it could figure out return type and the parameters correctly.
- The structure is like return-type (parameters);

- C99 has adopted the rule that either a declaration or a definition of a function
must be present prior to any call of the function. Calling a function for which the
compiler has not yet seen a declaration or definition is an error.

### 2-D array as function parameters.
- We need to pass the value of column in the 2-d array that is mandatory.
- But we can ignore that in 1-D array.

### VLA(Variable Length Array)
1. For 1-D array
  - int hello(int n, int a[n]); Note: n should be at the first
  - int hello(int n, int a[*]); // this is because name is not required in the function prototype only.
  - int concatenation(int n, int m, int a[n], int b[m], int c[m + n]);

2. For 2-D array we can do the same.
  - int car(int n, int m, int a[n][m]);
  - int car(int, int, int[*][*]);

### Compound Literals and Program Exit.

- We can pass argument as the array directly. How?
- f(int arr[], int n);
- f((int[]{1,2,3,4}, 4));
- By adding const we can make read only.
- we can exit form the program by using exit() function from stdlib
- return statement terminates the function exit function terminates the whole program. And there are EXIT_SUCCESS and EXIT_FAILURE Macros to exit program according.

## Pointers

### Address and Indirection
- int *p = &variable. Will provide us the address of the variable.
- int val = *p; Will give the value of that pointer which is know as indirection operator.
- ```c
  p = & i;
  g = & j;
  i = 1;

  *q = *p;

  /*
   * In this case the the value of pointer p 
   * will be copy to the variable q points to And
   * q will hold that memory address 
   */
 ```
