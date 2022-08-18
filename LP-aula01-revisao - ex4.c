/*
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa.  O programa deve imprimir o prato solicitado.
O programa deve terminar quando for escolhido a quinta opção.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao=10;
	
	printf("\nBem vindo!\n");
	
	while(opcao != 0){
		printf("Digite o numero do prato desejado.\n\n1-Pizza\n2-Macarronada\n3-Carne\n4-Sobremesa\n\n0-Sair do programa.\n\n");
	    scanf("%d",&opcao);
	
	    switch (opcao){
	     
	      case 1:
	      printf("\nO prato escolhido foi a pizza.\n\n");
	      break;
	  
	      case 2:
	      printf("\nO prato escolhido foi a macarronada.\n\n");
	      break;
	  
	      case 3:
	      printf("\nO prato escolhido foi a Carne.\n\n");
	      break;
	  
	      case 4:
	      printf("\nO prato escolhido foi a sobremesa.\n\n");
	      break;
	
	      case 0:
	      printf("\nEncerrando o programa...\n");
	      break;
	      
	      default:
	      printf("\nOpção inválida.\n\n");
	      }
	  }
	  return 0;
	}
