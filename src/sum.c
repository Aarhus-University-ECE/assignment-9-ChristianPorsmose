#include "sum.h"

int sum(int a[], int n)
{
    if (n == 0) { //base case
        return 0;
        } 
    else 
    {
        return a[n - 1] + sum(a, n-1); //recursive step
    }
    
    return 0;
}