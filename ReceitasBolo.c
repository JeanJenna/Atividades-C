#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main () {

        setlocale(LC_ALL, "");
        int num = 0;
    char bolo [] = {"1 lata (395 g) de leite condensado \n3 ovos inteiros \n2 colheres (sopa) de manteiga derretida \n1 xícara (chá) de farinha de trigo (120 g) \n1 colher (sopa) de fermento químico em pó (10 g)"};

    printf("Para exibir a receita do bolo digite 1 e para sair digite 0: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("%s", bolo);
    }
    else {
        printf("Tudo bem, Tchau!");
    }




    return 0;
}

