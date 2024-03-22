\\ O usuário digita o lado deum quadrado e o programa mostra sua área. \\

#include <stdio.h>
#include <math.h>

int main() {
  int lado;

  scanf("%d", &lado);
  printf("%.2d", lado*lado);
  
}