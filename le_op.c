#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

extern int tabela[15][25];
extern char nomes[30][20];
extern FILE *fp, *arq;

char le_op()
{
     char op;
     printf("\n\n\n\n\n");
     printf("\t\tEscolha sobre que assunto voc%c quer jogar.\n", 136);
     printf("\n\t\t\t[A]Animais\n\t\t\t[F]Frutas\n\t\t\t[N]Nome de Pessoas\n\t\t\t[T]Times de Futebol\n\t\t\t");
     printf("[P]Todos os assuntos juntos\n\t\t\t[R]Regras\n\t\t\t[S]Sair\n\n");
     fflush(stdin);
     op = getch();
     while(tolower(op)!= 'a' && tolower(op)!='r' && tolower(op)!= 'f' && tolower(op)!= 'n' && tolower(op)!= 't' && tolower(op)!= 'p' && tolower(op)!= 's')
     {
                         system("cls");
                         printf("\n\n\n\n\n");
                         printf("\t\tErro!!! Digite a op%c%co novamente!\n\a\a", 135, 134);
                         printf("\n\t\t\t[A]Animais\n\t\t\t[F]Frutas\n\t\t\t[N]Nome de Pessoas\n\t\t\t[T]Times de Futebol\n\t\t\t");
                         printf("[P]Todos os assuntos juntos\n\t\t\t[R]Regras\n\t\t\t[S]Sair\n\n");
                         fflush(stdin);
                         op = getch();
     }
     return op;
      
}
