#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char verbo[21];
  char pronomes[6][5] = {"EU", "TU", "ELE", "NÓS", "VÓS", "ELES"};
  char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};

  printf("Entre com um verbo terminado em AR: ");
  int deu_certo = scanf("%s", verbo);

  int tamanho = strlen(verbo);
  int ultima_letra = tamanho - 1;
  int penultima_letra = tamanho - 2;

  for (int i = 0; i < tamanho; i++) {
    verbo[i] = toupper(verbo[i]); // converte para MAIUSCULO
  }

  if (verbo[penultima_letra] == 'A' && verbo[ultima_letra] == 'R') {
    printf("Presente do verbo %s\n", verbo);
    char radical[21];
    strcpy(radical, verbo);
    radical[penultima_letra] = '\0';
    for (int i = 0; i < 6; i++) {
      printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
    }
  } else {
    printf("O verbo %s nao termina em AR!\n", verbo);
  }

  return 0;
}