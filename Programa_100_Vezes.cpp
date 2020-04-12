#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 43");

int entrada,i; 
float soma=0;
setlocale(LC_ALL, "Portuguese");


for(i=1;i<=100;i++){
 
printf("Informe o %i valor\n",i);
scanf("%i",&entrada);

soma=soma+entrada;
}

printf("media= %.2f", soma/4);

system("pause");
}


