#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(){
//Programa par ou impar
system("color 27");

int i;


setlocale(LC_ALL, "Portuguese");	

while(i<=1000){

printf("\n\nDigite o valor\n");
scanf("%i", &i);
if(i%2==0){
	printf("O Numero %i par\n",i);
}
else{
	printf("\nO Numero %i é impar",i);
}
i++;
}

system("pause");
}
