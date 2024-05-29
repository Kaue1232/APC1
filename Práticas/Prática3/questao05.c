// Faça um programa em C que leia um ano e verifique se ele é bissexto (é
// múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400).//

#include <stdio.h>
int main() {

  int ano;
  printf("Entre com um ano: ");
  int deu_certo = scanf("%i", &ano);
  if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    printf("%d é um ano bissexto.\n", ano);
  } else {
    printf("%d não é um ano bissexto.\n", ano);
  }

  return 0;
}