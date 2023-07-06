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

int anagramapalindromo(char* palavra){
  int contador[50];
  int i;
  int impar = 0;

  for(i =  0; i < strlen(palavra); i++){
    contador[palavra[i] - 'a']++;
  }
  for(i = 0; i < 50; i++){
    if(contador[i] % 2 != 0){
      impar++;
    }
  }
  return 0;
}


#define TAM 50
int main (void){
  char palavra[TAM];
  int resposta = anagramapalindromo(palavra);

  printf("Input: ");
  sget(palavra, TAM);

  if(resposta){
    printf("Output: true", palavra);
  } else {
    printf("Output: false", palavra);
  }
  

  return 0;
}