#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
system("color 12");
setlocale(LC_ALL, "Portuguese");
 
 int i, x;
 
for(i=1;i<=10;i++){
	printf("\t");
 
for(x=1;x<=10;x++){
	printf("\n %i x %i=%i \n",i,x,x*i);
 
}
}

system("pause");
}
