/**************************************  
* Trabalho 2 de Programacao de Computadores I - Retangulo 
* Curso de Sistemas da informacao 
* Aluno: Karolyne Pontes Marchon Portilho - matricula: 0050013539 
* Professor: Alex Salgado ***************************************/


#include <stdio.h>

int main()
{
     
     int altura;
     int largura;
     char resposta;
     char pixel;
     int alt=0; 
     int larg=0;
     int condicao = 0;
     
    
    while( condicao == 0 )
        {
        
        printf("Informe a altura do retângulo.\n");
        scanf("%d", &altura);
        printf("Informe a largura do retângulo.\n");
        scanf("%d", &largura);
        printf("Qual símbolo do pixel deseja usar?\n");
        scanf(" %c", &pixel);
        printf("Olá, meu nome é Karolyne e o retangulo ficou assim:\n");
        
        for( alt; alt < altura; alt++ )
                {
            for( larg; larg < largura; larg++ )
                {
                if( alt == 0 || alt == altura - 1 || larg == 0 || larg == largura - 1)
                 {
                    printf(" %c ", pixel);
                }
                     else
                 {
                    printf("   ");
                }   
            }
            
            larg = 0;
            printf( "\n" );
        }
        
        printf("Deseja continuar (s/n)?\n");
        scanf(" %c", &resposta);
        
        if( resposta == 'n' )
        {
            condicao = 1;
        }
        
        altura = 0;
        largura = 0;
        alt = 0;
        
        }

    return 0;
} 
