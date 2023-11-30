//Nome: Joao Davi Muroni Tenório
//Questao 3

#include <stdio.h>
#include <string.h>

double tamanhoMedioEntreStrings(const char *str1, const char *str2){
	
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);
	
	double tamanhoMedio = (len1 + len2) / 2.0;
	
	return tamanhoMedio;
}

int main(){
	
	char string1[100], string2[100];
	
	printf("Digite a primeira string: \n");
	gets(string1);
	
	printf("Digite a segunda string: \n");
	gets(string2);
	
	double resultado = tamanhoMedioEntreStrings(string1, string2);
	printf("O tamanho medio entre as strings e: %.2f\n", resultado);
	
	return 0;
}
