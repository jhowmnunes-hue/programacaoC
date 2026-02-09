//scanf ("formato1", "formato2", &variavel1, variavel2, ...);
// o & não é necessario colocar se for ler string
#include <stdio.h>

    int main (){
        int idade;
        float altura;
        char opcao;
        char nome[20];
        //sintaxe scanf
        //scanf ("formato1" "formato2", &variavel1, variavel2, ...);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    //scanf precisamos digitar alguma mensagem como por exemplo o prinf acima
    printf ("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf ("O nome é: %s", nome);


/*
printf ("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a%d




*/


    }