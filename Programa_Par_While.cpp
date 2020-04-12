#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system ("color 8");
	int entrada,par,impar;
	entrada=1;
	par=0;
	impar=0;
	
	while(entrada<=10){
	printf("Digite um número\n",entrada);
	scanf("%i",&entrada);
	
if(entrada %2==0){
	printf("\n O número %i é par\n", entrada);
	system("color 5");
	par++;
}	

else
{

system("color 4");
printf("\n O número %i impar\n",entrada);
impar++;

}
entrada++;
	
	
}
printf("\n%i números são pares", par); 
printf("\n%i números são ímpares\n", impar);
system("pause");
}
	


