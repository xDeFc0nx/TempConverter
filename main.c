#include <stdio.h>

int calc;
float fahr, celsius, numb, result;

int main() {
  printf("\nIs this C or F \n");
  scanf("%c", &calc);

  printf("\nProvide the number \n");
  scanf("%f", &numb);

  if (calc == 'C') {

    result = (numb * 9.0 / 5.0) + 32.0;

    printf("%6.1f %3.0f\n", result, numb);
  }
  if (calc == 'F') {
    result = (numb - 32.0) * 5.0 / 9.0;

    printf("%6.1f %3.0f\n", result, numb);
  }
  return 0;
}
