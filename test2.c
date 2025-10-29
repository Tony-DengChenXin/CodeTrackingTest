#include <stdio.h>
#include <math.h> 


int calculate(double num1, double num2, char operation, int precision) {
    double result;
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0.0) result = num1 / num2;
            else result = 0.0; 
            break;
        case '^': 
            result = pow(num1, num2);
            break;
        default:
            result = num1 + num2;
    }
    
    
    double factor = pow(10, precision);
    return (int)(result * factor + 0.5); /
}

int main() {
    double a = 15.5, b = 3.0;
    
    printf("Sum (rounded): %d\n", calculate(a, b, '+', 0));
    printf("Division (2 decimals): %d\n", calculate(a, b, '/', 2));
    printf("Power (1 decimal): %d\n", calculate(a, b, '^', 1));
    
    return 0;
}