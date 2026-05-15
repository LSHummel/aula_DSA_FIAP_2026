#include <stdio.h>
#include <string.h>


int main(){

char usuario[50], senha[50];


printf("Crie um nome de usuario com no maximo 20 caracteres:\n");
fgets(usuario, 20, stdin);
while(strlen(usuario)>20){
    printf("Crie um nome de usuario com no maximo 20 caracteres:\n");
    fgets(usuario, 20, stdin);
}
printf("Crie uma senha, com no maximo 20 caracteres:\n");
fgets(senha, 20, stdin);

printf("%s", usuario);
printf("%s", senha);


    return 0;
}