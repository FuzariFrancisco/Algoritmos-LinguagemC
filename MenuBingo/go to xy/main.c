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
    setlocale(LC_ALL, "portuguese");
    system("cls");
    gotoxy(10,05); printf("que legal!");
    gotoxy(40,02); printf("isso é fácil");
    gotoxy(60,18); printf("cartela maneira");

    return 0;
}
