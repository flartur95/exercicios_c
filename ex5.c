#include <stdio.h>
/*Leia uma quantidade de chuva dada em polegadas e imprima o equivalente em
milimetros (25.4 mm = 1 polegada).*/

int main(){

	int chuvapolegada;
	float chuvamilimetro;
	
	printf("Insira a quantidade de chuva em polegadas: \n");
	scanf("%d",&chuvapolegada);
	chuvamilimetro = chuvapolegada * 25.4; // calculo para conversao
	printf("A quantidade em milimetros e: %.2f\n",chuvamilimetro); //devolve a conversao
	
	system("pause");

}
