/*Exercício 2: Mario (desafio)
Mundo 1-1
No início de World 1-1 em Super Mario Brothers, da Nintendo, Mario deve pular pirâmides de blocos adjacentes, conforme mostrado abaixo.

Exemplo Jogo Mario World

Vamos recriar essas pirâmides em C, ainda que em texto, usando hashes ( # ) para tijolos, a la a seguir. Cada hash é um pouco mais alto do que largo, então as pirâmides em si também são mais altas do que largas.

      #  #
    ##  ##
  ###  ###
####  ####  
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = n - i; j >= 1; j--) // imprime os espaços
            printf(" ");
        for(j = 1; j <= i; j++) // imprime os *
            printf("*");
        printf(" ");
        for(j = 1; j <= i; j++) // imprime os *
            printf("*");
        printf("\n");
    }

    return 0;
}