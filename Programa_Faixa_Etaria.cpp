#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 41");

int idade;
setlocale(LC_ALL, "Portuguese");

printf("\nDigite sua idade\n");
scanf("%i",&idade);

if((idade>0)&&(idade<17)){
printf("\nVoc� � crian�a\n");		
}

else {
if((idade>=18)&&(idade<64)){
	printf("\nVoc� � adulto\n");
}

else {
	(idade>=65);
	printf("\nVoc� � idoso\n");
}
}
system("pause");
}

