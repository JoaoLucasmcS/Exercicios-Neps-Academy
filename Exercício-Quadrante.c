\\ O usuário digita o valor de x e o valor de y. O programa em que quadrante esse ponto cartesiano está. \\

#include <stdio.h>

int main() {
  int X, Y;

  scanf("%d%d", &X,&Y);

  if(X>0 && Y>0){
    printf("Q1");
  }
  if(X<0 && Y>0){
    printf("Q2");
  }
  if(X>0 && Y<0){
    printf("Q4");
  }
  if(X<0 && Y<0){
    printf("Q3");
  }
  if(X==0 || Y==0){
    printf("eixos");
  }


}