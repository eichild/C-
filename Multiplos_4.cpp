#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, x;
	i=1;
	
	for(i=1;i<=100;i++){
	
		printf("\n%i\n",i);	
		scanf("%i", &i);
		if(i%4==0){
		
			printf("\nPI.\n");
	
	}
		
	}
	system("pause");
	}
