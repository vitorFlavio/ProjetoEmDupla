#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>
int main(void)
{
    int cont=0;
    int opc=0;
    int AA, BB;
    while(opc!=1){
        srand(time(NULL));
        AA=0 + rand() % (9 - 0);
        BB=0 + rand() % (9 - 0);
        
        printf("%d", AA);
        printf(" X ");
        printf("%d", BB);
        printf(" = ?");
        
        int C;
        float D;
        printf("\nEntre com a resposta: ");
        scanf("%f", &D);
        C=AA*BB;
        if(C==D){
            printf("Correto!");
        }else{
           while(D!=C){
                printf("Errado, tente novamente quando quiser.");
                scanf("%f", &D);
                if(C==D){
                    printf("Correto!");
                }
                cont++;
                if(cont==3){
                    break;
                }
            }
        }
        printf("\nQuer continuar?\n");
        printf("0 = sim; 1 = não");
        scanf("%d", &opc);
    }
    // fonte: http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/#:~:text=Para%20gerar%20um%20n%C3%BAmero%20aleat%C3%B3rio,problema%20bastante%20comum%20em%20programa%C3%A7%C3%A3o.&text=Quando%20esta%20fun%C3%A7%C3%A3o%20%C3%A9%20chamada,0%20e%20a%20constante%20RAND_MAX.
    //
    return 0;

}

