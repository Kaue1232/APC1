// Escreva	 um	 programa	 para	ler 2	valores considere que
// não serão informados	valores	iguais	e	escrever	o maior	deles//

#include <stdio.h>
int main() {

  int valor1;
  int valor2;

  printf("Entre com o primeiro valor:  ");
  int deu_certo = scanf("%i", &valor1);

  printf("Entre com o segundo valor:  ");
  deu_certo = scanf("%i", &valor2);

  // Verifica se os valores são iguais e solicita nova entrada caso sejam
  while (valor1 == valor2) {
    printf("Os valores não podem ser iguais. Digite um valor diferente do "
           "primeiro: ");
    scanf("%d", &valor2);
  }

  if (valor1 > valor2) {
    printf("O maior valor é: %d\n", valor1);
  } else {
    printf("O maior valor é: %d\n", valor2);
  }

  return 0;
}