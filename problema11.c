//Problema 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>>

int main(void) {
  char name[50], nameF[50];
  printf("Digite seu nome: ");
  scanf("%s", name);
  strcpy(nameF, name);
  printf("O nome digitado foi: %s", nameF);
  return 0;
}
//Problema 11 fim