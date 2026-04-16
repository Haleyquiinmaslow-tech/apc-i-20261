#include <stdio.h>

int main() {

    int idade;

    printf("Entre com a idade do cidadao; ");
    scanf("%i", &idade);
while(getchar() != '\n');


//operadores logicos
// 1. Verdadeiro, 0 - FALSO
// E - && - Falso E qualquer coisa = FALSO
// OU - ||- Verdadeiro OU qualquer coisa = VERDADEIRO
// NAO - ! - NÃO Verdadeiro = Falso, NÃO Falso = VERDADEIRO

int eh_obrigado_votar = idade >= 18 && idade <= 70;
int eh_facultativo_votar = idade >= 16 && idade < 18 || idade > 70;
int nao_eh_obrigatorio_votar = !eh_obrigado_votar;

printf("Voce tem %i anos e deve votar? %i\n", idade, eh_obrigado_votar);
printf("Voce tem %i anos e pode votar? %i\n", idade, eh_facultativo_votar);
printf("Voce tem %i anos nao deve votar? %i\n", idade, nao_eh_facultativo_votar);
    
    return 0;


}