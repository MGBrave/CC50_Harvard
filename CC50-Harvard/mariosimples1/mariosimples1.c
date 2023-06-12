/*
       Código escrito em 20/06/2022
       por Wagner Gaspar
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
    
        for(j = 1; j <= i; j++)
            printf("*");
       

        printf("\n");
    }

    return 0;
}