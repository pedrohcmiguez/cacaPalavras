#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>


int _gera2(int COL)
{
    int a, b;
    a = rand();
    if(COL==15) b = a%5;
    else if(COL==20) b = a%10;
    else b = a%15;
    return b;
}
