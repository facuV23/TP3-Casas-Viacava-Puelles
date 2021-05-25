#include "cVehiculo.h"

cVehiculo::cVehiculo(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa)
{
	this->patente = patente;
	this->color = color;
	this->nro_chasis = nro_chasis;
	this->nro_poliza = nro_poliza;
	this->fecha_mantenimiento = fecha_mantenimiento;
	this->precio_dia = precio_dia;
	this->capacidad_pasajeros = capacidad_pasajeros;
	this->tarifa = tarifa;
}

cLista<cVehiculo> cVehiculo::adquirir_vehiculo_nuevo(cLista<cVehiculo> lista)
{
	lista + this;
	return lista;
}

cLista<cVehiculo> cVehiculo::retirar_ciculacion_vehiculo(cLista<cVehiculo> lista)
{

	cout << "Vehiculo retirado: " << endl << lista.operator[](patente)->tostring() << endl;
	lista.Eliminar(patente);
	return lista;
}



void cVehiculo::pasos_mantenimiento()
{
	cout << "pasos de mantenimiento generico" << endl;
}

void cVehiculo::aumetar_tarifa(float aumeto)
{
	tarifa = tarifa + aumeto;
}

string cVehiculo::getclave()
{
	return patente;
}

float cVehiculo::gettarifa()
{
	return tarifa;
}

string cVehiculo::tostring()
{
	string aux = "Pantente: " + patente + "\nColor: " + color + "\nNro de chasis: " + to_string(nro_chasis) + "\nNro de poliza : " + to_string(nro_poliza) + "\nFecha de mantenimiento: " + to_string(fecha_mantenimiento.tm_mday) + "/" + to_string(fecha_mantenimiento.tm_mon+1) + "/" + to_string(fecha_mantenimiento.tm_year-100) + "\nPrecio por dia: " + to_string(precio_dia) + "\nCapacidad de pasajeros: " + to_string(capacidad_pasajeros) + "\nTarifa: " + to_string(tarifa) + '\n';
	return aux;
}

void cVehiculo::imprimir()
{
	cout << tostring() << endl;
}
