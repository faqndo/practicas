#include <stdio.h>

/* Headers */
int *crear(int m, int n);
void asignar(int *m[], int x, int i, int j);
int valor(int *m[], int i, int j);
void transpuesta(int *m[]);
/* END Headers */

int fila, columna;

/* Main */
int main(){
  printf("Ingrese m: ");
  scanf("%d", &fila);
  printf("Ingrese n: ");
  scanf("%d", &columna);
  int *matriz = crear(fila, columna);
  delete [] matriz;
  return 0;
}
/* END Main */

/* Functions */
int *crear(int m, int n){
  return new int[m*n];
}

void asignar(int *m[], int x, int i, int j){
  int contador = 0, k = 0;
  while( i != contador){
    k = k + columna;
    contador++;
  }
  m[k+(j-1)] = x;
}

int valor(int *m[], int i, int j){
  return 0;
}

void  transpuesta(int *m[]){

}
/* END Functions*/
