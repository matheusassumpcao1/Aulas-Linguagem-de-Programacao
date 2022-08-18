//Escreva um programa que lê três números e os imprime em ordem (ordem crescente).

#include <stdio.h>

int main(void) {
  int x,y,z;
  int aux[3];
  printf("Digite um numero. \n");
  scanf("%d", &x);
  printf("Digite um numero. \n");
  scanf("%d", &y);
  printf("Digite um numero. \n");
  scanf("%d", &z);

  //ordenando os numeros
  if(x>y && x>z){
    aux[2] = x;
    if (y>z){
      aux[1] = y;
      aux[0] = z;
    }
    else{
      aux[1] = z;
      aux[0] = y;
    }  
  }else if(y>x && y>z){
    aux[2] = y;
    if(x>z){
      aux[1] = x;
      aux[0] = z;
    }else{
      aux[1] = z;
      aux[0] = x;
    }
  }else{
    aux[2] = z;
    if(x>y){
      aux[1] = x;
      aux[0] = y;
    }else{
      aux[1] = y;
      aux[0] = x;
    }
  }
  //fim da ordenacao

  printf("\nVetor ordenado: \n");
  for(int i=0;i<3;i++){
    printf("[%d] ", aux[i]);
  }
  return 0;
}

