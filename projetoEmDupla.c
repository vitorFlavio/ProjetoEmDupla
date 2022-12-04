#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float soma(float valor1, float valor2);
float subtracao(float valor1, float valor2);

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

    printf("%s digite uma das opções abaixo:\n1.Tabuada\n2.Calculadora\n3.Mini Game\n4.Multiplicação de Matrizes\n0.Sair\n", nome);
    printf("=============================================================================================================\n");
    scanf("%d", &opcao);
    system("clear");

    // Gerencia as opções
    while (opcao != 0)
    {
        int opcao2 = 1;

        // Outras opções seram adicionadas futuramente...

        if (opcao == 1)
        {
            // PARTE DA TABUADA
            while (opcao2 == 1)
            {

                int valorTabuada, tabuada, tipo, opcao2 = 1;
                float resultado;
                float valor1 = 0, valor2 = 0;

                printf("=============================================================================================================\n");
                printf("Informe ate qual valor vc quer a execução da tabuada:\n");
                scanf("%d", &valorTabuada);

                printf("Informe a tabuada:\n");
                scanf("%d", &tabuada);

                printf("Escolha o tipo de operação:\n1.Soma.\n2.Subtração.\n3.Multiplicação.\n4.Divisão.\n");
                printf("=============================================================================================================\n");
                scanf("%d", &tipo);

                float resultadoD = 0;

                switch (tipo)
                {

                case 1:

                    printf("__________________________TABUADA DA SOMA DO %d________________________________\n", tabuada);

                    for (i = 0; i <= valorTabuada; i++)
                    {
                        valor1 = i;
                        valor2 = tabuada;

                        resultado = soma(valor1, valor2);

                        printf("|\t");
                        printf(" %.0f + %.0f = %.0f", valor1, valor2, resultado);
                        printf("\t|\n");
                    }

                    break;

                case 2:

                    printf("__________________________TABUADA DA SUBTRAÇÃO DO %d________________________________\n", tabuada);
                    for (i = valorTabuada; i >= 0; i--)
                    {
                        valor1 = i;
                        valor2 = tabuada;

                        resultado = subtracao(valor1, valor2);

                        printf("|\t");
                        printf(" %.0f - %.0f = %.0f", valor1, valor2, resultado);
                        printf("\t|\n");
                    }
                    break;

                case 3:

                    printf("__________________________TABUADA DA MULTIPLICAÇÃO DO %d________________________________\n", tabuada);
                    for (i = 0; i <= valorTabuada; i++)
                    {

                        resultado = i * tabuada;
                        printf("|\t");
                        printf(" %d x %d = %d", i, tabuada, resultado);
                        printf("\t|\n");
                    }
                    break;

                case 4:

                    printf("__________________________TABUADA DA DIVISÃO INTEIRA DO %d________________________________\n", tabuada);
                    for (i = valorTabuada; i >= 0; i--)
                    {

                        resultadoD = (float)i / (float)tabuada;

                        if (i % tabuada == 0)
                        {
                            printf("|\t");
                            printf(" %d : %d = %.0f", i, tabuada, resultadoD);
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

            // complito desse wlhile com o terceiro if...
            while (opcao2 == 1)
            {
                //  PARTE DA CALCULADORA:
                printf("#####################################################################################################\n");
                // variaveis calculaddora
                int tipo2, i, resto = 0, valor1r = 0, valor2r = 0, resR = 0, opcao2 = 1;
                float valor1, valor2, resultadoCal = 0;
                int pot = 1, valor1p, valor2p;

                printf("Escolha o tipo de operação:\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n5.Potenciação\n");
                printf("#####################################################################################################\n");
                scanf("%d", &tipo2);

                switch (tipo2)
                {

                case 1:

                    // INterface do usuario da calculadora
                    printf("SOMA:\n");
                    printf("-->");
                    scanf("%f", &valor1);
                    printf("mais\n");
                    printf("-->");
                    scanf("%f", &valor2);
                    printf("\n");

                    // realiza a operação de soma
                    resultadoCal = valor1 + valor2;

                    printf(">>> %.2f + %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case 2:

                    printf("SUBTRAÇÃO:\n");
                    printf("-->");
                    scanf("%f", &valor1);
                    printf("menos\n");
                    printf("-->");
                    scanf("%f", &valor2);
                    printf("\n");

                    // Realiza a operação de subtração
                    resultadoCal = valor1 - valor2;

                    printf(">>> %.2f - %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case 3:

                    printf("MULTIPLICAÇÃO:\n");
                    printf("-->");
                    scanf("%f", &valor1);
                    printf("vezes\n");
                    printf("-->");
                    scanf("%f", &valor2);
                    printf("\n");

                    // Realiza a operação de multiplicação
                    resultadoCal = valor1 * valor2;

                    printf(">>> %.2f x %.2f = %.2f\n", valor1, valor2, resultadoCal);
                    printf("\n");
                    printf("#########################################################################################\n");
                    printf("OBS:\n");
                    printf("Essa multiplicação é a mesma coisa que a soma de:\n");

                    for (i = 1; i < valor2; i++)
                    {

                        printf(" %.2f + ", valor1);
                    }

                    printf("%.2f que é igual a %.2f\n", valor1, resultadoCal);

                    printf("Como a multiplicação é comutativa o oposto também é válido: \n");

                    for (i = 1; i < valor1; i++)
                    {

                        printf(" %.2f + ", valor2);
                    }

                    printf("%.2f que é igual a %.2f\n", valor2, resultadoCal);
                    printf("#########################################################################################\n");

                    break;

                case 4:

                    printf("DIVISÃO:\n");
                    printf("-->");
                    scanf("%f", &valor1);
                    printf("dividido por\n");
                    printf("-->");
                    scanf("%f", &valor2);
                    printf("\n");

                    // Realiza a operação de divisão
                    resultadoCal = valor1 / valor2;

                    printf(">>> %.2f : %.2f = %.2f\n", valor1, valor2, resultadoCal);

                    break;

                case 5:

                    printf("PONTENCIAÇÃO:\n");
                    printf("OBS: INFORME UM NUMERO INTEIRO\n");
                    printf("-->");
                    scanf("%d", &valor1p);
                    printf("OBS: INFORME O EXPOENTE UM INTEIRO POSITIVO...\n");
                    printf("elevado a\n");
                    printf("-->");
                    scanf("%d", &valor2p);
                    printf("\n");

                    // Realiza a operação de potencia
                    if (valor2p >= 0)
                    {
                        for (i = 1; i <= valor2p; i++)
                        {

                            pot *= valor1p;
                        }

                        printf("%d elevado a %d é igual a %d\n", valor1p, valor2p, pot);
                    }
                    else
                    {
                        printf("ERRO\n");
                        printf("Essa calculadora só realiza operações com expoente inteiro positivo...\n");
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

            while (opcao2 == 1)
            {
                // IMPLEMENTAÇÃO DE UM MINI GAME...

                // variaveis do mini game

                int n, v = 10, valorUsu, acertos = 0, erros = 0, tipo3, opcao2 = 1;
                int valor1mini[n], valor2mini[n], resultado[n];
                printf("######################################################################################################################\n");
                printf("Informe a quantidade de tentativas que você quer no mini game\n");
                scanf("%d", &n);
                printf("Informe ate qual valor vc deseja nas operações\n");
                scanf("%d", &v);
                printf("\n");
                printf("Informe o tipo de operação você deseja realizar\n");
                printf("1.Soma.\n2.Subtração.\n3.Multiplicação.\n");
                printf("######################################################################################################################\n");
                scanf("%d", &tipo3);
                system("clear");

                srand(time(NULL));
                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                switch (tipo3)
                {

                case 1:

                    // realiza a operação de soma

                    for (i = 0; i < n; i++)
                    {

                        valor1mini[i] = rand() % v;
                        valor2mini[i] = rand() % v;
                    }

                    for (i = 0; i < n; i++)
                    {
                        resultado[i] = valor1mini[i] + valor2mini[i];

                        printf(">> Quanto é %d mais %d ?\n", valor1mini[i], valor2mini[i]);
                        printf("Sua resposta: ");
                        scanf("%d", &valorUsu);

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
                            printf("A resposta correta era %d", resultado[i]);
                            printf("\n");
                            printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                            erros++;
                        }
                        printf("\n");
                    }

                    break;

                case 2:

                    // realiza a subtração

                    for (i = 0; i < n; i++)
                    {

                        valor1mini[i] = rand() % v;
                        valor2mini[i] = rand() % v;
                    }

                    for (i = 0; i < n; i++)
                    {

                        printf(">> Quanto é %d menos %d ?\n", valor1mini[i], valor2mini[i]);
                        scanf("%d", &valorUsu);

                        resultado[i] = valor1mini[i] - valor2mini[i];

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
                            printf("A resposta correta era %d", resultado[i]);
                            printf("\n");
                            printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                            erros++;
                        }
                        printf("\n");
                    }

                    break;

                case 3:

                    // Realiza a operação de multiplicação

                    for (i = 0; i < n; i++)
                    {

                        valor1mini[i] = rand() % v;
                        valor2mini[i] = rand() % v;
                    }

                    for (i = 0; i < n; i++)
                    {

                        printf(">> Quanto é %d vezes %d ?\n", valor1mini[i], valor2mini[i]);
                        scanf("%d", &valorUsu);

                        resultado[i] = valor1mini[i] * valor2mini[i];

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
                            printf("A resposta correta era %d", resultado[i]);
                            printf("\n");
                            printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                            erros++;
                        }
                        printf("\n");
                    }

                    break;

                default:
                    break;
                }

                system("clear");
                printf(":::::::::::::::::::::::::::::::::::::   PLACAR   ::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\n");

                printf("Em %d tentativas você obteve:\n%d acertos\n%d erros\n", n, acertos, erros);
                printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

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
        printf("=============================================================================================================\n");
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