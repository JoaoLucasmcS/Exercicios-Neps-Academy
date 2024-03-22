\\ O usuário digita uma lista de 10 números e depois digita qual número quer procurar dentro dessa lista, o programa informa quantas vezes o número se repete dentro da lista. \\

#include <stdio.h>

int main() {
  int v[10], x, i;

  for(i=0;i<10;i++){
    scanf("%d", &v[i]);
  }
  scanf("%d", &x);

  int apareceu = 0;
  
  for(i=0;i<10;i++){
    if( v[i] == x){
      apareceu++;
     }  
  }
  if(apareceu == 0){
    printf("Mia x");
  }
  else{
    printf("%d\n", apareceu);
      for(i=0;i<10;i++){
       if(v[i] == x){
        printf("%d ", i);
      } 
     }    
  }
}
