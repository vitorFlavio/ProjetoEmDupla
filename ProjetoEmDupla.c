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
            int tipo2,i;
            float valor1,valor2,resultadoCal=0;
            int pot=1,valor1p,valor2p;

            printf("Escolha o tipo de operação:\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n5.Potenciação\n");
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

                
                printf("Essa multiplicação é a mesma coisa que a soma de:\n");

                 for(i=1;i<valor2;i++){

                    printf("%4.2f+",valor1);


                }

                printf("%4.2f que é igual a %4.2f\n",valor1,resultadoCal);

                printf("Comoa a multiplicação é comutativa o oposto também é válido \n");


                 for(i=1;i<valor1;i++){

                    printf("%4.2f+",valor2);


                }

                printf("%4.2f que é igual a %4.2f\n",valor2,resultadoCal);




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

              case 5:
                
                printf("PONTENCIAÇÃO:\n");
                printf("OBS: INFORME UM NUMERO INTEIRO\n");
                printf("-->");
                scanf("%d", &valor1p);
                printf("OBS: INFORME O EXPOENTE UM INTEIRO POSITIVO...\n");
                printf("elevado a\n");
                scanf("%d", &valor2p);
                printf("\n");

                // Realiza a operação de potencia
                if(valor2p>=0){
                for(i=1;i<=valor2p;i++){

                    pot*=valor1p;


                }

                printf("%d elevado a %d é igual a %d\n",valor1p,valor2p,pot);
                }else{
                    printf("ERRO\n");
                    printf("Essa calculadora só realiza operações com expoente inteiro positivo...\n");
                }

                break;



            default:
                break;
            }

            // printf("%s deseja realizar nova operação:\n1.Sim\n2.Não\n",nome);
            // scanf("%d",&opcao2);
        }
        /*else if(opcao==3){
             
                IMPLEMENTAÇÃO DE UM MINI GAME...

        }
        */

        printf("...............................................................................................................\n");
    }
    return 0;
}