#include "cMotocicleta.h"

cMotocicleta::cMotocicleta(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa,  int casco) :cVehiculo(patente, color, nro_chasis, nro_poliza, fecha_mantenimiento, precio_dia, capacidad_pasajeros, tarifa)
{
	this->casco = casco;
}

void cMotocicleta::agg_casco(int nro_cascos)
{
	if (casco == 0 && nro_cascos == 2){
		casco = nro_cascos;
		return;
	}
		
	if (casco == 0 && nro_cascos == 1) {
		casco = nro_cascos;
		return;
	}
	if (casco == 1 && nro_cascos == 1) {
		casco = nro_cascos;
		return;
	}
		
	else 
		cout << "no puedes alquilar mas de dos cascos por moto" << endl;
}




//precio por dia de la moto sin la tarifa, luego le sumo la tarifa en alquiler
float cMotocicleta::calcular_tarifa_vehiculo()
{
	if (precio_casco <= 0) {
		cout << "Los cascos no tienen precio" << endl;
		return 0;
	}
	float precio_tot;
	precio_tot =precio_dia + (precio_casco * casco);
	return precio_tot;
}

int cMotocicleta::get_elemtenos_seguridad()
{
	return casco;
}

void cMotocicleta::pasos_mantenimiento()
{
	time_t now1 = time(0);
	time_t* now = &now1;
	tm* fech;
	fech = localtime(now);
	

	cout << "verificar aceite" << endl;
	cout << "verificar aire goma delantera" << endl;
	cout << "verificar aire goma trasera" << endl;
	cout << "limiar la moto" << endl;
	fecha_mantenimiento = *fech;
		
	
}

void cMotocicleta::set_precio_elemento_seguridad(float precio)
{
	precio_casco = precio;
}

string cMotocicleta::tostring()
{

	string aux = cVehiculo::tostring() + "Cantidad de cascos: " + to_string(casco)+'\n';
	return aux;
}

void cMotocicleta::imprimir()
{
	cout << tostring() << endl;
	
}
