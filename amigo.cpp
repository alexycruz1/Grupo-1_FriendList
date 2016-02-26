#include "amigo.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

Amigo::Amigo(char* nombre, char* numero){
	this->nombre = nombre;
	this->numero = numero;
}
void Amigo::print(){
	string name="",number="";
	for(int i=0;i<25;i++){
		if(nombre[i]!=NULL)
			name += nombre[i];
	}

	for(int i=0;i<25;i++){
                if(numero[i]!=NULL)
                        number += numero[i];
        }

	cout  << name << "		 " << number << endl;
}
