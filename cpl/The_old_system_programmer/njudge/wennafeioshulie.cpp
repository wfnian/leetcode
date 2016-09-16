#include <stdio.h>
int main(void)
{  
    int i;
    int fib[20] = {1, 1};   
    for(i = 2; i < 20; i++)    
        fib[i] = fib[i - 1] + fib[i - 2];
    for(i = 0; i < 20; i++){ 
        printf("%6d", fib[i]);
        if((i + 1) % 5 == 0)  
            printf("\n");  
     }
    return 0;
}


