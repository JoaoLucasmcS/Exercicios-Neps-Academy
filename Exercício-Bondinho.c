\\ O usuário digita quantos monitore estão no bondinho e depois quantos alunos estão no bondinho, onde o limite máximo de pessoas no bondinho é 50. O programa mostra "S" quando o bondinho consegue levar todos e "N" caso contrário \\

#include <stdio.h>

int main() {
  int a, m;
  scanf("%d%d", &a, &m);

  if(a+m<=50){
    printf("S");
  }
  else(printf("N"));
}
