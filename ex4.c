#include <stdio.h>
	/*Faça um algoritmo que receba 3 notas e respectivos pesos, calcule e mostre a
	média ponderada dessas notas. */
int main(){

	float nota1, nota2, nota3, mediaponderada; //declaradas variaveis float
	int peso1 = 4; //variaveis inteiras
	int peso2 = 4;
	int peso3 = 2;
	//explica os pesos nas notas e concatena, conforme se mudar na variavel
	printf("A primeira nota tem peso %d, a segunda prova tem peso %d e a terceira tem peso %d.\n", peso1, peso2, peso3);

	printf("Digite sua primeira nota: \n");
	scanf("%f",&nota1);
	printf("Digite sua segunda nota: \n");
	scanf("%f",&nota2);
	printf("Digite sua terceira nota: \n");
	scanf("%f",&nota3);

	// calculo da media ponderada
	mediaponderada = ((nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3));
	
	printf("A media ponderada e: %.2f\n", mediaponderada);

	system("pause");

}
