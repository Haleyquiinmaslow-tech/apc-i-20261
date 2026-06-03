#include <stdio.h>

int main() {

    int n, i;
    int soma = 0;
    float media;

    printf("QUANTOS NUMEROS DESEJA? ");
    scanf("%i", &n);

    int numeros[n];

    for(i = 0; i < n; i++) {

        printf("Digite um numero: ");
        scanf("%i", &numeros[i]);
    }
if(scanf("%i", &numeros[i]) != 1) {

    printf("Insira somente numeros! Tente de novo.\n");
    return 1;

}

    for(i = 0; i < n; i++) {

        soma = soma + numeros[i];

    }
   


    media = (float)soma / n;

    printf("\n SUA MEDIA ARITMETICA = %.2f\n", media);

    return 0;
}