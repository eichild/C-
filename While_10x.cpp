#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<time.h>

	int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i, x;
	i=1;
	 
	V:printf("\nINFORMA UM N�MERO NA HUMILDADE AI TIO NA MORAL MEMO AJUDA A QUEBRADA IRM�O TAMO JUNTO � N�S.\n");
	scanf("%i", &x);
	
	while(i<=10){
		printf("\n%i\n", x); 
		i++;
		goto V;	
	}
	
}
