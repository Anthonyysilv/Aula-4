//Problema 15
#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[100];
  int comprimento, i, palindromo = 1;

  printf("Digite uma palavra qualquer: ");
  scanf("%s", palavra);

  comprimento = strlen(palavra);

  for (i = 0; i < comprimento/2; i++)
    {
      if (palavra[i] != palavra[comprimento - 1 - i])
      {
        palindromo = 0;
          break;
      }
    }
  if (palindromo)
  {
    printf("A palavra %s é um palíndromo.", palavra);
  } else
  {
    printf("A palavra %s não é um palíndromo", palavra);
  }
  return 0;
}
//Problema 15 fim