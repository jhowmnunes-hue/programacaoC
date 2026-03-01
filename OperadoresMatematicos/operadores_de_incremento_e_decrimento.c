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

int numero1 =1;

printf("Antes incremento: %d \n", numero1);
// numero1 = numero1 +1; // Incremento
// numero1 +=1; // Incremento
numero1++; // Pós-incremento
printf("Apos incremento: %d \n", numero1);

//numero1 = numero1 -1; // Decremento
//numero1 -=1; // Decremento
numero1--; // Pós-decremento
printf("Apos decremento: %d \n", numero1);


}