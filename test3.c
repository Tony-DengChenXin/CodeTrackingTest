#include <stdio.h>

int add(int num1, int num3) {
    return num1 + num3;
}

int main() {
    
    int a = 15, b = 25;
    printf("\nSum of %d and %d is: %d\n", a, b, calculate(a, b));
    
    return 0;
}