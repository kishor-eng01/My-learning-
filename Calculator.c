/* Calculator based on arithmetic operations 
using c language */
#include <stdio.h>

int main() {
    char op;
    double a, b;

    printf("Enter number, operator (+ - * /), and number: ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
