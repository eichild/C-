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
	printf("Digite um n�mero\n",entrada);
	scanf("%i",&entrada);
	
if(entrada %2==0){
	printf("\n O n�mero %i � par\n", entrada);
	system("color 5");
	par++;
}	

else
{

system("color 4");
printf("\n O n�mero %i impar\n",entrada);
impar++;

}
entrada++;
	
	
}
printf("\n%i n�meros s�o pares", par); 
printf("\n%i n�meros s�o �mpares\n", impar);
system("pause");
}
	


