#include <stdio.h>



int main() {

    char estado[20]; //Estado 
    char codigo_da_carta[20]; // Pode ser numeros 
    char nome_da_cidade[20]; // Cidade 
    int populacao; //População aproximada
    float area; // Area (se possivel em km²)
    float PIB; // Valor aproximado
    int pontos_turisticos; // Valor aproximado 


    printf("Digite o nome do estado:\n"); //Ira aparecer para o usuario 
    scanf("%s", &estado); // Resposta do usuario aqui 
    printf("O estado é: %s \n", estado); //Resultado 

    printf("Digite o Código da carta (Ex: A01, B02, C03...): \n");
    scanf("%s", &codigo_da_carta);
    printf("O código da Carta será: %s \n", codigo_da_carta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);
    printf("O nome da cidade será: %s \n", nome_da_cidade);

    printf("Digite a população aproximada: \n");
    scanf("%i", &populacao);
    printf("A população da cidade será:: %i \n", populacao);

    printf("Digite a Área (Em Km²):\n");
    scanf("%f", &area);
    printf("A área será: %.2f Km² \n", area);

    printf("Digite agora o PIB da cidade:\n");
    scanf("%f", &PIB);
    printf("O PIB da cidade será: R$%.2f \n", PIB);

    printf("Quantos locais turisticos a cidade possui?\n");
    scanf("%i", &pontos_turisticos);
    printf("A quantidade de pontos turisticos será: %i \n", pontos_turisticos);

// Informações da 1° carta. 

    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo_da_carta);
    printf("Nome da cidade: %s \n", nome_da_cidade);
    printf("População: %i \n", populacao);
    printf("Area: %.2F \n", area);
    printf("PIB: %.2F \n", PIB);
    printf("Pontos turisticos: %i \n", pontos_turisticos);
    // Primeira carta concluida 


    return 0;
}
