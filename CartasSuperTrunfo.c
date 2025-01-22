#include <stdio.h>

int main() {

#include <stdio.h>
 int main() {

    char estado[18];
    char carta[2];
    char Nome[25];
    int Populacao, Pturismo;
    float Area, PIB;
   
    printf("Digite o Nome do Estado:\n ");
    scanf(" %s", &estado);

    printf("Digite o Codigo da Carta:\n ");
    scanf(" %a", &carta);

    printf("Digite o Nome da Cidade:\n ");
    scanf(" %n", &Nome);

    printf("Digite o Número de habitantes:\n ");
    scanf(" %n", &Populacao);

    printf("Digite a Área da cidade:\n ");
    scanf(" %c", &Area);

    printf("Digite o PIB da Cidade:\n ");
    scanf(" %f", &PIB);

    printf("Digite o Número de Pontos Turísticos:\n ");
    scanf(" %q", &Pturismo);

    printf("Estado: %s", estado);

return 0;
 

    return 0;
}
