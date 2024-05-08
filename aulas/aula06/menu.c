#include <stdio.h> 

int main() {
  char opcao;
  
  printf(" MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar\n");
  printf("3 - listar recados\n");
  printf("4 - ligacoes feitas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opcao => ");
  int deu_certo= scanf("%c", &opcao);

 switch (opcao) {
   case '1' : printf("Seu saldo eh R$ 10.00\n"); break;
   case '2': {
     float valor;
     printf("Entre com o valor da recarga: "),
       deu_certo = scanf("%f", &valor);
     break; 
   }
   case '3': printf("Voce nao tem recados\n"); break;
   case '4': 
     printf("61888888888\n");
     printf("61999999999\n");
     printf("61777777777\n");
     printf("61666666666\n");
   break;
   case '0': printf("Até logo!\n"); break;
   default: printf("Opcao invalida. Tente novamente!\n");
   
 }
  return 0;
}