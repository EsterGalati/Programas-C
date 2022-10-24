#include<stdio.h>
#define NUMERO_DE_TENTATIVAS 5
int main(){
    // Imprime o cabecalho do nosso jogo.
    printf("*****************************************\n");
    printf("*BEM VINDOS AO NOSSO JOGO DE ADIVINHACAO*\n");
    printf("*****************************************\n");

    int numerosecreto = 42;
    int chute;
    int i;
    for ( i = 1; i <=NUMERO_DE_TENTATIVAS; i++ ){
   
    
        printf("Tentativa %d de %d\n",i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n",chute);

    
        int acertou = (chute==numerosecreto);
        if (acertou){
            printf("Parabens!Voce acertou\n");
            printf("Jogue novamente!!\n");
            break;
        }
        else{

            int maior = chute>numerosecreto;
            if (maior){
                printf("Seu chute foi maior do que o numero secreto\n");
            }
            else{
                printf("Seu numero foi menor do que o numero secreto\n");
            }
            
            
        }
        









        }
    printf("FIM DE JOGO!!\n");
    } 
    