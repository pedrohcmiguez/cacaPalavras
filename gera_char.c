#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>


int gera_char()
{
     int num, x;
     x = rand();
     num = (num%26) + 97;
     return num;
}
