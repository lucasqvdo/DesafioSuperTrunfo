
    #include <stdio.h>
    #include <string.h>

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
        char estado1[10];
        char cod1[10];
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
        getchar();

        // utilizado fgets para resolver o problema do espaço em nomes como "São Paulo"
        fgets(cidade1, 20, stdin);
        // removendo o \n adicionado pelo fgets
        cidade1[strcspn(cidade1, "\n")] = 0;
        printf("Digite a popução:\n");
        scanf("%d",&populacao1);
        printf("Digite a área:\n");
        scanf("%f",&area1);
        printf("Digite o pib:\n");
        scanf("%f",&pib1);
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%d",&pontos_t1);

        float dens_p1 = populacao1 / area1;
        float pib_p1 = (pib1 * 1000000000) / populacao1;
        float super_poder1 = populacao1 + area1 + pib1 +pontos_t1;

        /*Após a entrada de cada carta o programa exibe os dados de forma legivel em que o usuário final consiga entender*/
        printf(" Carta 1:\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População:%d\n Área: %f km²\n PIB: %.2f bilhões de reais\n Numero de pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\n", 
            estado1, cod1, cidade1, populacao1, area1, pib1,  pontos_t1, dens_p1, pib_p1);
    
        /*Inicia-se aqui a coleta dos dados da segunda carta*/
        printf("\nÓtimo! Agora vamos cadastrar a segunda carta!\n");

        printf("Digite o estado\n");
        scanf("%s",estado2);
        printf("Digite o código da carta\n");
        scanf("%s",cod2);
        printf("Digite a cidade da carta\n");
        getchar();
        // utilizado fgets para resolver o problema do espaço em nomes como "São Paulo"
        fgets(cidade2, 20, stdin);
        // removendo o \n adicionado pelo fgets
        cidade2[strcspn(cidade2, "\n")] = 0;
        printf("Digite a população:\n");
        scanf("%d",&populacao2);
        printf("Digite a área:\n");
        scanf("%f",&area2);
        printf("Digite o pib:\n");
        scanf("%f",&pib2);
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%d",&pontos_t2);
        
        float dens_p2 = populacao2 / area2;
        float pib_p2 = (pib2 * 1000000000) / populacao2;
        float super_poder2 = populacao2 + area2 + pib2 + pontos_t2;
        
    

        /*Exibição dos dados da segunda carta*/
        printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação:%d\nÁrea: %f km²\nPIB: %.2f bilhões de reais\nNumero de pontos Turísticos: %d \nDensidade populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\n ",estado2, cod2,cidade2, populacao2, area2,  pib2, pontos_t2, dens_p2, pib_p2);
        
    
        /* Criamos uma variavel para armzenar a escolha do usuário*/
        char escolha = 7;
        char atributoescolhido[50]; 
        switch (escolha)
            {
                case 1:
                    strcpy(atributoescolhido, "População"); 
                    break;
                case 2:
                   strcpy(atributoescolhido, "Área"); 
                    break;
                case 3: 
                    strcpy(atributoescolhido, "Pib");
                    break;
                case 4:
                    strcpy(atributoescolhido, "Pontos turísticos"); 
                    break;
                case 5:
                    strcpy(atributoescolhido, "Densidade populacional"); 
                    break;
                case 6:
                    strcpy(atributoescolhido, "Pib per capita"); 
                    break;
                default:
                    strcpy(atributoescolhido, "Super Poder"); 
                    break;
            };


        printf("\n\n     ~ COMPARAÇÃO DAS CARTAS (Atributo: %s ~ \n", atributoescolhido);

        /*Criamos um switch que vai avaliar a escolha e entregar a comparação correta*/
        switch (escolha)
            {
            case 1:
                int resultado_pop = populacao1 > populacao2;
                if (resultado_pop == 1) {
                    printf("População: Carta 1 venceu(1)\n");}  
                    else {
                    printf("População: Carta 2 venceu(0)\n");}

                break;
            case 2:
                int resultado_area = area1 > area2;
                
            
                break;
                
            case 3:
                int resultado_pib = pib1 > pib2;
                if (resultado_pib == 1) 
                    {printf("PIB: Carta 1 venceu(1)\n");}  
                else {printf("PIB: Carta 2 venceu(0)\n");}
                break;
            
            case 4:
                int resultado_pontos = pontos_t1 > pontos_t2;
                if (resultado_pontos == 1) 
                    {printf("Pontos turísticos: 1 venceu(1)\n");}  
                else 
                    {printf("Pontos turiísticos: Carta 2 venceu(0)\n");}
                break;
            
            case 5: 
                int resultado_dens = dens_p1 < dens_p2;
                if (resultado_dens == 1) 
                    {printf("Densidade Populacional: Carta 1 venceu(1)\n");}  
                else 
                    {printf("Densidade Populacional: Carta 2 venceu(0)\n");}
                break;

            case 6:
                int resultado_pip_p = pib_p1 > pib_p2;
                if (resultado_pip_p == 1) 
                    {printf("PIB per Capita: Carta 1 venceu(1)\n");}  
                else 
                    {printf("PIB per Capita: Carta 2 venceu(0)\n");}
                break;

            default:
                int resultad_super_poder = super_poder1 > super_poder2;
                if (resultad_super_poder == 1) 
                    {printf("Super Poder: Carta 1 venceu(1)\n");}  
                else
                    {printf("Super Poder: Carta 2 venceu(0)\n");}
                break;
            };
        
            

        
    
            
    
        printf("\n\n ~ FIM DE JOGO ~ \n\n");

        return 0;
    }
