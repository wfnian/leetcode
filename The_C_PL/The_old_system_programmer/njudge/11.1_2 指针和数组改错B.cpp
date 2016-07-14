#include <stdio.h> 
void InputArray(int *pa, int n); 
void OutputArray(int *pa, int n); 
int main() { 
   int a[5]; 
   printf("Input five numbers:"); 
   InputArray(a, 5); 
   OutputArray(a, 5); 
   return 0; 
} 
void InputArray(int *pa, int n) { 
   for(; *pa < *pa + n; pa++) 
   { 
      scanf("%d",pa); 
   } 
} 
void OutputArray(int *pa, int n) { 
   for(; *pa < *pa + n; pa++) 
   { 
      printf("%4d", *pa); 
   } 
   printf("\n"); 
} 
