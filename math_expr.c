#include <stdio.h>

int main() {

  const char ADD = '+';
  const char SUBTRACT = '-';
  const char MULTIPLY = '*';
  const char DIVIDE = '/';

  float a, b, result;
  char op;

  printf("Enter a math expression: \n");
  scanf("%f %s %f", &a, &op, &b);

  switch (op) {
    case ADD:
      result = a + b;
      break;
    case SUBTRACT:
      result = a - b;
      break;
    case MULTIPLY:
      result = a * b;
      break;
    case DIVIDE:
      result = a / b;
      break;
    default:
      printf("error: invalid operator provided\n");
      return 1;
  }

  printf("result: %0.2f\n", result);

  return 0;
}
