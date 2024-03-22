\\ O jogo flíper simula a queda de uma bolinha em uma plataforma onde dependendo das disposiçoes das portas a bola pode cair em três lugares diferentes A,B e C. O programa permite ao usuário mudar a abertura das portas para a posiçao 1 ou 0. E logo em seguida mostra onde a bolinha caiu. \\

#include <stdio.h>

int main() {
  int p, r;

  scanf("%d%d", &p, &r);
  if(p == 1 && r == 0){
    printf("B");
  }
  if(p == 1 && r == 1){
    printf("A");
  }
  if(p == 0){
    printf("C");
  }
  
}