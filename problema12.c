//Problema 12
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome[50], sobrenome[50];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Digite seu sobrenome: ");
  scanf("%s", sobrenome);
  strcat(nome, sobrenome);
  printf("O nome e sobrenome digitado sao: %s", nome);
  return 0;
}
//Problema 12 fim
