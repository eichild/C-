#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

	int main (){
	setlocale(LC_ALL,"Portuguese");
	char cadsenha[30], cadusuario[30];
	int i, cont=0;
	
	do{
		system("cls");
		printf("\nCadastro usúario:\n");
		printf("\nInforme o nome:");
		gets(cadusuario);
		
		printf("\nInforme senha:");
		gets(cadsenha);
		
			for(i<=0;i<=strlen(cadsenha)-1; i++){
			if(cadsenha[i]=='1'||cadsenha[i]=='2'||cadsenha[i]=='3'||cadsenha[i]=='4'||cadsenha[i]=='5'||cadsenha[i]=='6'||cadsenha[i]=='7'||cadsenha[i]=='8'||cadsenha[i]=='9'||cadsenha[i]=='0'){
			
				cont++;
			}
			}
			}
	while(cont<=0);
	printf("\n Cadastro de senha efetuado com sucesso\n");
	
	system("pause");
}

