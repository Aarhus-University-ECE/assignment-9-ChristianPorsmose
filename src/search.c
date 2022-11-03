#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    if (n == 0) {
        return false; //when whole array is checked for element, if not found, return false. 
    }
    else if(n > 0 && a[n-1] == x) {
        return true;   //if element is found return true.
    }
    else //if a[n-1] is not element, call function again.
        return search(a,n-1,x); 
        
}