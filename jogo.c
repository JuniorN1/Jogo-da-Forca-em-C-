#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //A STRING PALAVRA E SOMENTE POR RECEBER O PRIMEIRO VALOR
    //A STRING TENTATIVA E RESPONSAVEL POR RECEBER A LETRA
    //A STRING RESERVA E A RESPONSAVEL POR CONTER A PÁLAVRA NA COMPARAÇÃO OU SEJA "A MAIS IMPORTANTE"
    //A STRING OCULTA SERA USADA PARA MOSTRA NA INFORMAÇAO O ANDAMENTO DE ACERTOS DE LETRAS E NA COMPARAÇÃO
    char palavra[10],tentativa[1],reserva[10],Oculta[10];;
    //INT TAMANHO RESPONSAVEL POR CONTER O TAMANHO
    //INT VIDA A VIDA
    //INT COUNT RESPONSAVEL POR CONTAR OS ERROS
    //INT COMPARA RESPONSAVEL PARA IDENTIFICAR SE O JOGADOR GANHOU
    int tamanho,vida=5,count=0,compara=0;
    //CONTADORES DO FOR
    int i,j;

    //LER A PALAVRA
    printf("DIGITE UMA PALAVRA DE NO MAXIMO 10 LETRAS: ");
    scanf("%s",&palavra);
    //COMTAR A PALVRA
    tamanho= strlen(palavra);
    //INSERIR O X NO OCULTA E PASSA OS VALORES PARA A STRING RESERVA
    for(i=0;i<tamanho;i++){
        Oculta[i]='x';
      reserva[i]=palavra[i];
    }
    //VERIFICAMOS A CONDIÇÃO FOI ATENDIDA
    system("cls");
    if(tamanho <10 && tamanho>0  ){
        //ENTRAMOS NO JOGINHO
        do{
            //MOSTRAMOS AS INFORMAÇOES BASICAS
            printf("A PALAVRA CONTEM %i LETRAS\n",tamanho);
            for(i=0;i<tamanho;i++){
               printf("%c",Oculta[i]);

            }printf("\n");
            printf("VOCE TEM %i VIDAS\n",vida);
            //LER LETRAS DAS TENTATIVAS     
            printf("DIGITE UMA LETRA: ");
            scanf("%s",&tentativa);
            //FOR PARA PERCORRER AS STRING E LETRAS DIGAMOS ALGORITMO DE "BUSCA"
            for(i=0;i<tamanho;i++){  
                //VEMOS SE A LETRA EXISTE NA STRING E SE NAO JA FOI ULTILIZADA
                if(reserva[i] == tentativa[0] && Oculta[i]!=reserva[i]){
                        //ATRIBUIMOS O VALOR NA OCULTA PARA MOSTRA NAS INFORMAÇOES
                        Oculta[i]=tentativa[0];
                        //ADICIONAMOS O COMPARA

                       compara++;
                }else{
                    //ADICIONAMOS O COUNT
                    count++;



                }
            }
            //VERIFICAMOS SE A LETRA NAO EXISTE SE NAO REMOVEMOS UMA VIDA
            if(count == tamanho){
                vida--;                
            }
            //TEMOS QUE ZERAR O CONTADOR PARA PODERMOS REMOVER VIDAS
             count=0;

            //VEMOS SE O COMPARADOR E IGUAL AO TAMANHO SE FOR DA BREAK E FIM DE JOGO
            if(compara == tamanho){
                break;
            }
            //LIMPAMOS A TELA
           system("cls");
        }while(vida>0);
        //SE O JOGO ACABA E A VIDA FOR 0 VC PERDEU SE NAO VC GANHOU
        if(vida == 0){
            system("cls");
            printf("VOCE PERDEU HAHAHAHAHAHA!\n");
        }else{
              system("cls");
            printf("VOCE GANHOUUUU MIZERAVE!\n");
        }


    }else{
        //CASO A CONDIÇÃO INICIAL DO TAMANHO DA PALAVRA NAO FOR ATENDIDA
        printf("FAVOR DIGITA A PALAVRAS COM TOTAL DE CARACTERES PEDIDO");


    }  




    return 0;
}