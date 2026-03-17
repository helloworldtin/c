// Write a function digit (n, k) that returns the k ' digit (from the right) in n (a posi-
// tive integer). For example, d i g i t (829, 1) returns 9, digit (829, 2) returns 2. and
// digit (829, 3) returns 8. If k is greater than the number of digits in n, have the fune-
// tion return O.


int digit(int n, int k);

int main(void)
{
    int res = digit(344,2);
    printf("res = %d\n",res);
    return 0;
}

int digit(int n, int k)
{
    if(k > n) return 0;

    for(int i = 1; i <= k; i++){
        n /= 10;
    }

    return n;

}
