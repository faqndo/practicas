#include <stdio.h>

/* Headers */
void ordenado(int nums[]);
/* END Headers */

/* Main */
int main(){
  int largo;
  printf("Cuantos numeros va a ingresar?: ");
  scanf("%d", &largo);
  int a[largo];
  printf("Ingrese los numeros: \n");
  for(int i = 0; i <= largo; i++) scanf("%d", &a[i]);
  printf("Los numeros en orden ascendente de los numeros: ");
  ordenado(a);
  printf("\n");
  return 0;
}
/* END Main */

/* Functions */
void ordenado(int nums[]){
  int n = sizeof(nums) / sizeof(nums[0]), j, temp;
  for(int i = 1; i <= n; i++){
    j = i;
    while((j >= 1) && (nums[j] < nums[j - 1])){
      temp = nums[j];
      nums[j] = nums[j-1];
      nums[j-1] = temp;
      j--;
    }
  }
  for(int i = 0; i <= n; i++) printf("%d ", nums[i]);
}
/* END Functions */
