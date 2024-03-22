\\ O  usuário digita a quantidade de vezes que o garçom vai entregar as bandejas depois digita a quantidade de latas e copos para cada uma dessas viagens. se a quantidade de latas for maior que a quantidade de copos o garçomderruba a bandeja quebrando todos os copos. O programa mostra todos os copos quebrados durante todas as viagens. \\

#include <stdio.h>

int main() {
  int n, l, c, i;
  int q = 0;
  scanf("%d", &n);
  
  
  for(i=0; i<n; i++){
   scanf("%d%d", &l, &c);
    if(l>c){ 
     q = q+c;  
    }
   }
  printf("%d", q);
 }