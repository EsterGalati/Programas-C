#include<stdio.h>
#define NUMERO_DE_TENTATIVAS 5
int main(){
    // Imprime o cabecalho do nosso jogo.
    printf("*****************************************\n");
    printf("*BEM VINDOS AO NOSSO JOGO DE ADIVINHACAO*\n");
    printf("*****************************************\n");

    int numerosecreto = 42;
    int chute;
    int i; // Variavel para o loop
    for ( i = 1; i <=NUMERO_DE_TENTATIVAS; i++ ){
      
      
   
    
        printf("Tentativa %d de %d\n",i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n",chute);
            if (chute < 0)
            {
            printf("Não pode numeros negativos\n");
            }
            
    
        int acertou = (chute==numerosecreto);
        int maior = chute>numerosecreto;
        int menor = chute<numerosecreto;
        if (acertou){
            printf("Parabens!Voce acertou\n");
            printf("Jogue novamente!!\n");
            break;
        }
        else if (maior){

                printf("Seu chute foi maior do que o numero secreto\n");
            }
        else if (menor){

                printf("Seu numero foi menor do que o numero secreto\n");
        }
        
            
            
        }
        
        printf("FIM DE JOGO!!\n");
        }
   
    
    