#include<stdio.h>
#include<string.h>

int main(){

    //char valor = 'c';
    //char palavra[5] = {'c','a','s','a'};
    //printf("%c", valor);
    //printf("%s", palavra);

    char username[20];// = "Lucas Seiji";
    char padrao[20] = "admin";
    printf("usuario: ");
    //scanf("%s", nome);// nâo aceita espaço, considera espaço como finalização
    fgets(username, 20, stdin);
    printf("%s", username);
    printf("%d e %d\n", strlen(username), strlen(padrao));

    printf("%d\n", strcmp(username, padrao));
    if(strcmp(username, padrao)){
        printf("Acesso Liberado");
    }else{
        printf("Acesso Negado");
    }


    return 0;
}