#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
	int main(){
	setlocale(LC_ALL, "portuguese");
	
	int  i; 
	int vet[4];
	int vetb[4];
	int vetc[4];
	
	for (i=0;i<=4;i++){
		printf("\nDigite o valor: ");
		scanf("%i", & vet[i]);
		
	}
	
	for (i=0;i<=4;i++){
		printf("\nDigite o valor: ");
		scanf("%i", & vetb[i]);
	}
	
	for (i=0;i<=4;i++){
		vetc[i]=vet[i]+vetb[i];
		printf("\nA soma o %iº vetor = %i \n", i+1, vetc[i]);
	}
	
	system("pause");
	
	}
