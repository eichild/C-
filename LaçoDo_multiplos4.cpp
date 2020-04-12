#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	i=1; 
	
	do{
		if(i%4==0){
			printf("\nPI\n");
			
		}
		else{
			printf("\n%i\n", i);
				
			
		}
		i++;
	}
		while(i<=100);
		
	
	
	
	system("pause");		
}
	
	
