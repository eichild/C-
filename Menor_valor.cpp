#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
system("color 95");

int n1, n2;
setlocale(LC_ALL, "Portuguese");

printf("Informe o primeiro numero\n");
scanf("%i",&n1);

printf("Informe o segundo numero\n");
scanf("%i",&n2);
if(n1<n2){

printf("o primeiro numero é menor\n");
}

else
{
printf("\o segundo número é maior\n");	
}
system("pause");

}
