#include<stdio.h>

int main(){
	
	float numero1 ;

	
	printf("Digite a sua nota entre 0-10 \n");
	scanf("%f", &numero1);
	
	 
	if ( numero1 > 10 ){
		printf("Digite um numero entre 0 e 10");
		return 1;
    } 
    
	else if ( numero1 >= 9) {
		printf("Tirou MB :)");		
	}	
	
	else if (numero1 >= 7 ){
		printf("Tirou B ");
	}
	
	else if ( numero1 >=5 ){
		printf("Tirou R ");		
	}
	
	else {
		printf("Voce tirou I ");	
	}
			
	return 0 ;
	
}
