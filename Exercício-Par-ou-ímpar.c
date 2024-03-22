\\ O usuário digita a quantidade de dedos que a primeira pessoa colocou no jogo e depois a quantidade de dedos da segunda. O programa exibe "Número inválido" para qualquer número menor que 0 ou maior que 10, "Bino" para se o par ganhar e "Cino" caso o ímpar ganhe. \\

#include <stdio.h>

int main() {
 int dedoc, dedob, soma;
  scanf("%d", &dedoc);
  if(dedoc <0 || dedoc > 10){
    printf("Número inválido");
  }
  scanf("%d", &dedob);
  if(dedob <0 || dedob > 10){
    printf("Número inválido");
  }
  soma = dedoc+dedob;
  if(soma % 2 == 0){
    printf("Bino");
  }
  if(soma % 2 == 1){
    printf("Cino");
  }
  }