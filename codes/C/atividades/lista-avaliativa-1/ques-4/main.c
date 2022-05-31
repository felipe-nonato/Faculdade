// ------------ QUESTÃO 4 ------------

#include "./head.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tamanho = 13;
    char str[] = "000.000.000-0";
    char* formato_1 = ".";
    char* formato_2 = "-";
    char* final = "FIM";
    while(strcmp(str,final)!=0){
        printf("\n\nEscreva o CPF/CNPJ para verificar se é valido: ");
        scanf("%s", str);
        if(strcmp(str,final)==0){
            break;
        }
        isValid(tamanho, str,formato_1[0],formato_2[0]);
    }
    return 0;
}
