#include <stdio.h>
int main() {

    printf("estou usando a funcao printf()\n");

    printf("Programar em c eh TOP!\n");
// para usar esse codido tem que ser sempre numero inteiro
    printf("%011i\n", 10+10);
// para usar esse codigo, tem que ser numero quebrado 
    printf("%.2f", 3.1415);

    return 0;
}

// lembrar que depois de alterar as informacoes, 
// fazer a compilacao 
// gcc nome_do_arquivo.c -lm -o a.out
// depois executar 
// ./a.out