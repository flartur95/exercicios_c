#include <stdio.h>
#include <stdlib.h>


/*  Faca um algoritmo que leia o nome e as idades de duas pessoas e mostre a
soma das idades destas pessoas.*/

int main(){
	//declaracao das variaveis inteiras
	int idade1, idade2, somadasidades;
	//declaracao das variaveis STRING e [capacidade]
	char nome1[30], nome2[30];

	printf("\nPara somar idades\n\n");
	printf("Digite um nome: \n"); 
	scanf("%s",&nome1); //guarda o nome do maluco pra concatenar depois
	printf("Digite a idade de %s: \n", nome1); //printa concatenando o nome do maluco
	scanf("%d",&idade1); //guarda a idade

	//proxima pessoa

	printf("Digite outro nome: \n");
	scanf("%s",&nome2);
	printf("Digite a idade de %s: \n", nome2);
	scanf("%d",&idade2);

	//declaração do cálculo
	somadasidades = (idade1 + idade2);
	//concatenando com os nomes e a soma das idades
	printf("\n**********************************************\n");
	printf("** A soma das idades de %s e %s e: %d  **\n", nome1, nome2, somadasidades);
	printf("**********************************************\n");

	system("pause"); //pausa para o programa não fechar automaticamente

	system ("cls"); //limpa a tela
	//agradece
	printf("  ******  *  *  *   *\n");
	printf("  ******  *  *   * *\n");
	printf("    **    ****    *\n");
	printf("    **    *  *   * *\n");
	printf("    **    *  *  *   *\n");
	system ("pause");

	
}