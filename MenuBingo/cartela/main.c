#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

COORD coord={0,0};

void gotoxy(int coluna,int linha)
  {
    coord.X=coluna;
    coord.Y=linha;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
  }

int main()
{
    int oi;
    oi = 1;

               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,194,196,196,196,194,196,196,196,194,196,196,196,194,196,196,196,191);
               printf("%c   %c   %c   %c   %c   %c\n",179,179,179,179,179,179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c   %c   %c   %c   %c   %c\n",179,179,179,179,179,179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c   %c   %c   %c   %c   %c\n",179,179,179,179,179,179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c   %c   %c   %c   %c   %c\n",179,179,179,179,179,179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,197,196,196,196,180);
               printf("%c   %c   %c   %c   %c   %c\n",179,179,179,179,179,179);
               printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,193,196,196,196,193,196,196,196,193,196,196,196,193,196,196,196,217);
















    return 0;
}

