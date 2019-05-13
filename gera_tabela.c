#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

extern int gera_char();
extern int tabela[15][25];
extern char nomes[30][20];
extern FILE *fp, *arq;

void gera_tabela(int LIN, int COL)
{
     int i, j;
     for(i=0; i<LIN; i++)
     {
              for(j=0; j<COL; j++)
              {
                       tabela[i][j] = gera_char();
              }
     }
}
