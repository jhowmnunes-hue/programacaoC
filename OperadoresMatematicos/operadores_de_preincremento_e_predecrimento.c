#include <stdio.h>

int main(){
/*
Incremento (++): são operadores que aumentam o valor de uma variável em 1.
Decremento (--): é o operador que diminui o valor de uma variável em 1.
Pré-incremento ++a: O operador é colocado antes da variável (++variável). O valor da variável é incrementado antes de ser usado na expressão.
Pós-incremento a++: O operador é colocado depois da variável (variável++). O valor da variável é incrementado após ser usado na expressão.
pré-decremento --a: O operador é colocado antes da variável (--variável). O valor da variável é decrementado antes de ser usado na expressão.
pós-decremento a--: O operador é colocado depois da variável (variável--). O valor da variável é decrementado após ser usado na expressão.
*/

int numero1 =1, resultado;

printf("Antes incremento: %d \n", numero1);
// numero1 = numero1 +1; // Incremento
// numero1 +=1; // Incremento
resultado = numero1++; // Pós-incremento
//resultado = numero1;
// resultado = ++numero1; // Pré-incremento
printf("Apos Pós-incremento - numero 1: %d - Resultado %d \n", numero1, resultado);

resultado = ++numero1;
printf("Apos Pré-incremento - numero 1: %d - Resultado %d \n", numero1, resultado);

resultado = numero1--; // Pós-decremento
printf("Apos Pós-decremento - numero 1: %d - Resultado %d \n", numero1, resultado);

resultado = --numero1; // Pré-decremento
printf("Apos Pré-decremento - numero 1: %d - Resultado %d \n", numero1, resultado);


}