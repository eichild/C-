#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	system("color 3");
	char nome [30]; //Vetor de caracteres
	printf("\nDígite seu nome\n");
	gets(nome);	//Pega caracteres separa e coloca em sua devida casa. 
	printf("\nA primeira letra do seu nome é = %c\n", nome[1]);
	system("pause");
		return(0);
	
}
