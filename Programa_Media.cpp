#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 5");

 float n1,n2,n3,n4,media;
setlocale(LC_ALL, "Portuguese");

printf("Informe o primeiro numero\n");
scanf("%f",&n1);

printf("Informe o segundo numero\n");
scanf("%f",&n2);

printf("Informe o terceiro numero\n");
scanf("%f",&n3);

printf("Informe o quarto numero\n");
scanf("%f",&n4);
media=(n1+n2+n3+n4)/4;

printf("A média é=%.0f\n",media);

system("pause");
}

