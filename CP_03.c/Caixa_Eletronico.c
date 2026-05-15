#include <stdio.h>

void card(void){
printf("1 - Visa\n");
printf("2 - Master Card\n");
printf("3 - Elo\n");
printf("4 - Fechar\n");
printf("Escolha uma opcao\n");
}




void menu(void){
printf("1 - Saldo da conta\n");
printf("2 - Depositar\n");
printf("3 - Retirar\n");
printf("4 - Sair\n");
printf("Escolha uma opcao: ");
}

int main(){
int opcao_card, opcao_menu;
float saldo_da_conta = 2532.0; 
float deposito = 0;
float saque = 0;



//Função de soma 
float soma(float a, float b){
    return a + b;
}
//Função de subtração
float sub(float a, float b){
    return a - b;
}

while(opcao_card != 4){
    card();
    scanf("%d", &opcao_card);
    switch(opcao_card){
        case 1:
            while(opcao_menu != 4){
                printf("---------------VISA-------------\n");
                menu();
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                    printf("Seu saldo da conta e: %.2f\n",saldo_da_conta);
                    break;

                    case 2:
                    printf("Digite quanto deseja depositar em sua conta: \n");
                    scanf("%f", &deposito);
                    if(deposito <= 0){
                        printf("Valor invalido, digite novamente");
                    }
                    float novo_saldo = soma(saldo_da_conta, deposito);
                    printf("O novo saldo da sua conta e: %.2f\n", novo_saldo);
                        
                    break;
                    case 3:
                    printf("Digite quanto deseja retirar da sua conta: \n");
                    scanf("%f", &saque);
                    if(saque <= 0){
                        printf("Valor invalido, digite novamente");
                    }
                    float resultado = sub(saldo_da_conta, saque);
                    printf("O novo saldo da sua conta e: %.2f\n", resultado);
                        break;
                    default:

                    }
                    
                }
            break;
            
        case 2:
            while(opcao_menu != 4){
                printf("---------------MASTER CARD-------------\n");
                menu();
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                    printf("Seu saldo da conta e: %.2f\n",saldo_da_conta);
                    break;

                    case 2:
                    printf("Digite quanto deseja depositar em sua conta: \n");
                    scanf("%f", &deposito);
                    if(deposito <= 0){
                        printf("Valor invalido, digite novamente");
                    }
                    float novo_saldo = soma(saldo_da_conta, deposito);
                    printf("O novo saldo da sua conta e: %.2f\n", novo_saldo);
                        
                    break;
                    case 3:
                    printf("Digite quanto deseja retirar da sua conta: \n");
                    scanf("%f", &saque);
                    if(saque <= 0){
                        printf("Valor invalido, digite novamente");
                    }
                    float resultado = sub(saldo_da_conta, saque);
                    printf("O novo saldo da sua conta e: %.2f\n", resultado);
                        break;
                    default:

                    }
                    
                }
            break;
        case 3:
            while(opcao_menu != 4){
                printf("---------------ELO-------------\n");
                menu();
                scanf("%d", &opcao_menu);

                switch(opcao_menu){
                    case 1:
                    printf("Seu saldo da conta e: %.2f\n",saldo_da_conta);
                    break;

                    case 2:
                    printf("Digite quanto deseja depositar em sua conta: \n");
                    scanf("%f", &deposito);
                    if(deposito <= 0){
                        printf("Valor invalido, digite novamente");
                    }
                    float novo_saldo = soma(saldo_da_conta, deposito);
                    printf("O novo saldo da sua conta e: %.2f\n", novo_saldo);
                        
                    break;
                    case 3:
                    printf("Digite quanto deseja retirar da sua conta: \n");
                    scanf("%f", &saque);
                    if(saque <= 0){
                        printf("Valor invalido, digite novamente");
                    }
                    float resultado = sub(saldo_da_conta, saque);
                    printf("O novo saldo da sua conta e: %.2f\n", resultado);
                        break;
                    default:

                    }
                    
                }
            break;
            }
        }

    return 0;
}