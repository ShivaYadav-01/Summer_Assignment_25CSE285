//program to print GCD of two given numbers
#include <stdio.h>

int main() 
{
    int num1, num2, r;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }

    printf("GCD = %d", num1);

    return 0;
}