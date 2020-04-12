#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	int main() {
float a,b,c; 
setlocale(LC_ALL,"portuguese");
printf("\n Digite o primeiro numero \n");
scanf("%f",&a);//recebe o numero inteiro e armazena na variavel A.
printf("\n Digite o segundo numero \n ");
scanf("%f",&b);
c=a+b;//c recebe a+b
printf("\n A soma de %.0f + %.0f = %.2f \n", a,b,c);
c=a-b;
printf("\n A subtracao de %.0f - %.0f = %.2f \n", a,b,c);
c=a*b;
printf("\n A multiplicacao de %.0f * %.0f = %.2f \n", a,b,c);
c=a/b;//sempre declarar divisão com variaveis reais.
printf("\n A divisao de %.0f / %.0f = %.2f \n", a,b,c);
system("pause");

}
