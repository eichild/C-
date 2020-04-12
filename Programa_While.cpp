#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system ("color 43");
	int senha=10, entrada, tentativa=1;
	
	printf("\n Digíte um número\n");
	scanf("%i,&entrada");
	
	while(tentativa<=3){
		if(entrada !=senha){
			printf("\nSenha incorreta\n");
			printf("\n %i tentativas", tentativa);
		tentativa++;
		printf("digite um número\n");
		scanf("%i",&entrada);	
		
		else{
			printf("\nSenha incorreta\n");
		n1++;	
		}
			
			
		}
	return(0);
}
