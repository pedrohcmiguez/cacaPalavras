#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

extern int tabela[15][25];
extern char nomes[30][20];
extern FILE *fp, *arq;


void carrega_nomes(char op)
{
     int i;
     if(op=='a') fp = fopen("animais.txt", "r");
     else if(op=='f') fp = fopen("frutas.txt", "r");
     else if(op=='n') fp = fopen("nome.txt", "r");
     else if(op=='t') fp = fopen("times.txt", "r");
     else if(op=='c') fp = fopen("carros.txt", "r");
     else if(op=='p') fp = fopen("tudo.txt", "r");
     else
     {
         printf("Erro Inesperado!!!\a\a\a"); 
     }
     for(i=0; i<30; i++)
     {
          fgets(nomes[i], 20, fp);
     }
                     
    
}
