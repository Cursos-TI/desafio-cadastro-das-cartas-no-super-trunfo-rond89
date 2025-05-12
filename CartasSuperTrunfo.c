#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Rondinely.

int main(){

    // Cadastro da carta 1.
    
char Estado;
char Código[50];
char Nome[20];
int População, Pontos;
float Área, PIB;

printf ("Digite o Estado:  \n");
scanf("%s", &Estado);
printf("Digite o Código: \n");
scanf("%s", &Código);
printf("Digite o  Nome: \n");
scanf("%s", &Nome);
printf("Digite a População: \n");
scanf("%d", &População);
printf("Digite os Pontos: \n");
scanf("%d", &Pontos);
printf("Digite a Área: \n");
scanf("%f", &Área);
printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Nome do Estado: %s - Digite o Código: &s", Estado, Código);
printf("Digite o Nome: %s - Digite a População: %d", Nome, População);
printf("Digite os Pontos: %d - Digite a Área: %f - Digite o PIB: %f", Pontos, Área);

return 0;

}



    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


