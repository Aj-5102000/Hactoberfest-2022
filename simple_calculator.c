#include <stdio.h>

int main() {

  char opr;
  double n1, n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &opr);
  printf("Enter two operands: ");
  scanf("%lf %lf", &n1, &n2);

  switch (opr) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
      break;
    default:
      printf("Incorrect Operator!");
  }
  return 0;
}
