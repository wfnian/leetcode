#include <stdio.h> 
int Print(char *arr[], int len); 
int main() 
{ 
   char *pArray[] = {"How","are","you"}; 
   int num = sizeof(pArray) / sizeof(char); 
   printf("Total string numbers = %d\n", num); 
   Print(pArray, num); 
   return 0; 
} 
int Print(char *arr[], int len) 
{ 
   int i; 
   for(i = 0; i < len; i++) 
   { 
      printf("%s ", arr[i]); 
   } 
   printf("\n"); 
}
