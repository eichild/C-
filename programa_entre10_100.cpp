#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
int entrada ;
setlocale (LC_ALL , "Portuguese");
printf("\nDigite um numero entre 10 e 100\n");
scanf("%i",& entrada);
if ((entrada>=10)&&(entrada<=100)){
printf("\n o n�mero est� dentro da faixa\n");	
}
else
{
printf("\n o n�mero est� fora da faixa\n");
}
system("pause");
}
