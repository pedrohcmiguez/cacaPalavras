#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

extern int tabela[15][25];
extern char nomes[30][20];
extern FILE *fp, *arq;


char le_nivel()
{
     char op;
     printf("\n\n\n\n\n\n\n\n\n");
     printf("\t\t\tQual nivel voc%c quer entrar?\n\n\t\t\t\t[F]Facil\n\t\t\t\t[N]Normal\n\t\t\t\t[D]Dificil\n", 136);
     op = getch();
     while(tolower(op)!='f' && tolower(op)!='n' && tolower(op)!='d')
     {
                            system("cls");
                            printf("\n\n\n\n\n\n\n\n\n");
                            printf("\t\t\tErro!!! Digite a op%c%co novamente!\n\a\a", 135, 134);
                            printf("\n\t\t\t\t[F]Facil\n\t\t\t\t[N]Normal\n\t\t\t\t[D]Dificil\n", 136);
                            op = getch();
     }
     system("cls");
     return op;
}
