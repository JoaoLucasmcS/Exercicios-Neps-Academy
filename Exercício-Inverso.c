\\ O usuário digita uma sequência de números e o programa mostra o inverso dessa sequência. \\

#include <stdio.h>

int main() {
  int  v[10], i;

  for(i=0;i<10;i++){
    scanf("%d", &v[i]);
  }
  for(i=9;i>=0;i--){
    printf("%d\n", v[i]);
  }
}