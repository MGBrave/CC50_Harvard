/*
Digamos que temos uma população de n lhamas. A cada ano, nascem n / 3 novas lhamas e n / 4 morrem.

Por exemplo, se começarmos com n = 1.200 lhamas, no primeiro ano, 1.200 / 3 = 400 novas lhamas nascerão e 1.200 / 4 = 300 lhamas morrerão. No final daquele ano, teríamos 1.200 + 400 - 300 = 1.300 lhamas.

Para tentar outro exemplo, se começarmos com n = 1000 lhamas, no final do ano teremos 1000/3 = 333,33 novas lhamas. Não podemos ter uma parte decimal de uma lhama, entretanto, vamos truncar o decimal para que 333 novas lhamas nasçam. 1000/4 = 250 lhamas passarão, então terminaremos com um total de 1000 + 333 - 250 = 1083 lhamas no final do ano.
*/
#include <stdio.h>


int main(void)
{
    int n = 0;
    int cont = 0;
    int endpop = 0;
    int startpop = 0;
    do
    {
        printf("Indique a População Inicial:\n ");
        scanf("%d", &startpop);
        if(startpop < 9)
        {
            printf("[AVISO!]\n O número precisa ser maior do que 9, digite novamente.\n ");
        }

    }
    while(startpop < 9);

    do
    {
        printf("Digite agora a população desejada/final:\n");
        scanf("%d", &endpop);
        if(endpop <= startpop)
        {
            printf("[AVISO!]\n O número precisa ser maior do que o Inicial, digite novamente\n ");
        }
    }
    while(endpop <= startpop);

    while(endpop > startpop)
    {
          n = startpop + (startpop/3) - (startpop/4);
          cont++;
          startpop = n;
    }

     printf("Anos: %i\n", cont);

     return 0;
}