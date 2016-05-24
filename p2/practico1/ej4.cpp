#include <stdio.h>
#include <string.h>

/* Headers */
bool EsPalindrome(char *frase);
/* END Headers */

/* Main */
int main(){
  char *frase, res;
  frase = new char[100];
  printf("Ingrese la frase: ");
  fgets(frase, 100, stdin);
  res = (EsPalindrome(frase) == true)? 's' : 'n';
  printf("-La frase es palindrome? : %c\n", res);
  delete [] frase;
  return 0;
}
/* END Main */

/* Functions */
bool EsPalindrome(char *frase){
  int largo = strlen(frase) - 2;
  for(int i = 0; i <= largo/2; i++){
    if(frase[i] != frase[largo]) return false;
    else largo--;
  }
  return true;
}
/* END Functions */
