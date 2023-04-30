// C Program To Check Whether a Number is Divisible by 5 and 11
#include <stdio.h>
int main(){
    int num;
    
    // Asking for Input
    printf("Enter an number: ");
    scanf("%d", &num);
    
    if ((num % 5 == 0) && (num % 11 == 0)){
        printf("%d is divisible by both 5 and 11.", num);
    }
    else{
        printf("%d is not divisible by both 5 and 11.", num);
    }
    return 0;
}