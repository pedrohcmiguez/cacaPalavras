#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

extern int tabela[20][25];
extern char nomes[30][20];
extern int _gera1();
extern int _gera2(int COL);
extern FILE *fp, *arq;
extern int troca[20];

extern int pos[20];

void mistura_tabela(int LIN, int COL)
{
     int i, j, k, x, h, hp[30], a, gh;
     k = 0;
     arq = fopen("auxiliar.txt", "w+");
     for(i=0; i<LIN; i++)
     {
              x = _gera2(COL);
              h = _gera1();
              hp[i]=h;
              for(a=0; a<30; a++)
              {
                       for(gh=0; h==hp[a]; gh++)
                       {
                                      h = _gera1();
                                      
                       }
              }
              pos[k]=x;
              fprintf(arq, "%d %d %d %s", h, x, k, nomes[h]);
              for(j=0; nomes[h][j]!='\0' && nomes[h][j]!='\n'; j++)
              {
                       tabela[k][x]=nomes[h][j];  
                       troca[i]=j;                            
                       x++;
              }
              
              k++;
     }
     fclose(arq);
}
