#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char primeiraCartaEstado, segundacartaEstado;
    char primeiraCartaCodigo[4], segundaCartaCodigo[4];
    char primeiraCartaCidade[50], segundaCartaCidade[50];
    int primeiraCartaHabitantes, segundaCartaHabitantes;
    float primeiraCartaArea, segundaCartaArea;
    float primeiraCartaPib, segundaCartaPib;
    int primeiraCartaTuristico, segundaCartaTuristico;

    //As proximas variáveis são ref. ao desafio do nivel aventureiro
    float primeiraCartaDensiPopulacional, segundaCartaDensiPopulacional; //Dividir a população pela area da cidade
    float primeiraCartaPibPerCapita, segundaCartaPibPerCapita; //Dividir o PIB da cidade pela população

  // Área para entrada de dados
    printf("SUPER TRUNFO\nINFORMACOES DA PRIMEIRA CARTA:\n");

    //Registrando as informações do primeiroEstado
    printf("Digite a primeira letra do Estado (Letras de A ate H): ");
    scanf(" %c", &primeiraCartaEstado);

    printf("\nDigite o codigo, usando a letra do Estado + um numero (Numeros de 01 ate 04): ");
    scanf("%s", primeiraCartaCodigo); //Não usar o & por causa do array da variavel do tipo char

    printf("\nDigite o nome da cidade: "); //Tenho que Digitar a informação Sao Paulo
    //scanf("%s", primeiraCartaCidade); //Não usar o & por causa do array da variavel do tipo char, contudo não consigo usar esse codigo pq tem espaço e o enter
    //fgets(primeiraCartaCidade, 50, stdin);
    //primeiraCartaCidade[strcspn(primeiraCartaCidade, "\n")] = 0;
    //Os codigos acima não funcionaram, tive que usar o scanf mesmo, mas utilizando o comando abaixo
    scanf(" %[^\n]", primeiraCartaCidade);

    printf("\nDigite o numero de habitantes da cidade: ");
    scanf("%d", &primeiraCartaHabitantes);

    printf("\nDigite a area da cidade em quilometros quadrados: ");
    scanf("%f", &primeiraCartaArea);

    printf("\nDigite o Produto Interno Bruto da cidade: ");
    scanf("%f", &primeiraCartaPib);

    printf("\nDigite o numero de Pontos Turisticos da cidade: ");
    scanf("%d", &primeiraCartaTuristico);

    //Aqui entra a codificação do Desafio Nivel Aventureiro que inclui "Calcular a Densidade populacional"
    //Dividir população da cidade pela area
    primeiraCartaDensiPopulacional = (float) primeiraCartaHabitantes / primeiraCartaArea;


    //E também "Calcular o Pib per Capita". Divida o PIB da cidade pela sua população. 
    primeiraCartaPibPerCapita = primeiraCartaPib / primeiraCartaHabitantes;


    /*
        ---------------------------------------------------------------------------------------
        A parte seguinte deste codigo colhe as informações para a segunda carta do super trunfo
        ---------------------------------------------------------------------------------------
    */

    printf("\nSUPER TRUNFO\nINFORMACOES DA SEGUNDA CARTA:\n");
    
    //Registrando as informações do segundoEstado
    printf("Digite a primeira letra do Estado (Letras de A ate H): ");
    scanf(" %c", &segundacartaEstado);

    printf("\nDigite o codigo, usando a letra do Estado + um numero (Numeros de 01 ate 04): ");
    scanf("%s", segundaCartaCodigo); //Não usar o & por causa do array da variavel do tipo char

    printf("\nDigite o nome da cidade: ");
    //scanf("%s", segundaCartaCidade); //Não usar o & por causa do array da variavel do tipo char, contudo não consigo usar esse codigo pq tem espaço e o enter
    //fgets(segundaCartaCidade, 50, stdin);
    //segundaCartaCidade[strcspn(segundaCartaCidade, "\n")] = 0;
    scanf(" %[^\n]", segundaCartaCidade);
    
    printf("\nDigite o numero de habitantes da cidade: ");
    scanf("%d", &segundaCartaHabitantes);

    printf("\nDigite a area da cidade em quilometros quadrados: ");
    scanf("%f", &segundaCartaArea);

    printf("\nDigite o Produto Interno Bruto da cidade: ");
    scanf("%f", &segundaCartaPib);

    printf("\nDigite o numero de Pontos Turisticos da cidade: ");
    scanf("%d", &segundaCartaTuristico);

    //Aqui entra a codificação do Desafio Nivel Aventureiro que inclui "Calcular a Densidade populacional"
    //Dividir população da cidade pela area
    segundaCartaDensiPopulacional = (float) segundaCartaHabitantes / segundaCartaArea;


    //E também "Calcular o Pib per Capita". Divida o PIB da cidade pela sua população. 
    segundaCartaPibPerCapita = segundaCartaPib / segundaCartaHabitantes;

  // Área para exibição dos dados da cidade
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", primeiraCartaEstado);
    printf("Codigo: %s\n", primeiraCartaCodigo);
    printf("Nome da Cidade: %s\n", primeiraCartaCidade);
    printf("Populacao: %d\n", primeiraCartaHabitantes);
    printf("Area: %.2f km²\n", primeiraCartaArea);
    printf("PIB: %.2f bilhoes de reais\n", primeiraCartaPib);
    printf("Numero de Pontos Turisticos: %d\n", primeiraCartaTuristico);
    printf("Densidade Populaconal: %.2f hab/km²\n", primeiraCartaDensiPopulacional);
    printf("PIB per Capita: %.2f reais\n", primeiraCartaPibPerCapita);


    /*
        ---------------------------------------------------------------------------------------
        O codigo a seguir exibe as informações da segunda carta do super trunfo
        ---------------------------------------------------------------------------------------
    */
    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", segundacartaEstado);
    printf("Codigo: %s\n", segundaCartaCodigo);
    printf("Nome da Cidade: %s\n", segundaCartaCidade);
    printf("Populacao: %d\n", segundaCartaHabitantes);
    printf("Area: %.2f km²\n", segundaCartaArea);
    printf("PIB: %.2f bilhoes de reais\n", segundaCartaPib);
    printf("Numero de Pontos Turisticos: %d\n", segundaCartaTuristico);
    printf("Densidade Populaconal: %.2f hab/km²\n", segundaCartaDensiPopulacional);
    printf("PIB per Capita: %.2f reais\n", segundaCartaPibPerCapita);
    


    return 0;
} 
