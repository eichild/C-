#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	i=1; 
	system("color 2");
	
	
	do{
		printf("\n%i\n", i);
		
		i++;
	}
	while(i<=10);
	system("pause");
}
