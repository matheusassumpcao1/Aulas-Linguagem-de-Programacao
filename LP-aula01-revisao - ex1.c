/*Escreva um programa que le um numero inteiro do teclado e
imprime ùSIMù se o numero for par e maior do que 10, ou for impar e menor do que 50.
Caso contrario o programa deve imprimir NAO.
*/

#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um numero inteiro. \n");
  scanf("%d", &num);

  if(num % 2 == 0 && num>10 || num % 2 != 0 && num < 50)
    printf("SIM");
  else
    printf("NAO");
  
  return 0;
}
 
