#include <stdio.h>

void incrementa(int *ponteiro){
    /*
    int*ponteiro: ponteiro para variavel do tipo int realiza o incremento do conteudo do ponteiro */

    (*ponteiro)++;
}

int main(void){

    int var =2;
    printf("var = %d\n", var);
    incrementa(&var);
    printf("var = %d\n", var);

    return 0;
}