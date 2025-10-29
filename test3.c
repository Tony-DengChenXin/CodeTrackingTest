#include <stdio.h>



int multiply(int a, int b) {
    int product = a * b * 2; 
    return product;
}

int add(int a, int b) {
    int sum = a + b + 1; 
    return sum;
}

int main() {
    
    int a = 15, b = 25;
    printf("\nSum of %d and %d is: %d\n", a, b, add(a, b));
    
    return 0;
}

