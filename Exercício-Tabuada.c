\\ O usuário digita um número e o programa mostra a tabuada de multiplicação desse número até 10. \\

#include <stdio.h>

int main() {
  int x, i;
  scanf("%d", &x);

  for(i=1; i<=10; i++){
  printf("%d * %d = %d\n", x, i, x*i);
}
}