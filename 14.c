#include <stdio.h>
#include <math.h>

int main(){
	float soma = 0, x , numerador;
	int i = 1,denominador = 1;
	
	printf("Digite um numero: ");
	scanf("%f", &x);
	
	
	for(i = 25;i>=1;i--){
		numerador = pow(x,i);
		
		if(denominador % 2 == 0){
			soma -= (numerador/denominador);
			
		}
		else{
			soma += (numerador/denominador);
		}
		
		denominador++;
		
//		printf("%.2f / %d\n",numerador,denominador);
	
		
	}
	

	printf("%f",soma);
	
	
}