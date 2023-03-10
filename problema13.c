//problema 13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome[100];
  int QuantidadeLe;
  printf("Digite seu nome: ");
  scanf("%s", nome);
  QuantidadeLe = strlen(nome);
  printf("A quantidade de letras que seu nome possui: %i", QuantidadeLe);
  return 0;
}
//Problema 13 fim