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