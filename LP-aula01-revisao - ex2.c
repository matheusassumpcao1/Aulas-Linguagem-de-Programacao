//Escreva um programa que l� tr�s n�meros e imprime o maior deles.

#include <stdio.h>
#include <locale.h>
  
void verificarMaior(int a, int b, int c);

int main(void) {
  setlocale(LC_ALL, "Portuguese_Brazil");
  int x,y,z;
  printf("Digite um numero. \n");
  scanf("%d", &x);
  printf("Digite um numero. \n");
  scanf("%d", &y);
  printf("Digite um numero. \n");
  scanf("%d", &z);
  verificarMaior(x,y,z);

  return 0;
}

void verificarMaior(int a, int b, int c){
  if (a>b && a>c)
    printf("\n%d � o maior numero.", a);
  else if(b>a && b>c)
    printf("\n%d � o maior numero.", b);
  else
    printf("\n%d � o maior numero.", c);
}

