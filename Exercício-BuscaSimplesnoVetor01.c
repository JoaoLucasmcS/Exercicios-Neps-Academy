\\ O usuário digita uma lisra de núumeros depois digita um número a qual ele queira saber se esta dentro dessa lista, o programa imprime "SIM" se o número estiver na lista e "NÃO" se o número não estiver. \\

  #include <stdio.h>

  int main() {
    int x, i;
    int v[10];

    for(i=0; i<10; i++){
      scanf("%d", &v[i]);
    }
    
    scanf("%d", &x);

    int encontrado = 0;
    
    for(i=0; i<10; i++){
      if(v[i] == x){
        encontrado = 1;
        break;
       }
     }

    if(encontrado == 1){
      printf("SIM");
    }
    else{
      printf("NAO");
    }    
}