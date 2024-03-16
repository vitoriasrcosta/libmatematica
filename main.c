/* Vitória de Souza Ribeiro Costa
    Engenharia de Controle e Automação */

#include "matematica.h"
#include <stdlib.h>
#include <stdio.h>
#define SUCESSO (0)

int main(){
    float angulo = 0.349066; // 20 graus em radianos
    float seno = calcular_seno(angulo);
    float cosseno = calcular_cosseno(angulo);
    float tangente = calcular_tangente(angulo);

    printf("O seno do angulo é %.4f\n", seno); 
    printf("O cosseno do angulo é %.4f\n", cosseno); 
    printf("A tangente do do angulo é %.4f\n", tangente); 
    

    return SUCESSO;
}