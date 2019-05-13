#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

extern int tabela[20][25];
extern char nomes[30][20];
extern FILE *fp, *arq;





void mostra_tabela(int LIN, int COL)
{
     int i, j, x;
     if(LIN==20 && COL==25)
     {
                printf("    00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 \n");
                printf("  ----------------------------------------------------------------------------\n");
                x=0;
                for(i=0; i<LIN; i++)
                {
                         printf("%2.2d |", x);
                         for(j=0; j<COL; j++)
                         {
                                  printf("%c |", tabela[i][j]);
                         }
                         x++;
                         printf("\n");
                         printf("  ----------------------------------------------------------------------------\n");
                }
     }
     else if(LIN==12 && COL==15)
     {
          printf("    00 01 02 03 04 05 06 07 08 09 10 11 12 13 14\n");
          printf("   ---------------------------------------------\n");
          x=0;
          for(i=0; i<LIN; i++)
          {        
              printf("%2.2d |", x);
              for(j=0; j<COL; j++)
              {
                       printf("%c |", tabela[i][j]);
                       
              }
              x++;
              printf("\n");
              printf("   ---------------------------------------------\n");
          }
     }
     else if(LIN==17 && COL==20)
     {
         printf("    00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15 16 17 18 19\n");
         printf("  -------------------------------------------------------------\n");
         x=0;
         for(i=0; i<LIN; i++)
         {        
              printf("%2.2d |", x);
              for(j=0; j<COL; j++)
              {
                       printf("%c |", tabela[i][j]);
                       
              }
              x++;
              printf("\n");
              printf("  -------------------------------------------------------------\n");
         }
     }
}
