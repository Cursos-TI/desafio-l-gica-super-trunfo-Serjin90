/*******************************
logicaSuperTrunfo_Aventureiro.c
********************************/
#include <stdio.h>
#include <string.h> // Para uso de funções de manipulação de strings
#include <locale.h> // Para uso da função 'setlocale' e fazer o programa imprimir caracteres especiais corretamente

int ctrl1, ctrl2, opt1, opt2; // Variáveis para uso de controle de loop e seletor de opções
int Populacao1, Pts_Turisticos1, Populacao2, Pts_Turisticos2; 
float AreaCidade1, AreaCidade2, PIBCidade1, PIBCidade2, Densidade1, Densidade2, SuperP1, SuperP2;
char Estado1, Cdg_Carta1[4], Nome_Cidade1[20], Estado2, Cdg_Carta2[4], Nome_Cidade2[20];

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");// Define pt_BR para o formato das impressões no console, dados de variáveis e datas.
    printf("\n\t\t|=================================|\n");
    printf("\t\t|      SUPER TRUNFO - PAÍSES      |\n");
    printf("\t\t|=================================|\n\n");
    printf("\n\n\n\t\t      BEM VINDO À DIVERSÃO!!!\n\n\n\n");
    printf("\n \t\t|=================================|\n");
    printf(" \t\t| DESENVOLVIDO POR SÉRGIO MACHADO |\n");
    printf(" \t\t|=================================|\n\n");
    system("pause");
/*O trecho acima imprime uma tela de início/boas-vindas do jogo*/
    ctrl1 = 1;
    while(ctrl1 != 0){
        system("cls"); // Limpa a tela para a próxima impressão (tela de MENU PRINCIPAL)
        printf("\n\t\t|==================================|\n");
        printf("\t\t|      SUPER  TRUNFO - PAÍSES      |\n");
        printf("\t\t|          MENU PRINCIPAL          |\n");
        printf("\t\t|==================================|\n\n\n\n");
        printf("\n\n\t\t DIGITE O NÚMERO DA OPÇÃO DESEJADA\n\n\n");
        printf("\t\t (1)    >CADASTRO DE CARTAS<\n");
        printf("\t\t (2)    >JOGAR<\n");
        printf("\t\t (3)    >SAIR DO JOGO<\n");
        scanf("%1d", &opt1);
        scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
        switch(opt1){
            case 1:
                system("cls");// Limpa a tela para a próxima impressão (tela de CADASTRO)
                printf("\n\t\t|===============================|\n");
                printf("\t\t|CADASTRO DE CARTAS SUPER TRUNFO|\n");
                printf("\t\t|===============================|\n\n\n");
                printf("Cadastro CARTA 1\n");
                printf("Digite o Estado, com 1 caractere apenas. Pressione ENTER para confirmar.\n");
                printf("[Digite uma letra (entre A e H)]\n");
                scanf("%c", &Estado1);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite o código da carta, com 3 caracteres. Pressione ENTER para confirmar.\n");
                printf("[Digite uma letra (entre A e H) + 0 + dígito sequencial da carta (entre 1 e 4)]\n");
                scanf("%3s", Cdg_Carta1);
                scanf("%*c");/* Limpa o '\n' do buffer de entrada de dados para o 'fgets' abaixo. */
                printf("Digite o nome da Cidade. Pressione ENTER para confirmar.\n");
                fgets(Nome_Cidade1, sizeof(Nome_Cidade1), stdin);
                Nome_Cidade1[strcspn(Nome_Cidade1, "\n")] = '\0'; // Retira da string o newline lido pelo 'fgets'
                printf("Digite o número total de habitantes da cidade. Pressione ENTER para confirmar.\n");
                scanf("%d", &Populacao1);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite a Área total da cidade, em km2. Pressione ENTER para confirmar.\n");
                scanf("%f", &AreaCidade1);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite o PIB da cidade, em milhões de Reais. Pressione ENTER para confirmar.\n");
                scanf("%f", &PIBCidade1);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite o número de pontos turísticos da cidade. Pressione ENTER para confirmar.\n");
                scanf("%d", &Pts_Turisticos1); 
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
	
	        printf("\nCadastro CARTA 2\n");
                printf("Digite o Estado, com 1 caractere apenas. Pressione ENTER para confirmar.\n");
                printf("[Digite uma letra (entre A e H)]\n");
                scanf("%c", &Estado2);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite o código da carta, com 3 caracteres. Pressione ENTER para confirmar.\n");
                printf("[Digite uma letra (entre A e H) + 0 + dígito sequencial da carta (entre 1 e 4)]\n");
                scanf("%3s", Cdg_Carta2);
                scanf("%*c");/* Limpa o '\n' do buffer de entrada de dados para o 'fgets' abaixo. */
                printf("Digite o nome da Cidade. Pressione ENTER para confirmar.\n");
                fgets(Nome_Cidade2, sizeof(Nome_Cidade2), stdin);
                Nome_Cidade2[strcspn(Nome_Cidade2, "\n")] = '\0';
                printf("Digite o número total de habitantes da cidade. Pressione ENTER para confirmar.\n");
                scanf("%d", &Populacao2);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite a Área total da cidade, em km2. Pressione ENTER para confirmar.\n");
                scanf("%f", &AreaCidade2);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite o PIB da cidade, em milhões de Reais. Pressione ENTER para confirmar.\n");
                scanf("%f", &PIBCidade2);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                printf("Digite o número de pontos turísticos da cidade. Pressione ENTER para confirmar.\n");
                scanf("%d", &Pts_Turisticos2);
                scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                
                printf("\n\tCARTAS CADASTRADAS COM SUCESSO!!!\n\n");
                system("pause");
                break;
                
            case 2:
                ctrl2 = 1;
                while(ctrl2 != 0){
                    system("cls"); // Limpa a tela para a próxima impressão (tela de ESCOLHA DE ATRIBUTOS)
                    printf("\n\t\t|==================================|\n");
                    printf("\t\t|      SUPER  TRUNFO - PAÍSES      |\n");
                    printf("\t\t|==================================|\n\n\n");
                    printf("\n\t\t DIGITE O NÚMERO DA OPÇÃO DESEJADA\n");
                    printf("\t\t ESCOLHA O ATRIBUTO E BOA SORTE!\n\n\n");
                    printf("\t\t (1)    >POPULAÇÃO<\n");
                    printf("\t\t (2)    >ÁREA<\n");
                    printf("\t\t (3)    >PIB<\n");
                    printf("\t\t (4)    >N° DE PONTOS TURÍSTICOS<\n");
                    printf("\t\t (5)    >DENSIDADE DEMOGRÁFICA<\n");
                    printf("\t\t (6)    >SUPER PODER<\n");
                    printf("\t\t (7)    >VOLTAR AO MENU PRINCIPAL<\n");
                    scanf("%1d", &opt2);
                    scanf("%*c");// Limpa buffer para a próxima instrução de entrada de dados
                    switch(opt2){
                        case 1:
                            system("cls"); // Limpa a tela para a impressão do item escolhido
                            printf("\n\tATRIBUTO: POPULAÇÃO\n\n");
                            printf("\n\tCARTA %s VS CARTA %s\n\n\n", Cdg_Carta1, Cdg_Carta2);
                            printf("\t%s %s tem %d habitantes\n", Cdg_Carta1, Nome_Cidade1, Populacao1);
                            printf("\t%s %s tem %d habitantes\n\n", Cdg_Carta2, Nome_Cidade2, Populacao2);
                            if(Populacao1 == Populacao2)
                                printf("\n\tEMPATE!!!\n\n");
                            else if(Populacao1 > Populacao2)
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta1, Nome_Cidade1);
                            else
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta2, Nome_Cidade2);
                            system("pause");
                            break;
                        case 2:
                            system("cls"); // Limpa a tela para a impressão do item escolhido
                            printf("\n\tATRIBUTO: ÁREA\n\n"); 
                            printf("\n\tCARTA %s VS CARTA %s\n\n\n", Cdg_Carta1, Cdg_Carta2);
                            printf("\t%s %s tem %.3f km2 de área total \n", Cdg_Carta1, Nome_Cidade1, AreaCidade1);
                            printf("\t%s %s tem %.3f km2 de área total \n\n", Cdg_Carta2, Nome_Cidade2, AreaCidade2);
                            if(AreaCidade1 == AreaCidade2)
                                printf("\n\tEMPATE!!!\n\n");
                            else if(AreaCidade1 > AreaCidade2)
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta1, Nome_Cidade1);
                            else
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta2, Nome_Cidade2);
                            system("pause");
                            break;
                        case 3:
                            system("cls"); // Limpa a tela para a impressão do item escolhido
                            printf("\n\tATRIBUTO: PIB\n\n");
                            printf("\n\tCARTA %s VS CARTA %s\n\n\n", Cdg_Carta1, Cdg_Carta2);
                            printf("\t%s %s possui %.3f milhões de Reais\n", Cdg_Carta1, Nome_Cidade1, PIBCidade1);
                            printf("\t%s %s possui %.3f milhões de Reais\n\n", Cdg_Carta2, Nome_Cidade2, PIBCidade2);
                            if(PIBCidade1 == PIBCidade2)
                                printf("\n\tEMPATE!!!\n\n");
                            else if(PIBCidade1 > PIBCidade2)
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta1, Nome_Cidade1);
                            else
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta2, Nome_Cidade2);
                            system("pause");
                            break;
                        case 4:
                            system("cls"); // Limpa a tela para a impressão do item escolhido
                            printf("\n\tATRIBUTO: N° DE PONTOS TURÍSTICOS\n\n");
                            printf("\n\tCARTA %s VS CARTA %s\n\n\n", Cdg_Carta1, Cdg_Carta2);
                            printf("\t%s %s tem %d pontos diferentes\n", Cdg_Carta1, Nome_Cidade1, Pts_Turisticos1);
                            printf("\t%s %s tem %d pontos diferentes\n\n", Cdg_Carta2, Nome_Cidade2, Pts_Turisticos2);
                            if(Pts_Turisticos1 == Pts_Turisticos2)
                                printf("\n\tEMPATE!!!\n\n");
                            else if(Pts_Turisticos1 > Pts_Turisticos2)
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta1, Nome_Cidade1);
                            else
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta2, Nome_Cidade2);
                            system("pause");
                            break;
                        case 5:
                            system("cls"); // Limpa a tela para a impressão do item escolhido
                            Densidade1 = (float)Populacao1/AreaCidade1;
                            Densidade2 = (float)Populacao2/AreaCidade2;
                            printf("\n\tATRIBUTO: DENSIDADE DEMOGRÁFICA\n\n");
                            printf("\n\tCARTA %s VS CARTA %s\n\n\n", Cdg_Carta1, Cdg_Carta2);
                            printf("\t%s %s tem %.3f hab/km2\n", Cdg_Carta1, Nome_Cidade1, Densidade1);
                            printf("\t%s %s tem %.3f hab/km2\n\n", Cdg_Carta2, Nome_Cidade2, Densidade2);
                            if(Densidade1 == Densidade2)
                                printf("\n\tEMPATE!!!\n\n");
                            else if(Densidade1 < Densidade2)
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta1, Nome_Cidade1);
                            else
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta2, Nome_Cidade2);
                            system("pause");
                            break;
                        case 6:
                            system("cls"); // Limpa a tela para a impressão do item escolhido
                            Densidade1 = (float)Populacao1 / AreaCidade1;
                            Densidade2 = (float)Populacao2 / AreaCidade2;
                            SuperP1 = 1/Densidade1 + (float)Populacao1 + AreaCidade1 + PIBCidade1 + (float)Pts_Turisticos1;
                            SuperP2 = 1/Densidade2 + (float)Populacao2 + AreaCidade2 + PIBCidade2 + (float)Pts_Turisticos2;
                            printf("\n\tATRIBUTO: SUPER PODER\n\n");
                            printf("\n\tCARTA %s VS CARTA %s\n\n\n", Cdg_Carta1, Cdg_Carta2);
                            printf("\t%s %s tem Super Poder %.3f\n", Cdg_Carta1, Nome_Cidade1, SuperP1);
                            printf("\t%s %s tem Super Poder %.3f\n\n", Cdg_Carta2, Nome_Cidade2, SuperP2);
                            if(SuperP1 == SuperP2)
                                printf("\n\tEMPATE!!!\n\n");
                            else if(SuperP1 > SuperP2)
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta1, Nome_Cidade1);
                            else
                                printf("\n\tCARTA %s (%s) VENCEU!!!\n\n", Cdg_Carta2, Nome_Cidade2);
                            system("pause");
                            break;
                        case 7:
                            ctrl2 = 0;// Altera o valor para mudar o resultado da expressão 
                                      // de controle e sair do loop interno.
                            break;
                        default:
                            printf("\n\tOPÇÃO INCORRETA.\n\tPRESSIONE ENTER E ESCOLHA NOVAMENTE.\n\n");
                            system("pause");
                            break;
                    }
                }
                break;
            
            case 3:
                ctrl1 = 0;// Altera o valor para mudar o resultado da expressão de controle e sair do loop externo.
                break;
            default:
                printf("\n\tOPÇÃO INCORRETA.\n\tPRESSIONE ENTER E ESCOLHA NOVAMENTE.\n\n");
                system("pause");
                break;
        }
    }
    return 0;
}
