int *(*x[10]) (void);

typedef int* Fcn(void);
typedef Fcn* Fcn_Ptr ;
typedef Fcn_Ptr Fcn_ptr_array[10];

Fcn_ptr_array x;
