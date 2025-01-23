#include <stdio.h>
int main()
{
	char  Carta[3];
	char Estado[18], Nome[25];
	int Populacao, Pturismo;
	float Area, PIB;

	printf("Digite o Nome do Estado: ");
	scanf(" %s", &Estado);

	printf("Digite o Codigo da Carta: ");
	scanf(" %s", &Carta);

	printf("Digite o Nome da Cidade: ");
	scanf(" %s", &Nome);

	printf("Digite o Número de habitantes: ");
	scanf(" %d", &Populacao);

	printf("Digite a Área da cidade: ");
	scanf(" %f", &Area);

	printf("Digite o PIB da Cidade: ");
	scanf(" %f", &PIB);

	printf("Digite o Número de Pontos Turísticos: ");
	scanf(" %d", &Pturismo);

	
	printf("Estado: %s\n", Estado);
	printf("Codigo da carta: %s\n", Carta);
	printf("Nome da Cidade: %s\n", Nome);
	printf("População: %d\n", Populacao);
	printf("Área: %.1f km²\n", Area);
	printf("PIB: %.1f milhões de reais\n", PIB);
	printf("Número de Pontos Turisticos : %d\n", Pturismo);

	return 0;
}