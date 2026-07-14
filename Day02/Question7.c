//Program to find product of digits of a number
#include <stdio.h>

int main() {
    int n, prod = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // for 0 input by user
    if (n == 0) {
        prod = 0;
    }
    
    while(n != 0) {
        rem = n % 10;
        prod *= rem;
        n /= 10;
    }
    
    printf("Product of digits of the given number: %d\n", prod);
    return 0;
}