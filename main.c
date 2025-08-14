// Online C compiler to run C program online
#include <stdio.h>
/*Receber os dados de duas cartas: O programa deve receber os dados de duas cartas do Super Trunfo. Utilize o código desenvolvido no desafio anterior para o cadastro das cartas. As cartas devem conter os seguintes atributos:
 Estado (string)
 Código da carta (string)
 Nome da cidade (string)
 População (int)
 Área (float)
 PIB (float)
 Número de pontos turísticos (int). */

 
int main() {    
    char estado1[20];
    char cod1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_t1;
    
    
    char estado2[20];
    char cod2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_t2;
    
    
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite o estado\n");
    scanf("%s",estado1);
    printf("Digite o código da carta\n");
    scanf("%s",cod1);
    printf("Digite a cidade da carta\n");
    scanf("%s",cidade1);
    printf("Digite a popução:\n");
    scanf("%d",&populacao1);
    printf("Digite a área:\n");
    scanf("%f",&area1);
    printf("Digite o pib:\n");
    scanf("%f",&pib1);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d",&pontos_t1);
    
 
    printf("Ótimo! Agora vamos cadastrar a segunda carta!\n");

    printf("Digite o estado\n");
    scanf("%s",estado2);
    printf("Digite o código da carta\n");
    scanf("%s",cod2);
    printf("Digite a cidade da carta\n");
    scanf("%s",cidade2);
    printf("Digite a popução:\n");
    scanf("%d",&populacao2);
    printf("Digite a área:\n");
    scanf("%f",&area2);
    printf("Digite o pib:\n");
    scanf("%f",&pib2);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d",&pontos_t2);
    
    /* Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
 
Densidade Populacional: População / Área
 
PIB per capita: PIB / População*/

    int densidade1 = populacao1 / area1;
    int densidade2 = populacao2 * area2;
    
    /*Comparar um atributo escolhido: Você deverá escolher apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita) para realizar a comparação entre as duas cartas. Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.
    Carta 1 - São Paulo (SP): 12.300.000

Carta 2 - Rio de Janeiro (RJ): 6.000.000

Resultado: Carta 1 (São Paulo) venceu!
    
    */
    printf("Carta 1 - %s (%s): %d", cidade1, estado2, densidade1);
    printf("\nCarta 2 - %s (%s): %d", cidade2, estado2, densidade2);
    if (densidade1 > densidade2) {
        printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
    }
    else {
        printf("\nResultado: Carta 2(%s) venceu!", cidade2);
    }
    
    
  
        
  
   

    return 0;
}
