#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

extern int tabela[20][25];
extern char palavra[15];
extern FILE *fp, *arq;
extern int troca[20];


void maiuscula(int x, int y)
{
     int i, aux, k;
     aux = troca[x] + y;
     k=0;
     for(i=y; i<=aux; i++)
     {
               tabela[x][y]=toupper(palavra[k]);                       
               y++;
               k++;
     }
}
