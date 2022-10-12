#include <stdio.h>
#include <stdlib.h>
int main() 
{
   int *a=(int*)calloc(10*sizeof(int),0); 
   int *b=(int*)malloc(10*sizeof(int));
   
   free(a);
   free(b);
   return 0;
}