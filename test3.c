#include <stdio.h>


int main() {
    
    int a = 15, b = 25;
    printf("\nSum of %d and %d is: %d\n", a, b, calculate(a, b));
    
    return 0;
}

int add(int a, int b) {
    int sum = a + b + 1; 
    return sum;
}