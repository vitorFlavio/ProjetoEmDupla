#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float soma(float valor1, float valor2);
float subtracao(float valor1, float valor2);
float multiplicacao(float valor1, float valor2);
float divisao(float valor1, float valor2);
int potencia(float valor1, float valor2);

void main()
{

    // Variaveis
    char nome[99];
    int opcao = 1, i;

    // Interface
    printf("=============================================================================================================\n");
    printf("..............................................PROGRAMA DE OPERAÇÕES.........................................\n");
    printf("...................................................BEM VINDO................................................\n");
    printf("=============================================================================================================\n");

    printf("Qual o seu nome?\n");
    scanf(" %[^\n]s", &nome);
    fflush(stdin);
    system("clear");
    printf("=============================================================================================================\n");
    printf("\n");

    printf("%s digite uma das opções abaixo:\n\n1.Tabuada\n2.Calculadora\n3.Mini Game\n4.Multiplicação de Matrizes\n0.Sair\n\n", nome);
    printf("=============================================================================================================\n");
    scanf("%d", &opcao);
    system("clear");

    // Gerencia as opções
    while (opcao != 0)
    {
        int opcao2 = 1;

        if (opcao == 1)
        {
            //TABUADA...

            while (opcao2 == 1)
            {

                int valorTabuada, tabuada, tipoTab, opcao2 = 1;
                float resultadoTab;
                float valor1 = 0, valor2 = 0;
                
                //Interface da tabuada
                printf("######################################################################################################################\n");
                printf("Informe ate qual valor vc quer a execução da tabuada:\n");
                scanf("%d", &valorTabuada);

                printf("Informe a tabuada:\n");
                scanf("%d", &tabuada);

                printf("Escolha o tipo de operação:\n1.Soma.\n2.Subtração.\n3.Multiplicação.\n4.Divisão.\n");
                printf("######################################################################################################################\n");
                scanf("%d", &tipoTab);
                system("clear");

                switch (tipoTab)
                {

                case 1:

                    printf("__________________________TABUADA DA SOMA DO %d________________________________\n\n", tabuada);

                    for (i = 0; i <= valorTabuada; i++)
                    {
                        valor1 = i;
                        valor2 = tabuada;

                        resultadoTab = soma(valor1, valor2);

                        printf("|\t");
                        printf(" %.0f + %.0f = %.0f", valor1, valor2, resultadoTab);
                        printf("\t|\n");
                    }

                    break;

                case 2:

                    printf("__________________________TABUADA DA SUBTRAÇÃO DO %d________________________________\n\n", tabuada);
                    for (i = valorTabuada; i >= 0; i--)
                    {
                        valor1 = i;
                        valor2 = tabuada;

                        resultadoTab = subtracao(valor1, valor2);

                        printf("|\t");
                        printf(" %.0f - %.0f = %.0f", valor1, valor2, resultadoTab);
                        printf("\t|\n");
                    }
                    break;

                case 3:

                    printf("__________________________TABUADA DA MULTIPLICAÇÃO DO %d________________________________\n\n", tabuada);
                    for (i = 0; i <= valorTabuada; i++)
                    {
                        valor1 = i;
                        valor2 = tabuada;

                        resultadoTab = multiplicacao(valor1, valor2);
                        printf("|\t");
                        printf(" %.0f x %0.f = %.0f", valor1, valor2, resultadoTab);
                        printf("\t|\n");
                    }
                    break;

                case 4:

                    printf("__________________________TABUADA DA DIVISÃO INTEIRA DO %d________________________________\n\n", tabuada);
                    for (i = valorTabuada; i >= 0; i--)
                    {
                        valor1 = i;
                        valor2 = tabuada;

                        resultadoTab = divisao(valor1, valor2);

                        if (i % tabuada == 0)
                        {
                            printf("|\t");
                            printf(" %.0f : %.0f = %.0f", valor1, valor2, resultadoTab);
                            printf("\t|\n");
                        }
                    }
                    break;

                default:
                    break;
                }

                printf("\n\n");
                printf("...........................................................................................................................\n");
                printf("%s deseja informar uma nova tabuada?:\nPra sim digite 1.\nPra sair digite qualquer outro valor\n", nome);
                printf("...........................................................................................................................\n");
                scanf("%d", &opcao2);
                system("clear");

                if (opcao2 != 1)
                {
                    break;
                }
            }
        }
        if (opcao == 2)
        {
            //CALCULADORA...

            while (opcao2 == 1)
            {
                //variaveis da calculadora
                char tipoCal;
                int i, pot = 1, opcao2 = 1;
                float valor1, valor2, resultadoCal = 0;

                //Interface da calculadora
                printf("#####################################################################################################\n");
                printf("Escolha o tipo de operação:\nOBS:\n+ --> Soma\n- --> Subtração\nx --> Multiplicação\n: --> Divisão\n^ --> Potenciação\n");
                printf("#####################################################################################################\n");
                scanf(" %[^\n]c", &tipoCal);
                system("clear");

                printf("-->");
                scanf("%f", &valor1);
                printf("%c\n", tipoCal);
                printf("-->");
                scanf("%f", &valor2);
                printf("\n");

                switch (tipoCal)
                {

                case '+':

                    resultadoCal = soma(valor1, valor2);

                    printf(">>> %.2f + %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case '-':

                    resultadoCal = subtracao(valor1, valor2);

                    printf(">>> %.2f - %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case 'x':

                    resultadoCal = multiplicacao(valor1, valor2);

                    printf(">>> %.2f x %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case ':':

                    resultadoCal = divisao(valor1, valor2);

                    printf(">>> %.2f : %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case '^':

                    resultadoCal = potencia(valor1, valor2);

                    if (resultadoCal == 0)
                    {
                        printf("ERRO\n");
                    }
                    else
                    {
                        printf(">>> %.0f ^ %.0f = %.0f\n", valor1, valor2, resultadoCal);
                    }

                    break;

                default:
                    break;
                }

                printf("\n\n");
                printf("...........................................................................................................................\n");
                printf("%s deseja realizar nova operação?\nPra sim digite 1.\nDigite qualquer outro valor para sair.\n", nome);
                printf("...........................................................................................................................\n");
                scanf("%d", &opcao2);
                system("clear");

                if (opcao2 != 1)
                {
                    break;
                }
            }
        }
        if (opcao == 3)
        {
            //MINI GAME...

            while (opcao2 == 1)
            {
                // variaveis do mini game
                int tentativas, valorAleatorio, valorUsu, acertos = 0, erros = 0, opcao2 = 1;
                char tipoGame;

                //Interface do mini game
                printf("######################################################################################################################\n");
                printf("Informe a quantidade de tentativas que você quer no mini game\n");
                scanf("%d", &tentativas);
                printf("Informe ate qual valor vc deseja nas operações\n");
                scanf("%d", &valorAleatorio);
                printf("\n");
                printf("Escolha o tipo de operação\n");
                printf("OBS:\n+ --> Soma\n- --> Subtração\nx --> Multiplicação\n");
                printf("######################################################################################################################\n");
                scanf(" %[^\n]c", &tipoGame);
                system("clear");

                float valor1mini[tentativas], valor2mini[tentativas], resultado[tentativas];

                srand(time(NULL));

                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                // Gerador de valores aleatorios
                for (i = 0; i < tentativas; i++)
                {
                    valor1mini[i] = rand() % valorAleatorio;
                    valor2mini[i] = rand() % valorAleatorio;
                }

                for (i = 0; i < tentativas; i++)
                {
                    // respostas do usuario
                    printf(">> Quanto é %.0f %c %.0f ?\n", valor1mini[i], tipoGame, valor2mini[i]);
                    printf("Sua resposta: ");
                    scanf("%d", &valorUsu);

                    switch (tipoGame)
                    {

                    case '+':

                        resultado[i] = soma(valor1mini[i], valor2mini[i]);

                        break;

                    case '-':

                        resultado[i] = subtracao(valor1mini[i], valor2mini[i]);

                        break;

                    case 'x':
                        resultado[i] = multiplicacao(valor1mini[i], valor2mini[i]);

                        break;

                    default:
                        break;
                    }

                    // verficação do resultado
                    if (resultado[i] == valorUsu)
                    {
                        printf("\n");
                        printf("PARABÉNS VOCÊ ACERTOU!!! :)\n");
                        printf("\n");
                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                        acertos++;
                    }
                    else
                    {
                        printf("\n");
                        printf("VOCÊ ERROU :(\n\n");
                        printf("A resposta correta era %.0f", resultado[i]);
                        printf("\n");
                        printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                        erros++;
                    }
                    printf("\n");
                }

                system("clear");
                printf(":::::::::::::::::::::::::::::::::::::   PLACAR   ::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\n");

                printf("Em %d tentativas você obteve:\n\n%d acertos\n%d erros\n", tentativas, acertos, erros);
                printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                printf("\n\n");
                printf("...........................................................................................................................\n");
                printf("%s deseja jogar novamente?\nPra sim digite 1.\nDigite qualquer outro valor para sair.\n", nome);
                printf("...........................................................................................................................\n");
                scanf("%d", &opcao2);
                system("clear");

                if (opcao2 != 1)
                {
                    break;
                }
            }
        }
        else if (opcao == 4)
        {
            while (opcao2 == 1)
            {

                int linhaA, colunaA, linhaB, colunaB, i, j, k;
                int opcao2 = 1;

                printf("######################################################################################################################\n");
                printf("Informe a quntidade de linhas da matriz A : ");
                scanf("%d", &linhaA);
                printf("Informe a quantidade de colunas da matriz A : ");
                scanf("%d", &colunaA);
                printf("Informe a quntidade de linhas da matriz B : ");
                scanf("%d", &linhaB);
                printf("Informe a quantidade de colunas da matriz B : ");
                scanf("%d", &colunaB);
                printf("######################################################################################################################\n");
                system("clear");

                float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizR[linhaA][colunaB], aux = 0;

                if (colunaA == linhaB)
                {
                    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                    for (i = 0; i < linhaA; i++)
                    {
                        for (j = 0; j < colunaA; j++)
                        {
                            printf("\n\n Informe o valor da %d Linha e da %d Coluna da Matriz A: ", i + 1, j + 1);
                            scanf("%f", &matrizA[i][j]);
                        }
                    }

                    printf("\n\n");

                    for (i = 0; i < linhaB; i++)
                    {
                        for (j = 0; j < colunaB; j++)
                        {
                            printf("\n\n Informe o valor da %d Linha e da %d Coluna da  Matriz B: ", i + 1, j + 1);
                            scanf("%f", &matrizB[i][j]);
                        }
                    }
                    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                    system("clear");

                    printf("------------------------------------- Matriz A -------------------------------------------\n\n");

                    for (i = 0; i < linhaA; i++)
                    {
                        for (j = 0; j < colunaA; j++)
                        {
                            printf("%.2f\t|\t", matrizA[i][j]);
                        }
                        printf("\n\n");
                    }

                    printf("------------------------------------  Matriz B -------------------------------------------\n\n");
                    for (i = 0; i < linhaB; i++)
                    {
                        for (j = 0; j < colunaB; j++)
                        {
                            printf("%.2f\t|\t", matrizB[i][j]);
                        }
                        printf("\n\n");
                    }

                    printf("---------------------------------- Multiplicação de AxB -------------------------------------\n\n");

                    for (i = 0; i < linhaA; i++)
                    {
                        for (j = 0; j < colunaB; j++)
                        {

                            matrizR[i][j] = 0;
                            for (k = 0; k < linhaB; k++)
                            {
                                aux += matrizA[i][k] * matrizB[k][j];
                            }

                            matrizR[i][j] = aux;
                            aux = 0;
                        }
                    }

                    for (i = 0; i < linhaA; i++)
                    {
                        for (j = 0; j < colunaB; j++)
                        {
                            printf("%.2f\t|\t", matrizR[i][j]);
                        }
                        printf("\n\n");
                    }
                    printf("\n\n");
                }
                else
                {
                    printf("Nao ha com multiplicar as matrizes dadas :(");
                }

                printf("\n\n");
                printf("...........................................................................................................................\n");
                printf("%s deseja realizar uma nova multiplicação de matrizes?\nPra sim digite 1.\nDigite qualquer outro valor para sair.\n", nome);
                printf("...........................................................................................................................\n");
                scanf("%d", &opcao2);
                system("clear");

                if (opcao2 != 1)
                {
                    break;
                }
            }
        }

        printf("\n");
        printf("=============================================================================================================\n");
        printf("%s digite uma das opções abaixo:\n1.Tabuada\n2.Calculadora\n3.Mini Game\n4.Multiplicação de Matrizes\n0.Sair\n", nome);
        printf("=============================================================================================================\n");
        scanf("%d", &opcao);
        system("clear");
    }
}

float soma(float valor1, float valor2)
{
    return valor1 + valor2;
}

float subtracao(float valor1, float valor2)
{
    return valor1 - valor2;
}

float multiplicacao(float valor1, float valor2)
{
    return valor1 * valor2;
}

float divisao(float valor1, float valor2)
{
    return valor1 / valor2;
}

int potencia(float valor1, float valor2)
{
    int pot = 1;
    if (valor2 >= 0)
    {
        for (int i = 1; i <= valor2; i++)
        {

            pot *= valor1;
        }
        return pot;
    }
    else
    {
        return 0;
    }
}