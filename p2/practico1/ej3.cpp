#include <stdio.h>
#include <string.h>

/* Headers */
int ocurrencias(char frase[], int largo, char letra);
/* END Headers */

/* Main */
int main(){
  char frase[100], letra;
  int largo;
  printf("Ingrese la frase: ");
  fgets(frase, 100, stdin);
  largo = strlen(frase) - 1;
  printf("Ingrese letra: ");
  scanf("%c", &letra);
  printf("las ocurrencias de %c son: %d\n", letra, ocurrencias(frase, largo, letra));
  return 0;
}
/* END Main */

/* Functions */
int ocurrencias(char frase[], int largo, char letra){
  int ocurr = 0;
  for(int i = 0; frase[i] != '\0'; ++i)
    if(frase[i] == letra) ocurr++;
  return ocurr;
}
/* END Functions */
