#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key);
bool search_32(int temperatures[7][24]);

int main(void)
{
    int temperatures[7][24] = {
        {30, 31, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 31, 55, 33},
        {28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 2},
        {25, 26, 27, 28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48},
        {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43},
        {15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38},
        {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 2, 33},
        {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 2}
    };

    bool res = search_32(temperatures);
    if(res)
        printf("32 is found\n");
    else
     printf("There is no matching temperature.\n");

    return 0;
}

bool search(const int a[], int n, int key)
{
    const int* p;
    for(p = a; p < a + n; p++){
        if(*p == key){
            return true;
        }
    }
    return false;
}

bool search_32(int temperatures[7][24])
{
    int (*p);

    for(p = temperatures[0]; p < temperatures[0] + 7; p++){
        if(search(p, 24, 32)){
            return true;
        }
    }

    return false;
}
