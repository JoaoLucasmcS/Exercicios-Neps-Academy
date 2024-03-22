#include <stdio.h>

int fib(int p){

  if(p == 0){
    return 1;
  }

  if(p == 1){
    return 1;
  }

  return fib(p-1) + fib(p-2);
}


int main() {
  int n;
  scanf("%d", &n);
  printf("%d", fib(n));
}