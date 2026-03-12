#include <stdio.h>

#define N 10

void  quicksort(int a[] , int low, int high) ;
int split (int a[] , int low, int high);

int main(void)
{
    int a[N] = { 9 ,16, 4, 7, 8, 2, 4, 6, 6, 12 };
    quicksort(a, 0, N - 1);

    for(int i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void quicksort(int a[], int low, int high){
    int middle;
    if(low >= high) return;
    middle = split(a, low, high);

    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high){
    int par_element = a[low];

    for(;;){
        while(low < high && par_element <= a[high])
            high--;
        if(low >= high) break;
        a[low++] = a[high];

        while(low < high && a[low] <= par_element)
            low++;

        if(low >= high) break;
        a[high--] = a[low];
    }
    a[high] = par_element;
    return high;
}
