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
#include "cCliente.h"
#include "cVehiculo.h"
#include "cMotocicleta.h"
#include "cAutomovil.h"
#include "cCamioneta.h"
#include "cTrafic.h"

using namespace std;
class cAlquiler
{
private:
	string clave_alquiler;
	cVehiculo* vehiculo;
	cCliente* cliente;
	int cant_elementos_seguridad;
	tm fecha_inicio;
	tm fecha_final;
	float monto_total;

	

public:
	
	cAlquiler(string clave_alquiler, cVehiculo* vehiculo, cCliente* cliente, tm fecha_inicio, tm fecha_final);

	float calcular_tarifa();//dynamic
	void agg_elemetos_seguridad(int cantidad, int cantidad2);
	string getclave();
	string tostring();
	void imprimir();
	~cAlquiler(){}
};

