#include <stdio.h>

int main() {

// NESSA PRATICA USAMOS O OPERADOR (sizeof() para identificar o tamanho de cada item em bytes. O (%zu eh o formato correto para (size_t))
printf("Tamanho de char: %zu bytes\n", sizeof(char));
printf("Tamanho de short int: %zu bytes\n", sizeof(short int));
printf("tamando de int: %zu bytes\n", sizeof(int));
printf("Tamanho de long int: %zu bytes\n", sizeof(long int));
printf("Tamanho de long long int: %zu bytes\n", sizeof(long long int));
printf("Tamanho de float: %zu bytes\n", sizeof(float));
printf("Tamanho de double: %zu bytes\n", sizeof(double));
printf("Tamahho de long double: %zu bytes\n", sizeof(long double));

// Ao colocar todas as informações necessarias, salva e compila no terminal. Caso não apresente erros, roda o programa.
    return 0;
}