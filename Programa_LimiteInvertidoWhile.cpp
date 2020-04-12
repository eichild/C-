#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	
	printf("\nInforme o valor superior: ");
	scanf("%i", &num1);
	
	printf("\nInforme o valor inferior: ");
	scanf("%i", &num2);
	
	while(num1>=num2){
		printf("\n%i\n", num1);
		num1--;
	}
	system("pause");
	
	
	
	
	
	
	
	
	
}
