#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>


char le_op(); //Lê a opção do usuario sobre um tema para o jogo;
char le_nivel(); //Lê o nivel de dificuldade do Jogo;
void regras(); //Mostra as regras do jogo;
int  gera_char(); //Função para gerar um numero aleatorio entre 97 e 122 para ser usado na matriz de caracters;
void gera_tabela(int LIN, int COL); //Gera a tabela com todas as p
void carrega_nomes(char op); //Carrega todos os nomes do arquivo escolhido numa matriz de caracter;
void mostra_tabela(int LIN, int COL); //Função para mostrar na tela a tabela com as letras sorteadas e os nomes do jogo
void mistura_tabela(int LIN, int COL); //Função para inserir os nomes na tabela que foi gerada com as letras aleatorias
int  _gera1(); //Função para sortear um numero para selecionar uma palavra aleatoriamente
int  _gera2(int COL); //Função para gerar um numero aleatorio para usar na posição COLUNA de cada palavra na tabela geral.
void jogo(int LIN, int COL); //Função para ler do usuario as informações da palavra que esta na tabela
void maiuscula(int x, int y); //Função para colocar uma palavra em Maiusculo caso o usuario acerte!
void inicio(); //Função para apresentações iniciais


int tabela[20][25], pos[20], troca[20];
char nomes[30][20], palavra[15];
FILE *fp, *arq;


int main()
{
    char op, op1;
    int COL, LIN;
    
    while(1)
    {
            inicio();
            op1 = le_nivel();
            if(op1=='f')
            {
                 printf("Nivel escolido foi: FACIL\n");
                 LIN=12;
                 COL=15;
            }
            else if (op1=='n')
            {
                 printf("Nivel escolhido foi: NORMAL\n");
                 LIN=17;
                 COL=20;
            }
            else if (op1=='d')
            {
                 printf("Nivel escolhido foi: DIFICIL\n");
                 LIN=20;
                 COL=25;
            }
            else
            {
                printf("Erro Inesperado!!!\a\a\a");
                exit(0);
            }
            op = le_op();
            if(op=='a')
            {
                 carrega_nomes(op);
                 gera_tabela(LIN, COL);
                 mistura_tabela(LIN, COL);
                 mostra_tabela(LIN, COL);
                 jogo(LIN, COL);
            }
            else if(op=='s')
            {
                 break;
            }
            else if(op=='r')
            {
                 regras();
            }
            else if(op=='f')
            {
                 carrega_nomes(op);
                 gera_tabela(LIN, COL);
                 mistura_tabela(LIN, COL);
                 mostra_tabela(LIN, COL);
                 jogo(LIN, COL);
            }
            else if(op=='n')
            {
                 carrega_nomes(op);
                 gera_tabela(LIN, COL);
                 mistura_tabela(LIN, COL);
                 mostra_tabela(LIN, COL);
                 jogo(LIN, COL);
            }
            else if(op=='t')
            {
                 carrega_nomes(op);
                 gera_tabela(LIN, COL);
                 mistura_tabela(LIN, COL);
                 mostra_tabela(LIN, COL);
                 jogo(LIN, COL);
            }
            else if(op=='p')
            {
                 carrega_nomes(op);
                 gera_tabela(LIN, COL);
                 mistura_tabela(LIN, COL);
                 mostra_tabela(LIN, COL);
                 jogo(LIN, COL);
            }
            else
            {
                printf("Erro Inesperado!!!\a\a\a");
                exit(0);
            }
            system("pause");
            system("cls");
            
    }
    system("PAUSE");	
    return 0;
}


