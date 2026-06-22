// a. solution
char *(*p) (char *);

// b. solution
struct t {
    int hell;
};

void *(*f(struct t*p, long int n))(void);
// void *f(struct t *p, long int n)(void);

// c. solution
void insert(void);
void search(void);
void update(void);
void print(void);

void (*a[4]) (void) = {
    insert, search, update, print,
};


// d.solution
struct t (*b[10])(int, int);
