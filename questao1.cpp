//Nome: Joao Davi Muroni Tenório
//Questão 1

#include <stdio.h>

int soma(int n1, int n2){
		return n1 + n2;
	}


int multiplicacao(int n1, int n2){
		return n1 * n2;
	}
	
int subtracao(int n1, int n2){
		return n1 - n2;
	}


int main(){
	
	int n1, n2, somar, multiplicar, subtrair;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	
	if(n1 < n2){
		somar = soma(n1,n2);
		printf("%d + %d = %d\n", n1, n2, somar);
	}
	
	else if(n1 == n2){
		multiplicar = multiplicacao(n1, n2);
		printf("%d x %d = %d\n",n1,n2, multiplicar);
	}
	
	else if(n1 > n2){
		subtrair = subtracao(n1,n2);
		printf("%d - %d = %d", n1, n2, subtrair);
	}
}
