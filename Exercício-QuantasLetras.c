\\ Nesse exercício o usuário digita uma palavra em seguida uma letra, o programa mostra quantas vezes essa letra se repete na palavra. \\

#include <stdio.h>
#include <string.h>

int main() {

  char s[51];
  char c;

  scanf("%s %c", s, &c);

  int count = 0;

  for(int i=0; i<strlen(s); i++){
    if(s[i] == c ){
      count++;
    }
  }

  printf("%d", count);
}