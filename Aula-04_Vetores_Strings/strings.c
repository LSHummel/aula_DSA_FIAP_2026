#include<stdio.h>

int main(){

    //char valor = 'c';
    //char palavra[5] = {'c','a','s','a'};
    //printf("%c", valor);
    //printf("%s", palavra);

    char nome[20];// = "Lucas Seiji";
    printf("Digite seu nome: ");
    //scanf("%s", nome);// nâo aceita espaço, considera espaço como finalização
    fgets(nome, 20, stdin);
    printf("O meu nome e: %s",nome);


    return 0;
}