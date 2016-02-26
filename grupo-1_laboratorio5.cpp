#include <curses.h>
#include <iostream>
#include <vector>
#include "amigo.h"

using namespace std;

int main(){
  int y = 25;
  int x = 10;
  int x1=0;
  int y1=15;
  char entrada;
  char seguir;
  char nombre[25];
  char numero[8];
  vector<Amigo> amigos;
 
  initscr();
  (void)echo();
  start_color();
  init_pair(1, COLOR_WHITE, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
  init_pair(3, COLOR_RED, COLOR_BLACK);
  attron(COLOR_PAIR(1));
  seguir = 'r';

  while(seguir == 'r'){
    y = 25;
    x = 10;

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

    amigos.push_back(Amigo(nombre,numero));

    printw("ingrese [r] para regresar: ");
    seguir = getch();
    clear();    

  }else if(entrada == '2'){
	x1 = 0;
	y1 = 15;
    clear();
    printw("Nombre");
    refresh();
    move(x1, y1);
    printw("Celular");
    refresh();
    printw("\n");

	for(int i=0;i<amigos.size();i++){
		move(i + 1, x1);
		printw(amigos.at(i).getNombre());
		move(i + 1, x1 + 16);
		printw(amigos.at(i).getNumero());	
	}
	
    move(20,0);
    printw("ingrese [r] para regresar: ");
    seguir = getch();
    clear();

  }else if(entrada == '3'){
    clear();
    printw("GRACIAS POR USAR EL PROGRAMA");
    refresh();
    seguir = 'p';
  }
  
  }
  
  getch();
  endwin();
  return 0;
  }  
