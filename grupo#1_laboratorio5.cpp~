#include <curses.h>
#include <iostream>

using namespace std;

int main(){
  int y = 25;
  int x = 10;
  char entrada[2];
 
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

  move(x++, y);
  addstr("Ingrese la opcion que desee: ");
  refresh();
  getnstr(entrada, sizeof(entrada) - 1);

  refresh();

  if(entrada[1] == '1'){
    clear();
    printw("Ingrese nombre: ");
    refresh();
    //getnstr(/*variable*/, 25);
    printw("\n");
    printw("Ingrese numero: ");
    refresh();
  }

  refresh();

  if(getch() == '2'){
    clear();
    printw("Nombre");
    refresh();
    move(0, 15);
    printw("Celular");
    refresh();
  }

  refresh();

  if(getch() == '3'){
    clear();
    printw("GRACIAS POR USAR EL PROGRAMA");
  }

  getch();
  endwin();
  
  return 0;
  }  