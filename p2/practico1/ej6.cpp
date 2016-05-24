#include <stdio.h>

/* Headers */
void ImprimirMatriz(int matriz[][10]);
void Cambio(int m, int n, int a[][10]);
/* END Headers */

/* Main */
int main(){
  int a[10][10] = {
    {5,8,9,7,1,6,8,9,4,8},
    {5,9,7,6,4,8,3,1,5,7},
    {8,7,9,3,2,4,8,7,5,6},
    {7,4,6,8,3,1,9,7,8,4},
    {9,6,8,4,5,7,1,3,2,9},
    {5,8,9,7,1,6,8,9,4,8},
    {5,9,7,6,4,8,3,1,5,7},
    {8,7,9,3,2,4,8,7,5,6},
    {7,4,6,8,3,1,9,7,8,4},
    {9,6,8,4,5,7,1,3,2,9}
  };
  int m, n;
  printf("MTRIZ: \n\n");
  ImprimirMatriz(a);
  printf("Vamos a intercambiar una fila por otra (la primer fila es 0)\n");
  printf("Ingrese la primer fila: ");
  scanf("%d", &m);
  printf("Ingrese la segunda fila: ");
  scanf("%d", &n);
  Cambio(m, n, a);
  printf("\n");
  printf("MTRIZ RESULTANTE: \n\n");
  ImprimirMatriz(a);
  return 0;
}
/* END Main */

/* Functions */
void ImprimirMatriz(int matriz[][10]){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      printf("%d ", (matriz[i][j]));
    }
    printf("\n");
  }
  printf("\n");
}

void Cambio(int m, int n, int a[][10]){
  int temp;
  for(int i = 0; i < 10; i++){
    temp = a[m][i];
    a[m][i] = a[n][i];
    a[n][i] = temp;
  }
}
/* END Functions */
