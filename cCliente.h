#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <time.h>
#include <math.h>

#include "cLista.h"

using namespace std;

class cCliente
{
private:
	string DNI;
	string nombre;
	string apellido;

	
	//static cLista<cCliente> lista_Clientes;

public:
	
	cCliente(string DNI, string nombre, string apellido);//cuando me creo un cliente se agg directamente a la lista 
	//cLista<cCliente>& get_lista();
	string getclave();
	string tostring();
	void imprimir();

	~cCliente(){}
};

