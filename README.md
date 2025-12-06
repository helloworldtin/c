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
-  number of conversion specifications = nums of expression