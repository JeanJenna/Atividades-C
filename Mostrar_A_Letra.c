#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main () {
        setlocale(LC_ALL, "");
        int num;
        char letras [] = {"LUA"};
        printf("Você pode alterar a posição das letras, com os respectivos numeros para as seguintes letras\n0 = L\n1 = U\n2 = A\nDigite Aqui seu numero: ");
        scanf("%d", &num);
        
        if (num == 0) {
            printf("%c", letras[0]);
        }
        else if (num == 1) {
            printf("%c", letras[1]);
        }
        else {
            printf("%c", letras[2]);
        }
        
    return 0;
}
