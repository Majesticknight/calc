#include <stdio.h>

int main() {

char operate;
double first, second;
printf("Enter an operator (+, -, *, /): ");
scanf("%c", &operate);
printf("Enter two operands: ");
scanf("%lf %lf", &first, &second);

switch (operate) {
case '+':
printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
break;
case '-':
printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
break;
case '*':
printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
break;
case '/':
printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
break;
default:
printf("Error! operator is not correct");
}
}