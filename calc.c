#include <stdio.h>

double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default:  return 0;
    }
}

int main() {
    double x = 10.0, y = 5.0;
    char op = '*';

    double result = calculate(x, y, op);
    printf("Result: %.2f\n", result);

    return 0;
}
