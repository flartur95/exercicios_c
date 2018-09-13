#include <stdio.h>

/* Escreva um algoritmo que leia dois números e mostre o produto (multiplicação)
desses números.*/

int main(){
	//numero 1 e numero 2
	int n1, n2, resultado;

	printf("\n\nPara fazer uma multiplicacao\n\n");

	printf("Digite um numero: \n");
	scanf("%d",&n1);
	printf("Digite um numero: \n");
	scanf("%d",&n2);
	
	//declaração do cálculo
	resultado = (n1 * n2);
	//concatenando com o resultado.
	printf("O resultado dessa multiplicacao e: %d\n",resultado);

}