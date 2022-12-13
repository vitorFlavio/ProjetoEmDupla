#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
    char nomeJogador[99];
    int cpf;
    int idade;

} cadastro;

float soma(float valor1, float valor2);
float subtracao(float valor1, float valor2);
float multiplicacao(float valor1, float valor2);
float divisao(float valor1, float valor2);
int potencia(float valor1, float valor2);
void operacoesMatrizes(char tipoMat, int linhaA, int colunaA, int linhaB, int colunaB, float matrizA[][colunaA], float matrizB[][colunaB]);

void main()
{

    // Variaveis
    char nome[99];
    int opcao = 1, i;

    FILE *arquivo;
    arquivo = fopen("pontuacao.txt", "a+");

    FILE *historicoTab;
    historicoTab = fopen("historico.txt", "a+");

    // Interface
    printf("=============================================================================================================\n");
    printf("..............................................PROGRAMA DE OPERAÇÕES.........................................\n");
    printf("...................................................BEM VINDO................................................\n");
    printf("=============================================================================================================\n");
    printf("\n\n\n");

    printf(">>> Qual o seu nome?\n");
    scanf(" %[^\n]s", &nome);
    fflush(stdin);
    system("clear");
    printf("=============================================================================================================\n");
    printf("\n");

    printf("%s digite uma das opções abaixo:\n\n1.Tabuada\n2.Calculadora\n3.Mini Game\n0.Sair\n\n", nome);
    printf("=============================================================================================================\n");
    scanf("%d", &opcao);
    system("clear");

    // Gerencia as opções
    while (opcao != 0)
    {
        int opcao2 = 1;

        if (opcao == 1)
        {
            // TABUADA...

            while (opcao2 == 1)
            {

                int valorTabuada, tabuada, opcao2 = 1;
                float resultadoTab;
                float valor1 = 0, valor2 = 0;
                char tipoTab;

                // Interface da tabuada
                printf("######################################################################################################################\n");
                printf("Escolha o tipo de operação:\nOBS:\n+ --> Soma\n- --> Subtração\nx --> Multiplicação\n: --> Divisão\n");
                scanf(" %[^\n]c", &tipoTab);
                printf("Informe ate qual valor vc quer a execução da tabuada:\n");
                scanf("%d", &valorTabuada);
                printf("Informe a tabuada:\n");
                printf("######################################################################################################################\n");
                scanf("%d", &tabuada);
                system("clear");

                printf("__________________________TABUADA DA %c DO %d________________________________\n\n", tipoTab, tabuada);

                for (i = 0; i <= valorTabuada; i++)
                {
                    valor1 = i;
                    valor2 = tabuada;

                    switch (tipoTab)
                    {

                    case '+':

                        resultadoTab = soma(valor1, valor2);

                        break;

                    case '-':

                        resultadoTab = subtracao(valor1, valor2);

                        break;

                    case 'x':

                        resultadoTab = multiplicacao(valor1, valor2);

                        break;

                    case ':':

                        if (i % tabuada == 0)
                        {
                            resultadoTab = divisao(valor1, valor2);

                            printf("|\t");
                            printf(" %.0f %c %.0f = %.0f", valor1, tipoTab, valor2, resultadoTab);
                            printf("\t|\n");
                        }
                        break;

                    default:
                        break;
                    }

                    if (tipoTab == ':')
                    {
                    }
                    else
                    {
                        printf("|\t");
                        printf(" %.0f %c %.0f = %.0f", valor1, tipoTab, valor2, resultadoTab);
                        printf("\t|\n");
                    }
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
            // CALCULADORA...

            while (opcao2 == 1)
            {

                int tipoOperacao = 0, opcao2 = 1;
                char tipoCal;

                printf("######################################################################################################################\n");
                printf("Escolha a opção abaixo\n");
                printf("1.Operações básicas\n2.Operações com matrizes\n");
                printf("######################################################################################################################\n");
                scanf("%d", &tipoOperacao);
                system("clear");

                if (tipoOperacao == 1)
                {

                    // variaveis da calculadora
                    int i, pot = 1;
                    float valor1, valor2, resultadoCal = 0;

                    // Interface da calculadora
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

                        break;

                    case '-':

                        resultadoCal = subtracao(valor1, valor2);

                        break;

                    case 'x':

                        resultadoCal = multiplicacao(valor1, valor2);

                        break;

                    case ':':

                        resultadoCal = divisao(valor1, valor2);

                        break;

                    case '^':

                        resultadoCal = potencia(valor1, valor2);

                        break;

                    default:
                        break;
                    }

                    if (tipoCal == ':' && valor2 == 0)
                    {
                        printf("Não existe divisão por zero\n");
                    }
                    else if (tipoCal == '^')
                    {

                        if (valor2 < 0)
                        {
                            printf("ERRO\n");
                        }
                        else
                        {
                            printf(">>> %.0f ^ %.0f = %.0f\n", valor1, valor2, resultadoCal);
                            fprintf(historicoTab,"%.0f\n",resultadoCal);
                        }
                    }
                    else
                    {
                        printf(">>> %.2f %c %.2f = %.2f\n", valor1, tipoCal, valor2, resultadoCal);
                        fprintf(historicoTab,"%.2f\n",resultadoCal);
                    }
                }
                if (tipoOperacao == 2)

                {
                    char tipoMat;

                    printf("#####################################################################################################\n");
                    printf("Escolha o tipo de operação:\nOBS:\n+ --> Soma\n- --> Subtração\nx --> Multiplicação\n");
                    printf("#####################################################################################################\n");
                    scanf(" %[^\n]c", &tipoMat);
                    system("clear");

                    int linhaA, colunaA, linhaB, colunaB, i, j, k;

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

                    float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], aux = 0;

                    if (colunaA == linhaB && tipoMat == 'x')
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

                        operacoesMatrizes(tipoMat, linhaA, colunaA, linhaB, colunaB, matrizA, matrizB);
                    }
                    else if (linhaA == linhaB && colunaA == colunaB)
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

                        operacoesMatrizes(tipoMat, linhaA, colunaA, linhaB, colunaB, matrizA, matrizB);
                    }
                    else
                    {
                        printf("Nao ha com multiplicar as matrizes dadas :(");
                    }
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
            // MINI GAME...

            while (opcao2 == 1)
            {
                // variaveis do mini game
                int tentativas, valorAleatorio, valorUsu, acertos = 0, erros = 0, opcao2 = 1;
                char tipoGame;
                int salvar, historico, j, y, maiorPontuacao, empate = 0;
                int quantJogadores, indice = 0;

                // Interface do mini game

                printf("=============================================================================================================\n");
                printf("...................................................BEM VINDO............................................\n");
                printf("......................................................AO................................................\n");
                printf("...................................................MINI GAME............................................\n");
                printf("=============================================================================================================\n");
                printf("\n\n\n");

                printf(">>> Informe a quantidade de jogadores que irão participar: ");
                scanf("%d", &quantJogadores);
                system("clear");

                cadastro vetCadastro[quantJogadores];

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
                getchar();

                tentativas *quantJogadores;

                int pontuacao[quantJogadores];
                float valor1mini[tentativas], valor2mini[tentativas], resultado[tentativas];

                srand(time(NULL));

                for (int k = 0; k < quantJogadores; k++)
                {
                    printf("######################################################################################################################\n");
                    printf("Cadastro do %d° jogador\n", (k + 1));
                    printf("Nome:\n");
                    scanf("%[^\n]s", vetCadastro[k].nomeJogador);
                    fflush(stdin);
                    printf("Cpf:\n");
                    scanf("%d", &vetCadastro[k].cpf);
                    printf("Idade:\n");
                    scanf("%d", &vetCadastro[k].idade);
                    fflush(stdin);
                    printf("######################################################################################################################\n");
                    getchar();
                    system("clear");
                }

                printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                // Gerador de valores aleatorios

                for (i = 0; i < quantJogadores; i++)
                {

                    for (j = 0; j < tentativas; j++)
                    {
                        valor1mini[j] = rand() % valorAleatorio;
                        valor2mini[j] = rand() % valorAleatorio;
                    }

                    for (j = 0; j < tentativas; j++)
                    {
                        // respostas do usuario
                        printf(">> %s quanto é %.0f %c %.0f ?\n", vetCadastro[i].nomeJogador, valor1mini[j], tipoGame, valor2mini[j]);
                        printf("Sua resposta: ");
                        scanf("%d", &valorUsu);

                        switch (tipoGame)
                        {

                        case '+':

                            resultado[j] = soma(valor1mini[j], valor2mini[j]);

                            break;

                        case '-':

                            resultado[j] = subtracao(valor1mini[j], valor2mini[j]);

                            break;

                        case 'x':
                            resultado[j] = multiplicacao(valor1mini[j], valor2mini[j]);

                            break;

                        default:
                            break;
                        }

                        // verficação do resultado
                        if (resultado[j] == valorUsu)
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
                            printf("A resposta correta era %.0f", resultado[j]);
                            printf("\n");
                            printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

                            erros++;
                        }
                        printf("\n");
                    }
                    pontuacao[i] = (acertos * valorAleatorio) / (tentativas / quantJogadores);

                    system("clear");
                    printf(":::::::::::::::::::::::::::::::::::::   PLACAR   ::::::::::::::::::::::::::::::::::::::::::::::\n");
                    printf("\n");
                    printf("%s em %d tentativas você obteve:\n\n%d acertos\n%d erros\n", vetCadastro[i].nomeJogador, tentativas, acertos, erros);
                    printf("%s sua pontuação total foi: %d", vetCadastro[i].nomeJogador, pontuacao[i]);
                    printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                    printf("\n\n");

                    printf("...........................................................................................................................\n");
                    printf("%s deseja salvar sua pontuação?\n", vetCadastro[i].nomeJogador);
                    printf("1.sim\n2.Não\n");
                    scanf("%d", &salvar);
                    printf("...........................................................................................................................\n");
                    system("clear");

                    if (salvar == 1)
                    {
                        fprintf(arquivo, "Dados do jogador : %s\nCpf : %d\nIdade : %d\nPontuação total : %d\n\n", vetCadastro[i].nomeJogador, vetCadastro[i].cpf, vetCadastro[i].idade, pontuacao[i]);
                    }

                    acertos = 0;
                    erros = 0;
                }

                maiorPontuacao = pontuacao[0];

                for (int x = 0; x < quantJogadores; x++)
                {
                    if (pontuacao[x] > maiorPontuacao)
                    {
                        maiorPontuacao = pontuacao[x];
                        empate = 0;
                    }
                    for (y = quantJogadores; y > x; y--)
                        if (pontuacao[x] == pontuacao[y])
                        {
                            empate = 1;
                        }
                }

                if (empate == 1)
                {
                    printf("Ocorreu empate.\n");
                }
                else
                {

                    for (int x = 0; x < quantJogadores; x++)
                    {

                        if (pontuacao[x] == maiorPontuacao)
                        {
                            printf("O ganhador foi %s\n", vetCadastro[x].nomeJogador);
                            printf("Parabens!!\n");
                        }
                    }
                }
                /*
                    printf("...........................................................................................................................\n");
                    printf("Deseja ver o historico pontuação?\n");
                    printf("1.sim\n2.Não\n");
                    scanf("%d", &historico);
                    printf("...........................................................................................................................\n");
                    system("clear");

                    if (historico == 1)
                    {

                            while (!feof(arquivo))
                            {
                                fscanf(arquivo, "                   %s\n      %d\n        %d\n                  %d\n\n", vetCadastro[indice].nomeJogador, &vetCadastro[indice].cpf, &vetCadastro[indice].idade, &pontuacao[indice]);
                                printf(arquivo, "Dados do jogador : %s\nCpf : %d\nIdade : %d\nPontuação total : %d\n\n", vetCadastro[indice].nomeJogador, vetCadastro[indice].cpf, vetCadastro[indice].idade, pontuacao[indice]);
                                indice++;
                            }


                    }
                    */

                printf("\n\n");
                printf("...........................................................................................................................\n");
                printf("%s deseja jogar novamente?\nPra sim digite 1.\nDigite qualquer outro valor para sair.\n", nome);
                printf("...........................................................................................................................\n");
                scanf("%d", &opcao2);
                system("clear");

                fclose(arquivo);

                if (opcao2 != 1)
                {
                    break;
                }
            }
        }

        printf("\n");
        printf("=============================================================================================================\n");
        printf("%s digite uma das opções abaixo:\n1.Tabuada\n2.Calculadora\n3.Mini Game\n0.Sair\n", nome);
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

void operacoesMatrizes(char tipoMat, int linhaA, int colunaA, int linhaB, int colunaB, float matrizA[][colunaA], float matrizB[][colunaB])
{
    int i, j, k;
    float matrizR[linhaA][colunaB], aux = 0;

    switch (tipoMat)
    {

    case '+':
        for (i = 0; i < linhaA; i++)
        {
            for (j = 0; j < colunaB; j++)
            {
                matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }

        break;

    case '-':

        for (i = 0; i < linhaA; i++)
        {
            for (j = 0; j < colunaB; j++)
            {
                matrizR[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }

        break;

    case 'x':

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

        break;

    default:
        break;
    }

    printf("Matriz A %c B:\n", tipoMat);

    for (i = 0; i < linhaA; i++)
    {
        printf("|");
        for (j = 0; j < colunaB; j++)
        {
            printf("\t%.2f\t", matrizR[i][j]);
        }
        printf("|\n");
    }
}