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
printf("\nVocê é criança\n");		
}

else {
if((idade>=18)&&(idade<64)){
	printf("\nVocê é adulto\n");
}

else {
	(idade>=65);
	printf("\nVocê é idoso\n");
}
}
system("pause");
}

