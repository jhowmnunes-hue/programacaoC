#include <stdio.h>2

int main () {
    int idade, matricula;
    float altura;
    char nome[50];
    

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");   
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nomedo aluno: %s - Matrícula: %d\n", nome, matricula);
        printf("Idade: %d - Altura %.2f\n", idade, altura);

    return 0;


}
