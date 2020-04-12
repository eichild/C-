#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
	
	
	int main(){
		
	setlocale(LC_ALL, "portuguese");
	int num1, num2, i;
	num1=0;
	num2=0;
	
	printf("\nInforme o valor superior: ");
	scanf("%i", &num1);
	
	printf("\nInforme o valor inferior: ");
	scanf("%i", &num2);
	
	for(i=num1;i>=num2; i--){
		printf("\n%i\n", i);	
		
		
	}
	system("pause");	
		
		
		
		
		
		
		
		
		
		
	}
