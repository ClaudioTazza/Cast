#include <stdio.h>

int main(){
  double num;

  printf("Inserisci il numero a virgola mobile desiderato\n? ");
  scanf("%lf", &num);

  printf("Numero inserito: %lf\n", num);
  printf("Numero inserito intero: %d\n", (int)num);

  return 0;
}
