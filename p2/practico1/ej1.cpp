#include <stdio.h>

/* Headers */
int PromClase(int cal1, int cal2, int cal3, int cal4, int cal5);
/* END Headers */

/* Main */
int main(){
  int notas[4], nota;
  printf("Ingrese las notas separadas por un espacio e ingrese enter para finalizar:\n");
  scanf("%d %d %d %d %d", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4]);
  for (int i = 0; i < 5; i++) {
    printf("calificacion %d: %d \n", i+1, notas[i]);
  }
  nota = PromClase(notas[0],notas[1],notas[2],notas[3],notas[4]);
  printf("%d\n", nota);
  return 0;
}
/* END Main */

/* Functions */
int PromClase(int cal1, int cal2, int cal3, int cal4, int cal5){
  int promedio = 0, min = 0, suma = 0;
  int cals[] = {cal1, cal2, cal3, cal4, cal5};
  //encontrar el minimo y sumar todos los elementos
  for (int i = 0; i < 5; i++) {
    if(cals[i] < cals[min]){
      min = i;
    }
    suma += cals[i];
  }
  //calcular promedio sacando el minimo
  promedio = (suma - cals[min]) / 4;
  return promedio;
}
/* END Functions */
