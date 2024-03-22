\\ O usuário digita a primeira e a segunda nota do aluno. O programa calcula a média e mostra se o aluno foi aprovado (media>7), reprovado (media<3) ou se ele está na final.\\

#include <stdio.h>

int main() {
  float N1, N2, media;

  scanf("%f", &N1);
  scanf("%f", &N2);

  media = ((N1*2)+(N2*3))/5;

  if(media>=7){
    printf("Aprovado");
  }
  else if(media<3){
    printf("Reprovado");
  }
  else{
    printf("Final");
  }
  

}