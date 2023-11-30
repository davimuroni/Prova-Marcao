#include <stdio.h>

float fatorial(float numero){
    float resultado = 1;
    for(int i = numero; i > 0; i--){
        resultado *= i;
}
}
int main(){
	
	float n;
	float fator;
	printf("Digite um numero: \n");
	scanf("%f", &n);
	
	fator = fatorial(n);
	printf("Fatorial: %f", fator);
}
