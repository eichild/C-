#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 15");
	
int an,aa,idade,meses,horas,dias;
setlocale(LC_ALL, "Portuguese");

printf("Informe ano atual\n");
scanf("%i",&aa);

printf("informe ano de nascimento\n");
scanf("%i", &an);
idade=aa-an;

printf("Sua idade �:%.0i\n",idade);

meses=12*idade;
printf("Voc� possui:%.0i meses de vida\n",meses);

dias=365*meses;
printf("Voc� possui:%.0i dias de vida \n",dias);

horas=24*dias;
printf("Voc� possui:%.0i Horas de vida\n",horas);

system("pause");

	
}
