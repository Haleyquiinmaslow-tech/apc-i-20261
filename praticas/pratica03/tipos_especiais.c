#include <stdio.h>

int main() {

// Para usar (int)- valores até 2bilhões, (%d) -->especificar para usar
int Paises = 195;

    printf("Paises: %d\n", Paises);

int Idiomas = 7100;
    
    printf("Idiomas: %d\n",Idiomas);

// para usar (long long int)- valores acima de 2bilhões, (%lld) -->especificar para usar
long long int Populacao_Mundial = 8274065924;

    printf("Populacao Mundial: %lld\n",Populacao_Mundial);

//para usar (long double)- tem alta precisão na resposta, (%Lf) -->especificar para usar
long double Proporcao_Aurea = 1.61803398874989484820;

    printf("Proporcao Aurea: %.20Lf\n", Proporcao_Aurea);

    return 0;
}