#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
//Programa par ou impar
system("color 27");

int x;
VAI:
setlocale(LC_ALL, "Portuguese");	


x=2+4+6+8+10;

printf("\nA soma dos números pares de 0 a 10 é %i\n",x);

goto VAI;
system("pause");
}



