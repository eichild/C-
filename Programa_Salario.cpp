#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 15");
	float horas,salario, dias;
	setlocale(LC_ALL, "Portuguese");

printf("\n informe horas trabalhadas\n");
scanf("%f",&horas);

printf("informe dias trabalhados\n");
scanf("%f", &dias);
salario=horas*dias*28;

printf("Seu salário é:%.0f\n",salario);

system("pause");
	
}
