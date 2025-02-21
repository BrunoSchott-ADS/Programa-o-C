#include <stdio.h>

int main(){

    void limparBuffer() {
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }

// Variaveis para as cartas
char Codigo[10], Codigo2[10];
char Estado1[30], Estado2[30];
char Cidade1[80], Cidade2[80];
float Populacao1, Populacao2;
float PIB1, PIB2;
float Area1, Area2;
int pontos_turisticos1, pontos_turisticos2;

// Informações para as cartas

printf("Cadastro da Carta 1\n");
printf("Digite uma letra de 'A' a 'H' (representado um dos oito estados): \n");

printf("Estado: ", Estado1);
scanf(" %s", Estado1);

printf("O código contém o estado mais o numero da cidade\n");
printf("Exemplos: A01, B01, C02, D02, assim por diante. \n");
printf("Código: ", Codigo);
scanf(" %s", &Codigo1);
limpaBuffer();

printf("Nome da cidade: \n", Cidade1);
scanf(" %s", &Cidade1);
limpaBuffer();

printf("População: \n", Populacao1);
scanf("%f", &Populacao1);
limpaBuffer();

printf("Área: km²\n", Area1);
scanf("%f", &Populacao1);
limpaBuffer();

printf("PIB: \n", PIB1);
scanf("%f," PIB1);
limpaBuffer();

printf("Numero de Pontos Turisticos :\n", pontos_turisticos1);
scanf("%f", &pontos_turisticos1);
limpaBuffer();

// Exibição dos dados da primeira carta
printf("\nCarta 1:\n");
printf("Estado: %c\n", Estado1);
printf("Nome da Cidade: %s\n", Cidade1);
printf("População: %d\n", Populacao1);
printf("Área: %.2f km²\n", Area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);




}
