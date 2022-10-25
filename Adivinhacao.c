#include<stdio.h>


int main(){
    // Imprime o cabecalho do nosso jogo.
   
    printf("*****************************************\n");
    printf("*BEM VINDOS AO NOSSO JOGO DE ADIVINHACAO*\n");
    printf("*****************************************\n");
    printf("Voce iniciara o jogo com 1000 pontos, evite perder pontos acertando qual sera o numero secreto <3\n");
    int numerosecreto = 42;
    int chute;

    int ganhou=0; // variavel boleana nesse caso 0 significa falso
    int tentativas=0;

    int pontos = 1000;
    

    while (ganhou == 0){ // Utilizamos while quando não sabemos o numero de tentativas que serão feitas,
                        // Enquanto no for sabemos extamente quantas vezes queremos que o codigo repita.
        

        printf("Tentativa %d \n",tentativas+1);
        printf("Qual e o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n",chute);
            if (chute < 0)
            {
            printf("Nao pode numeros negativos\n");
           
            continue; 

            }
            
    
        int acertou = (chute==numerosecreto);
        int maior = chute>numerosecreto;
        int menor = chute<numerosecreto;
        if (acertou){
            printf("Parabens!Voce acertou,\n");
            
            ganhou=1;
        }
        else if (maior){

                printf("Seu chute foi maior do que o numero secreto\n");
            }
        else if (menor){

                printf("Seu numero foi menor do que o numero secreto\n");
        }
        
            
            tentativas++; // Abreviação para tentativas=tentativas+1

            int pontosperdidos=(chute-numerosecreto)/2;
            if (pontosperdidos<0) pontosperdidos = pontosperdidos*(-1); 
            pontos = pontos - pontosperdidos;


        }
        
        
        printf("Voce acertou em %d tentativas\n",tentativas);
        printf("Voce alcancou %d pontos, parabens\n",pontos);
        printf("FIM DE JOGO!!\n");
        }
   
    
    