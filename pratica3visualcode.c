#include <stdio.h>
int soma(int valor1, int valor2){
    /*função que soma dois valores int*/

        int sum = valor1+valor2;
        return sum;
}

int main(void){

/*tipo(* nome_do_ponteiro)(lista de tipomde argumentos)*/

    int (*ponteiro)(int, int) = soma;

int resultado = ponteiro(2,3);
printf("valor do resultado = %d\n", resultado);

    return 0;
}