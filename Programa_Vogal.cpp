#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

	int main (){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[30], a,e,i,o,u;
	
	int tam;

	printf("\n D�gite seu nome\n");
	gets (nome);
	
	tam=strlen(nome);
	printf("\tAS VOGAIS DO SEU NOME S�O :");
	for(i=0;i<=tam-1;i++){
		
			if(nome[i]=='a'){
		
			printf("\n%c\n",nome[i]);
			} 
		
		 if(nome[i]=='e'){
			printf("\n%c\n",nome[i]);
			}  
	 
	  if(nome[i]=='i'){
			printf("\n%c\n",nome[i]);
			}		
		
			if(nome[i]=='o'){
			printf("\n%c\n",nome[i]);
			}		
		
			if(nome[i]=='u'){
			printf("\n%c\n",nome[i]);
			}
		}
	system("pause");
	}
	
