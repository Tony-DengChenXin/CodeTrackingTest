#include <stdio.h>


int calculate(int num1, int num2, char operation) {
    switch(operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if(num2 != 0) return num1 / num2;
            else return 0; 
        default:
            return num1 + num2; 
    }
}

int main() {
    int a = 15, b = 25;
    
    
    printf("\nSum of %d and %d is: %d\n", a, b, calculate(a, b, '+'));
    printf("Difference of %d and %d is: %d\n", a, b, calculate(a, b, '-'));
    printf("Product of %d and %d is: %d\n", a, b, calculate(a, b, '*'));
    
    return 0;
}