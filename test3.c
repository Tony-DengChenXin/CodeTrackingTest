#include <stdio.h>

int calculate(int num1, int num2) {
    return num1 + num2;
}

int main() {
    
    int a = 15, b = 25;
    printf("\nSum of %d and %d is: %d\n", a, b, calculate(a, b));
    
    return 0;
}