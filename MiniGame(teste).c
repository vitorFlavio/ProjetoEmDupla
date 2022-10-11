#include <stdio.h>
#include <stdlib.h>

int main () {

    //IMPLEMENTAÇÃO DE UM MINI GAME...
                
            


            //variaveis do mini game

            int n,v=10,valorUsu,acertos=0,erros=0,tipo3,i;
            int valor1mini[n],valor2mini[n],resultado[n];

            printf("Informe a quantidade de tentativas que você quer no mini game\n");
            scanf("%d",&n);
            printf("Informe ate qual valor vc deseja nas operações\n");
            scanf("%d",&v);
            printf("Escolha o tipo de operação que deseja no mini game\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão");



            srand(time(NULL));


            tipo3=rand()%4;
        


            switch (tipo3){

            case 1:


                // realiza a operação de soma
               
                break;

            case 2:
            
           

                // Realiza a operação de subtração
            
            case 3:

                // Realiza a operação de multiplicação
              

                break;

            case 4:
                 
               // Realiaza a operação de divisão

                break;


            default:
                break;
            }

           
        






            for(i=0;i<n;i++){

            valor1mini[i]=rand()%v;
            valor2mini[i]=rand()%v;

            }

            for(i=0;i<n;i++){

            printf("Quanto é %d vezes %d\n",valor1mini[i],valor2mini[i]);
            scanf("%d",&valorUsu);

            resultado[i]=valor1mini[i]*valor2mini[i];



            if(resultado[i]==valorUsu){

                printf("PARABÉNS VOCÊ ACERTOU!\n");

                acertos++;
            
            }else{

                printf("VOCÊ ERROU!!!\n");
                printf("A resposta correta era %d",resultado[i]);


                erros++;

            }
             printf("\n");

            }
            printf("\n");

            printf("Em %d tentativas você obteve:\n%d acertos\n%d erros\n0",n,acertos,erros);

        
        
        printf("\n");
        printf("...............................................................................................................\n");





    return 0;
}