#include <curses.h>
#include <iostream>

using namespace std;

int main(){
  int y = 25;
  int x = 10;
  char entrada;
  char nombre[25];
  char numero[8];
 
  initscr();
  (void)echo();
  start_color();
  init_pair(1, COLOR_WHITE, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
  init_pair(3, COLOR_RED, COLOR_BLACK);
  attron(COLOR_PAIR(1));

  move(x++, y);
  printw("----------Menu-------");
  printw("\n");
  move(x++, y);
  attron(COLOR_PAIR(2));
  printw("1.- Agregar contacto");
  printw("\n");
  move(x++, y);
  printw("2.- Listar contacto");
  printw("\n");
  move(x++, y);
  attron(COLOR_PAIR(3));
  printw("3.- Salir");
  printw("\n");
  move(x++, y);
  printw("Ingrese la opcion que desea: ");
  entrada = getch();

  refresh();

  if(entrada == '1'){
    clear();
    addstr("Ingrese nombre: ");
    refresh();
    getnstr(nombre, sizeof(nombre) - 1);
    printw("\n");
    addstr("Ingrese numero: ");
    getnstr(numero, sizeof(numero) - 1);
    refresh();
  }

  refresh();

  if(entrada == '2'){
    clear();
    printw("Nombre");
    refresh();
    move(0, 15);
    printw("Celular");
    refresh();
  }

  refresh();

  if(entrada == '3'){
    clear();
    printw("GRACIAS POR USAR EL PROGRAMA");
  }

  getch();
  endwin();
  
  return 0;
  }  