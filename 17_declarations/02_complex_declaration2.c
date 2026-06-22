/* 1. Solution
    char (*x[10]) (int);
    typedef char Fnc(int);
    typedef Fnc *Fnc_ptr;
    typedef Fnc_ptr Fnc_Ptr_array[10] ;
    Fnc_Ptr_array y;

 c */

/* 2.Solution
    int (*x(int))[5];
    typedef int ReturnType[5] ;
    typedef ReturnType *Fnc(int);
    Fnc y;
 */

/* 3.Solution
    float *(*x(void)) (int);
    typedef float *ReturnType(int) ;
    typedef ReturnType *Fnc_Ptr(void) ;

    Fnc_Ptr y;
 */

/* 3.Solution
    void (*x(int, void (*y)(int))) (int);

    typedef void ReturnType(int);
    typedef ReturnType *Fnc_ptr(int,ReturnType) ;

    Fnc_ptr y;
 */

// Beautified Solution

// char (*x[10])(int);
// typedef char Function(int);
// typedef Function *FunctionPtr;
// typedef FunctionPtr FunctionPtrArray[10];


// int (*x(int))[5];
// typedef int intArray5[5] ;
// typedef intArray5 *intArray5Ptr ;
// typedef intArray5Ptr Function(int) ;
// Function y;

// float *(*x(void))(int);
// typedef float ReturnFunction(int);
// typedef ReturnFunction *ReturnFunctionPtr;
// typedef ReturnFunctionPtr Function(void) ;
// Function y;

// void (*x(int, void (*y)(int)))(int);
// typedef void VoidFunction(int);
// typedef VoidFunction *VoidFunctionPtr ;
// typedef VoidFunctionPtr Function(int, VoidFunctionPtr) ;
// Function y;
