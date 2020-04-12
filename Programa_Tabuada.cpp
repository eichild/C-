#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
system("color 12");
setlocale(LC_ALL, "Portuguese");
 
 int i, x;
 
 printf("Digite um número lek\n");
 scanf("%i",&x);
 
 for(i=1;i<=10;i++){
 	printf("\n %i x %i=%i \n",x,i,x*i);
 	return();
 }
 }
