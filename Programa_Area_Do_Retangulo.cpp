#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 85");
	
float b, h, a;
setlocale(LC_ALL, "Portuguese");

printf("Informe a base do retangulo\n");
scanf("%f",&b);

printf("informe a altura do retangulo\n");
scanf("%f", &h);
a=b*h/2;

printf("A Area do retangulo é:%.0f\n",a);


system("pause");
	
}
