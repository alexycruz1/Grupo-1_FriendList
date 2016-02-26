#include "amigo.h"
#include <iostream>
#include <string>

using namespace std;

Amigo::Amigo(char* nombre, char* numero){
	this->nombre = nombre;	
	this->numero = numero;
}

void Amigo::imprimir(){
	string name="",number="";
	for(int i=0;i<25;i++){
		if(nombre[i]!= 0)
			name += nombre[i];
	}

	for(int i=0;i<25;i++){
                if(numero[i]!= 0)
                        number += numero[i];
        }

	cout  << name << "		 " << number << endl;
}
