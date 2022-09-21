#include <stdio.h>
#include <stdlib.h>

// Primeira aplicação do projeto...

int main()
{

    // Variaveis
    char nome[99];
    int opcao = 1, valorTabuada, tabuada, i, resultado = 0, tipo, opcao2 = 1;
    ;

    // Interface
    printf("..........PROGRAMA DE OPERAÇÕES............\n");
    printf("................BEM VINDO...................\n");

    printf("Qual o seu nome?\n");
    scanf("%s", nome);

    // Gerencia as opções
    while (opcao != 0)
    {

        // Outras opções seram adicionadas futuramente...

        printf("%s digite uma das opções abaixo:\n1.Tabuada\n2.Calculadora\n0.Sair\n", nome);
        scanf("%d", &opcao);

        // parte da tabuada

        if (opcao == 1)
        {

            printf("Informe ate qual valor vc quer a execução da tabuada:\n");
            scanf("%d", &valorTabuada);

            printf("Informe a tabuada:\n");
            scanf("%d", &tabuada);

            printf("Escolha o tipo de operação:\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n");
            scanf("%d", &tipo);

            switch (tipo)
            {

            case 1:

                printf("SOMA.....\n");
                for (i = 0; i <= valorTabuada; i++)
                {

                    resultado = i + tabuada;

                    printf("%d+%d=%d\n", i, tabuada, resultado);
                }
                break;

            case 2:

                printf("SUBTRAÇÃO.....\n");
                for (i = valorTabuada; i >= 0; i--)
                {

                    resultado = i - tabuada;

                    printf("%d-%d=%d\n", i, tabuada, resultado);
                }
                break;

            case 3:

                printf("MULTIPLICAÇÃO.....\n");
                for (i = 0; i <= valorTabuada; i++)
                {

                    resultado = i * tabuada;

                    printf("%dx%d=%d\n", i, tabuada, resultado);
                }
                break;

            case 4:

                printf("Divisão.....\n");
                for (i = valorTabuada; i >= 0; i--)
                {

                    resultado = i / tabuada;

                    printf("%d/%d=%d\n", i, tabuada, resultado);
                }
                break;

            default:
                break;
            }

            // printf("%s deseja realizar nova operação:\n1.Sim\n2.Não\n",nome);
            // scanf("%d",&opcao2);
        }
        else if (opcao == 2){

            // PARTE DA TABUADA
            int tipo2;
            float valor1, valor2,resultadoCal = 0;

            printf("Escolha o tipo de operação:\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n");
            scanf("%d", &tipo2);

            switch (tipo2)
            {

            case 1:

                // INterface do usuario da calculadora
                printf("SOMA:\n");
                printf("-->");
                scanf("%f", &valor1);
                printf("mais\n");
                scanf("%f", &valor2);
                printf("\n");

                // realiza a operação de soma
                resultadoCal = valor1 + valor2;

                printf("%4.2f+%4.2f=%4.2f\n", valor1, valor2, resultadoCal);

                break;

            case 2:

                printf("SUBTRAÇÃO:\n");
                printf("-->");
                scanf("%f", &valor1);
                printf("menos\n");
                scanf("%f", &valor2);
                printf("\n");

                // Realiza a operação de subtração
                resultadoCal = valor1 - valor2;

                printf("%4.2f-%4.2f=%4.2f\n", valor1, valor2, resultadoCal);
                break;

            case 3:

                printf("MULTIPLICAÇÃO:\n");
                printf("-->");
                scanf("%f", &valor1);
                printf("vezes\n");
                scanf("%f", &valor2);
                printf("\n");

                // Realiza a operação de multiplicação
                resultadoCal = valor1 * valor2;

                printf("%4.2fx%4.2f=%4.2f\n", valor1, valor2, resultadoCal);

                break;

            case 4:

                printf("DIVISÃO:\n");
                printf("-->");
                scanf("%f", &valor1);
                printf("dividido por\n");
                scanf("%f", &valor2);
                printf("\n");

                // Realiza a operação de divisão
                resultadoCal = valor1 / valor2;

                printf("%4.2f/%4.2f=%4.2f\n", valor1, valor2, resultadoCal);

                break;

            default:
                break;
            }

            // printf("%s deseja realizar nova operação:\n1.Sim\n2.Não\n",nome);
            // scanf("%d",&opcao2);
        }

        printf("...............................................................................................................\n");
    }
    return 0;
}