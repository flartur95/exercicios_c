#include <stdio.h> //inclui standard input output header

/*Faca um algoritmo que calcule a media de 3 numeros e apresente o resultado
no final.*/

int main(){
	//n1 = numero 1, n2 = numero 2.
	int n1, n2, n3;

	printf("Calcule a media de 3 numeros \n"); // titulo
	printf("Insira o primeiro numero: \n"); //pede ao usuario o primeiro numero
	scanf("%d",&n1); // le o numero e grava no n1
	printf("Insira o segundo numero: \n");
	scanf("%d",&n2);
	printf("Insira o terceiro numero: \n");
	scanf("%d",&n3);

	int media = (n1 + n2 + n3) / 3; //soma os 3 numeros e divide por 3, que dara a media

	printf("A media dos 3 numeros inseridos e: %d \n", media); //printa na tela concatenando com a media

	system("pause"); //para o programa não fechar automaticamente
}