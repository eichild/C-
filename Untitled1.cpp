#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
	int main(){
	setlocale(LC_ALL, "portuguese");
	
	int tam,i;
	int vet[5];
	for(i=1;i<=5;i++){
		printf("\nDigite um número\n");
		scanf("%i",&vet[5]);
	}
	for(i=1;i<=5;i++){
		printf("\n%i",&vet[5]);
	}
system("pause");
}

