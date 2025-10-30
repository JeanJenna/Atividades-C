#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main () {

        setlocale(LC_ALL, "");

        int valor = 0;

        char boom [] = {"\n\nTraumas PT.2 - gyylo \nPraga - Pumapjl \nSolta minha blusa - Pumapjl \nFavela Vive 5 - ADL \nDeus Por Favor - Kawe\n"};
        char trap [] = {"\n\nQuer Voar - Matuê \n Máquina do Tempo - Matuê \n Like This - Matuê \n Passado de um Vilão - Alee \n Party - Alee\n"};
        char anime [] = {"\n\nBrisa de verão - Chrono \n 1,2 Play - Toshinobu \n kick back - Kenshi \n Peace Sign - Kenshi\n"};

    printf("Digite um valor para escolher o estilo de musica desejado\n1= boombap\n2= trap\n3= anime\n digite o valor aqui: ");
    scanf("%d", &valor);

        if  (valor == 1) {
            printf("%s", boom);
        }
        else if (valor == 2) {
            printf("%s", trap);
        }
        else {
            printf("%s", anime);
        }

    return 0;
}
