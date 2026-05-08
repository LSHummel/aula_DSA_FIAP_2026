#include<stdio.h>


int main(){
    float notas[10] = {0,0}, soma;
    int qtd_notas;

    printf("Digite a quantidade de notas que queira lancar: ");
    scanf("%d", &qtd_notas);

    for(int i = 0; i<qtd_notas; i++){
        printf("Digite sua nota %d: \n", i +1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    printf("\n");
    // Calcular a media das duas notas - Automatica
    printf("A media das notas e: %.2f", soma/qtd_notas);

    return 0;
}
