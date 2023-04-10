/******************************************************************************

Guilherme de Oliveira Fantinati - 8136341 - 05/04/2023
Crie uma função que determine se dado caracter está entre ‘a’ e ‘z’. Dica: Use a tabela ASCII.  

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
int entre(char a);

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char a;
    
    printf("Digite um caracter: \n");
    scanf("%c", &a);
    
    
    if (entre(a)) {
        printf("%c está entre 'a/A' e 'z/Z'\n", a);
    } else {
        printf("%c não está entre 'a/A' e 'z/Z'\n", a);
    }
    
}

int entre(char a) {
    setlocale(LC_ALL, "Portuguese");
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
        return 1;
    } 
    return 0;
}


