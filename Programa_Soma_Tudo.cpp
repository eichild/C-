#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h> 
#include<windows.h>


int main(){
system("color 75");
setlocale(LC_ALL, "Portuguese");
 
 int i, soma=0;
 
 
for(i=10;i>=1;i--){
	printf("%i\n",i);
	Sleep(500);
	Beep(1000,1000);
soma=soma+i;
	printf("A soma �\n", soma);	
	}
	system("pause");
}
