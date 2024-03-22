\\ O usuário digita uma palavra e o programa mostra o tamanho da palavra. \\
#include <stdio.h>
#include <string.h>
int main() {
  
  char s[51];

  int tamanho;

  scanf("%s", s);

  tamanho = strlen(s);

  printf("%d\n", tamanho);
}