#include <stdio.h>  
   
int main() {  
    int c; 
    printf("Even numbers between 1 to 100\n");  
 
    c = 2;
    while (c <= 100) {  
        printf("%d ", c);

        c = c + 2;  
    }  
   
    return 0;  
} 
