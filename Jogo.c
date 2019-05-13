#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

extern pos[20];
extern FILE *fp, *arq;
extern void mostra_tabela(int LIN, int COL);
extern void maiuscula(int x, int y);
extern char palavra[15];

void jogo(int LIN, int COL)
{
     int x, y, op, i, num, pal, of;
     char aux[20][15];
     op=1;
     arq = fopen("auxiliar.txt", "r");
     for(i=0; i<LIN; i++)
     {
              fscanf(arq, "%*d %*d %*d %s", aux[i]);
     }
     pal=LIN;
     while(1)
     {
             
             if(op==1 && pal>0)
             {
                      printf("\nEm que LINHA e COLUNA encontra-se a primeira letra da palavra?[LxC]\n");
                      scanf("%dx%d", &x, &y);
                      printf("Qual foi a palavra que voc%c achou?\n", 136);
                      fflush(stdin);
                      gets(palavra);
                      fflush(stdin);
                      num = strcmp(palavra, aux[x]);
                      if(pos[x]== y && num==0)
                      {
                                  printf("\nCERTO\n\n");
                                  printf("Deseja continuar?\n\t1 - Sim\n\t0 - Nao\n");
                                  scanf("%d", &op);
                                  maiuscula(x, y);
                                  fflush(stdin);
                                  system("pause");
                                  if(op==1)
                                  {
                                           system("cls");
                                           mostra_tabela(LIN, COL);
                                  }
                                  printf("Faltam %d palavras\n", pal-1);
                                  pal--;
                      }
                      else 
                      {
                           printf("\nERRADO\n\n");
                           printf("Deseja continuar?\n\t1 - Sim\n\t0 - Nao\n");
                           scanf("%d", &op);
                           fflush(stdin);
                           system("pause");
                           if(op==1)
                           {
                                 system("cls");
                                 mostra_tabela(LIN, COL);
                                 printf("Faltam %d palavras\n", pal);
                           }
                      }
             }
             else if(op==0) break;
             
             of=pal-1;
             if(of==0)
             {
                       system("cls");
                       printf("\n\n\n\n\n\t\t\t PARABENS VOCE VENCEU \a\a\a\a\a");
                       sleep(10000);
                       break;
             }
     }
    
             
}
