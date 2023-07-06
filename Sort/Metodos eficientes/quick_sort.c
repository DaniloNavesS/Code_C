#include <stdio.h>
#include <stdlib.h>

#define trocar(A, B) (A = aux, A = B, B = aux)

int partitionRSEDGEWICK(int *v, int l, int r)
{
 int i=l-1, j=r, pivot = v[r];

 while(1)
 {
 while(v[++i] < pivot);
 while(pivot < v[--j]) if(j==l) break;
 if(i>=j) break;
 exch(v[i], v[j]);
 }
 exch(v[i], v[r]);
 
 return i;

}

void quick_sort () {
    
}