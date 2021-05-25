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

class cVehiculo
{
protected:
	string patente;
	string color;
	int nro_chasis;
	int nro_poliza;
	tm fecha_mantenimiento;
	float precio_dia;
	int capacidad_pasajeros;
	float tarifa;

public:
	
	cVehiculo(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros,float tarifa);
	cLista<cVehiculo> adquirir_vehiculo_nuevo(cLista<cVehiculo> lista);//aca con sobrecarga de +
	cLista<cVehiculo> retirar_ciculacion_vehiculo(cLista<cVehiculo> lista);//elimina el vehiculo de la lista 
	virtual void set_precio_elemento_seguridad(float precio)=0;
	virtual float calcular_tarifa_vehiculo() = 0;
	virtual int get_elemtenos_seguridad()=0;
	virtual void pasos_mantenimiento();
	void aumetar_tarifa(float aumeto);
	string getclave();
	float gettarifa();
	string tostring();
	void imprimir();
	virtual ~cVehiculo(){}
};

