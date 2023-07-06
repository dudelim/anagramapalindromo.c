#include <stdio.h>
#include <string.h>

int sget(char *vetor, int tam) {
  fflush(stdin);
  if (fgets(vetor, tam, stdin)) {
    int i;
    for (i = 0; vetor[i] != '\n' && vetor[i]; ++i)
      ;
    vetor[i] = '\0';
  }
}

int anagramapalindromo(char *palavra) {
  int contador[50] = {0};
  int i;
  int impar = 0;
  int resposta;

  for (i = 0; i < strlen(palavra); i++) {
    if (palavra[i] >= 'a' && palavra[i] <= 'z') {
      contador[palavra[i] - 'a']++;
    }
  }

  for (i = 0; i < 50; i++) {
    if (contador[i] % 2 != 0) {
      impar++;
    }
  }
  if (impar > 1) {
    resposta = 0;
  } else {
    resposta = 1;
  }

  return resposta;
}

#define TAM 50
int main(void) {
  char palavra[TAM];

  printf("Input: ");
  sget(palavra, TAM);

  int resposta = anagramapalindromo(palavra);

  if (resposta == 0) {
    printf("Output: false");
  } else if (resposta == 1) {
    printf("Output: true");
  }
  return 0;
}
