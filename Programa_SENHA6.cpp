#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

	int main (){
	setlocale(LC_ALL,"Portuguese");
	
	char  senha[30];
	int tam;
	do{
		printf("\nCadastro de senha com no minimo  1 digitos\n");
		gets(senha);
		tam=strlen(senha);
	}
	while(tam<=1);
	printf("\nCadastro de senha efetuado\n");
	system("pause");
}


	
	
	
	
	
	
	
