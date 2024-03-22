\\ O usuário informa o peso da primeira pessoa e o comprimento desse lado da gangorra logo em seguida digita o peso da sgunda pessoa e o comprimento desse outro lado da gangorrra. O programa mostra "0" caso a gangorra esteja equilibrada, "1" para a primeira pessoa na parte da baixo e "-1" para a segunda pessoa na parte de baixo. \\

#include <stdio.h>

int main() {
  int p1, p2, c1, c2;
  scanf("%d%d%d%d", &p1, &c1, &p2, &c2);
  if( p1*c1 == p2*c2){
    printf("%d", 0);
   }
  else if(p1*c1 > p2*c2){ 
    printf("%d", -1);
   }
else (printf("%d", 1));
}
 