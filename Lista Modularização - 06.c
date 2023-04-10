/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023

Escreva um programa que implemente uma função que passe dado número inteiro como parâmetro, e este desenhe um número equivalente a “*” na tela.  


*******************************************************************************/
#include <stdio.h>
int leia();
void desenho(int a);


int main()
{
    int num;
    
    num = leia();
    desenho(num);
    
    

    return 0;
}

int leia(){
    int a;
    printf("Digite um numero : ");
    scanf("%d", &a);
    
    return a;
}

void desenho(int a){
    

switch(a) {
        case 0:
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 1:
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 2:
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            break;
        case 3:
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        case 4:
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 5:
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        case 6:
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 7:
            printf("*****\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 8:
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 9:
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        default:
            printf("O número deve estar entre 0 e 9.\n");
            break;
    }
}


