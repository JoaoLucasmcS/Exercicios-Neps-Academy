\\ O usuário digita dois números e o programa mostra todos os números entre esss dois números, ou seja, o intervalo entre eles. \\

#include <stdio.h>

int main() {
  int A, B;
  scanf("%d", &A);
  scanf("%d", &B);

  if(B<A){
    for(int i=B; i<=A; i++){
      printf("%d ", i);
    }
  }

  for(int i=A; i<=B; i++){
    printf("%d ", i); 
  } 
  
}