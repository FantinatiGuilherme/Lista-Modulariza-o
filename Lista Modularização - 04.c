/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023

Crie um sistema de caixa eletrônico, utilizando menus (switch) e outros recursos, que realizem operações financeiras a partir de funções especificamente projetadas para tal. Lembre-se de que o caixa eletrônico é um programa que roda como repetição contínua, até que o usuário decida encerrar as operações. Operações: Depósito, Saque e Saldo.  

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
void entrada();
int leia();
void operacao();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int escolha=0;
    
    entrada();
    
    
    operacao();
    
    
    
    

    return 0;
}

void entrada(){
    setlocale(LC_ALL, "Portuguese");
    printf("---------------------- BANCO ----------------------\n");
    printf("Digite o número para realizar as seguintes operações:\n1 - Deposito\n2 - Saque\n3 - Saldo\n4 - Sair\n");
   printf("---------------------------------------------------\n");
}


int leia(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    
    printf("Digite a operação desejada : ");
    
    scanf("%d", &a);
    
    while(a <= 0 || a > 4 ){
        printf("Não existe nenhuma operação com esse número, digite novamente : ");
        scanf("%d",&a);
    }
    return a;
}

void operacao (){
    setlocale(LC_ALL, "Portuguese");
    float valor, saldo = 0;
    int escolha = 0;
    
    while(escolha != 4){
        escolha = leia();
    
    switch(escolha){
        case 1:
            printf("Qual valor do seu deposito : R$ ");
            scanf("%f", &valor);
            saldo += valor;
            printf("Operação realizada com sucesso! \n\n\n");
            break;
        case 2:
            printf("Digite o valor que vai ser sacado : R$ ");
            scanf("%f", &valor);
            
            saldo -= valor;
            printf("Operação realizada com sucesso!\n\n\n");
            break;
        
        case 3:
        printf("Saldo da conta : R$ %.2f\n\n",saldo);
        break;
        
    
        }

}
}


