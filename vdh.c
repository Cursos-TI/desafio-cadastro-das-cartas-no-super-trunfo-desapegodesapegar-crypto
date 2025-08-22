#include <stdio.h>

struct Carta {
    char A;             // Letra A-H
    char A01[4];          // Ex: A01
    char brasil[50];     // Nome da cidade (ou país, se preferir)
    int 200000000;           // População
    float 2400000000;              // Área em km²
    float 1700000000;               // PIB em bilhões
    int praias;    // Pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    // Carta 1 - Brasil
    carta1.estado = 'A';
    snprintf(carta1.codigo, sizeof(carta1.codigo), "A01");
    snprintf(carta1.nomeCidade, sizeof(carta1.nomeCidade), "Brasil");
    carta1.populacao = 214300000;  // 214,3 milhões
    carta1.area = 8515767.0;       // km²
    carta1.pib = 2200.0;           // PIB em bilhões de dólares
    carta1.pontosTuristicos = 150;

    // Carta 2 - Japão
    carta2.estado = 'B';
    snprintf(carta2.codigo, sizeof(carta2.codigo), "B02");
    snprintf(carta2.nomeCidade, sizeof(carta2.nomeCidade), "Japão");
    carta2.populacao = 125700000;  // 125,7 milhões
    carta2.area = 377975.0;        // km²
    carta2.pib = 4937.0;           // PIB em bilhões de dólares
    carta2.pontosTuristicos = 120;

    // Exibição
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome do País: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de dólares\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n-------------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome do País: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de dólares\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
