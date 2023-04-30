// C Program to Find Power of a Number using While loop
#include <stdio.h>

// It's the driver function
int main() {
    int b, x;
    long long r = 1;
    
    
    printf("Input Base Number:: ");
    scanf("%d", &b);

    printf("\nInput Exponent Number:: ");
    scanf("%d", &x);

    
    while (x--) {
        r *= b;
    }

    
    printf("\n\nOUTPUT:: %d^%d = %lld\n", b, x, r);
    return 0;
}