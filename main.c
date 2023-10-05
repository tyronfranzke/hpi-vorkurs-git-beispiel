#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Gib eine positive Ganzzahl ein.");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      break;
    }
  }

  printf("Jetzt kommt das Ergebnis.");

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d ist eine Primzahl.", n);
  else
    printf("%d ist keine Primzahl.", n);

  return 0;
}