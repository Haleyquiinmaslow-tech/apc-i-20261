#include <stdio.h>

int main() {
char tecla_pressionada;

// usar printf para mandar um texto
    printf("Pressione uma tecla: ");

// usar scanf (variavel) para identificação, não esquecer do "&"
    scanf("%c", &tecla_pressionada);

// comando para apagar o BUFFER 
    while(getchar() != '\n');

// usar esse comado para identificar qual ação foi feita
    printf("Voce pressionou a tecla '%c'\n", tecla_pressionada);
 
 // para adicionar mais informações inicie com (int e "nome")
 int idade;

 printf("Informe sua idade: ");

 scanf("%i", &idade);

 printf("Voce tem %i anos\n", idade);

float preco;

printf("Informe o preco da gasolina: ");

scanf("%f", &preco);

while(getchar()!= '\n'); // limpar BUFFER

printf("O preco da gasolina eh R$ %.2f\n", preco);

    return 0;
}