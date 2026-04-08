#include <stdio.h>

int main () {

char sexo;

printf("SELECIONE SEXO ");

scanf("%c", &sexo);

while(getchar() != '\n');

printf("voce selecionou '%c'\n", sexo);


float altura;

printf(" INFORME SUA ALTURA ");

scanf("%f", &altura);

while(getchar() != '\n');

printf("VOCE TEM %.2f DE ALTURA\n", altura );

float peso;

printf(" INFORME SEU PESO ");

scanf("%f", &peso);

while(getchar() != '\n');
printf("VOCE TEM %.3lf KG\n", peso );

    return 0;
}