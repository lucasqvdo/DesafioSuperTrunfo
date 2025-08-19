
#include <stdio.h>
/*A função main se inicia defindo as seguintes variaveis:
 Estado (string)
 Código da carta (string)
 Nome da cidade (string)
 População (int)
 Área (float)
 PIB (float)
 Número de pontos turísticos (int). 
 
 Após isso recebe as entradas dos usuários preenchendo todas as variaveis de cada carta*/

 
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
    
    
    printf("Seja bem vindo ao \n~  SUPER TRUNFO  ~ \nVamos cadastrar a primeira carta!\n\n");
    printf("Digite o estado:\n");
    scanf("%s",estado1);
    printf("Digite o código da carta:\n");
    scanf("%s",cod1);
    printf("Digite a cidade da carta:\n");
    scanf("%s",cidade1);
    printf("Digite a popução:\n");
    scanf("%d",&populacao1);
    printf("Digite a área:\n");
    scanf("%f",&area1);
    printf("Digite o pib:\n");
    scanf("%f",&pib1);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d",&pontos_t1);
    
    /*Após a entrada de cada carta o programa exibe os dados de forma legivel em que o usuário final consiga entender*/
    printf(" Carta 1:\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População:%d\n Área: %f km²\n PIB: %f bilhões de reais\n Numero de pontos Turísticos: %d \n Densidade Populacional: %f hab/km² \nPIB per Capita: %d reais",estado1, cod1,cidade1, populacao1, area1,  pib1, pontos_t1);
 
    /*Inicia-se aqui a coleta dos dados da segunda carta*/
    printf("\nÓtimo! Agora vamos cadastrar a segunda carta!\n");

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
    
    /*Exibição dos dados da segunda carta*/
    printf("Carta 2:\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População:%d\n Área: %f km²\n PIB: %f bilhões de reais\n Numero de pontos Turísticos: %d \n",estado2, cod2,cidade2, populacao2, area2,  pib2, pontos_t2);
 
    
  
        
  
   

    return 0;
}
