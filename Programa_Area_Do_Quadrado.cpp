#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
system("color 35");
setlocale (LC_ALL, "Portuguese");
float lado, area;

printf("informe o lado do Quadrado\n");	
scanf("%f",&lado);

area=lado*lado;
	
printf("\nA Área do quadrado é:%f\n",area);	
system("pause");	
}
