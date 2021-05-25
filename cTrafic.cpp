#include "cTrafic.h"
cTrafic::cTrafic(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa, int silla_seguridad, int asiento_aux) :cVehiculo(patente, color, nro_chasis, nro_poliza, fecha_mantenimiento, precio_dia, capacidad_pasajeros, tarifa)
{
	this->silla_seguridad = silla_seguridad;
	this->asiento_aux = asiento_aux;

}

void cTrafic::agg_silla_seguridad(int nro_silla_seguridad)
{
	if (silla_seguridad == 0 && nro_silla_seguridad == 2) {
		silla_seguridad = nro_silla_seguridad;
		return;
	}

	if (silla_seguridad == 0 && nro_silla_seguridad == 1) {
		silla_seguridad = nro_silla_seguridad;
		return;
	}
	if (silla_seguridad == 1 && nro_silla_seguridad == 1) {
		silla_seguridad = nro_silla_seguridad;
		return;
	}

	else
		cout << "no puedes alquilar mas de dos sillas de seguridad por trafic" << endl;
}

void cTrafic::agg_asiento_aux(int nro_asiento_aux)
{
	if (asiento_aux == 0 && nro_asiento_aux == 1) {
		asiento_aux = nro_asiento_aux;
		return;
	}
	if (asiento_aux == 0 && nro_asiento_aux == 2) {
		asiento_aux = nro_asiento_aux;
		return;
	}

	if (asiento_aux == 1 && nro_asiento_aux == 1) {
		asiento_aux = nro_asiento_aux;
		return;
	}

	else
		cout << "no puedes alquilar mas de dos asientos aux por trafic" << endl;
}




//precio por dia de la moto sin la tarifa, luego le sumo la tarifa en alquiler
float cTrafic::calcular_tarifa_vehiculo()
{
	if (precio_asiento_aux <= 0) {
		cout << "Los asiento_aux no tienen precio" << endl;
		return 0;
	}
	float precio_tot;
	precio_tot = precio_dia + (precio_asiento_aux * asiento_aux) + (precio_silla_seguridad * silla_seguridad);
	return precio_tot;
}

int cTrafic::get_elemtenos_seguridad()
{
	return silla_seguridad + asiento_aux;
}

void cTrafic::pasos_mantenimiento()
{
	time_t now1 = time(0);
	time_t* now = &now1;
	tm* fech;
	fech = localtime(now);


	cout << "verificar aceite" << endl;
	cout << "verificar aire gomas delanteras" << endl;
	cout << "verificar aire gomas traseras" << endl;
	cout << "limiar la trafic" << endl;
	fecha_mantenimiento = *fech;


}

void cTrafic::set_precio_elemento_seguridad(float precio)
{
	precio_silla_seguridad = precio;
	precio_asiento_aux = precio;
}

string cTrafic::tostring()
{

	string aux = cVehiculo::tostring() + "Cantidad de sillas de seguridad: " + to_string(silla_seguridad) + '\n' + "Asientos auxiliares: " + to_string(asiento_aux) + '\n';
	return aux;
}

void cTrafic::imprimir()
{
	cout << tostring() << endl;

}
