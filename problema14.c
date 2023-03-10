//Problema 14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nomeP1[100], nomeP2[100], nomeP3[100];
  printf("Digite o primeiro nome: ");
  fgets(nomeP1, 100, stdin);
  printf("Digite o segundo nome: ");
  fgets(nomeP2, 100, stdin);
  printf("Digite o terceiro nome: ");
  fgets(nomeP3, 100, stdin);

  nomeP1[strcspn(nomeP1, "\n")] = 0;
  nomeP2[strcspn(nomeP2, "\n")] = 0;
  nomeP3[strcspn(nomeP3, "\n")] = 0;

  if (strcmp(nomeP1, nomeP2) > 0) {
    char temp[100];
    strcpy(temp, nomeP1);
    strcpy(nomeP1, nomeP2);
    strcpy(nomeP2, temp);
  }
  if (strcmp(nomeP2, nomeP3) > 0) {
    char temp[100];
    strcpy(temp, nomeP2);
    strcpy(nomeP2, nomeP3);
    strcpy(nomeP3, temp);
  }
  if (strcmp(nomeP1, nomeP2) > 0) {
    char temp[100];
    strcpy(temp, nomeP1);
    strcpy(nomeP1, nomeP2);
    strcpy(nomeP2, temp);
  }

  printf("Nomes em ordem alfabética: %s, %s, %s\n", nomeP1, nomeP2, nomeP3);

  return 0;
}
//Problema 14 fim