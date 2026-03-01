#include <stdio.h>

int main(){

//São usados para atribuir valores a variáveis

/*
Atribuição Simples (=)
Atribuição de Soma (+=)
Atribuição de Subtração (-=)
Atribuição de Multiplicação (*=)
Atribuição de Divisão (/=)
*/
int numero1 = 10, numero2, resultado;

resultado = 10; // Atribuição Simples
printf("Resultado: %d \n", resultado);

resultado += 20; // Atribuição de Soma
printf("Resultado: %d \n", resultado);

resultado -= numero1; // Atribuição de Subtração
printf("Resultado: %d \n", resultado);

resultado *= 5; // Atribuição de Multiplicação
printf("Resultado: %d \n", resultado);

resultado /= 2; // Atribuição de Divisão
printf("Resultado: %d \n", resultado);


}