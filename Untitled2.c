#include <stdio.h>
#include <ctype.h> 
#include <locale.h>
#include <calculadora.h>



int main (){
	float l1 ;
	float l2;
	float resultado;
	char b;
	
	
	printf("Digite um numero\n");
	scanf("%f", &l1);
	
	printf("Digite a operacao (+ - * /)\n");
	scanf("%s", &b);
	
	printf("Digite outro numero\n");
	scanf("%f", &l2);
	
	if( b == '+' ){
		resultado = soma(l1, l2);
	}
	else if( b == '-'){
		resultado = subtracao(l1,l2);
	}
	else if( b == '*' ){
		resultado = multiplicacao(l1, l2);
	}
	else if(b == '/' ){
		if(l2 == 0){
			printf("divisao nao permitida");
		}
		resultado = divisao(l1, l2);
	}
	else{
		printf("operacao invalida");
	}
	printf("%.2f %c %.2f = %.2f", l1, b, l2, resultado);
}
