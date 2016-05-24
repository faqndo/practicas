#include <stdio.h>

/* Headers */
void primos(int a, int b);
/* END Headers */

/* Main */
int main(){
  int a, b;
  printf("Ingrese a:");
  scanf("%d", &a);
  printf("Ingrese b:");
  scanf("%d", &b);
  printf("Los numeros enteros entre %d y %d son: \n", a, b);
  primos(a,b);
  printf("\n");
}
/* END Main */

/* Functions */
void primos(int a, int b){
  for(int i = a; i < b + 1; i++){
    if(((i == 2) || (i == 3) || (i == 5) || (i == 7)) ||
      (((i % 2) != 0) && ((i % 3) != 0) && ((i % 5) != 0) && ((i % 7) != 0))){
      printf("%d \n", i);
    }
  }
}
/* END Functions */
