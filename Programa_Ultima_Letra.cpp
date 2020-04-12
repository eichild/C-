#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	system("color 3");
	char nome [30] ;
	int tam;
	printf("\nDígite seu nome\n");
	gets(nome);	
	tam=strlen(nome);
	printf("\nA primeira letra do seu nome é = %c\n", nome[0] );
	printf("\nA segunda letra do seu nome é = %c\n", nome[1] );
	printf("\nA terceira letra do seu nome é = %c\n", nome[2] );
	printf("\nSeu nome tem %i letras",tam);
	system("pause");
		return(0);
	
}
