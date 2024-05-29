// Escreva	 um	 programa	 para	 ler	 o	 ano	 de
// nascimento	 de	 uma	 pessoa	 e	escrever	 uma mensagem
// que	 diga	 se	 ela	 poderá	 ou	 não	 votar
// este	 ano	não	é	necessário	considerar	o	mês
// em	que	ela	nasceu//
#include <stdio.h>
int main() {

  int ano_nascimento;
  printf("Entre com o ano de nascimento:  ");
  int deu_certo = scanf("%i", &ano_nascimento);

  if (ano_nascimento <= 2006) {
    printf("Você pode votar este ano!\n");

  } else {
    printf("Você não pode votar este ano!\n");
  }
  return 0;
}