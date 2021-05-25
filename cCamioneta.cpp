#include "cCamioneta.h"
cCamioneta::cCamioneta(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa, int silla_seguridad,int porta_equipaje) :cVehiculo(patente, color, nro_chasis, nro_poliza, fecha_mantenimiento, precio_dia, capacidad_pasajeros, tarifa)
{
	this->silla_seguridad = silla_seguridad;
	this->porta_equipaje = porta_equipaje;
	
}

void cCamioneta::agg_silla_seguridad(int nro_silla_seguridad)
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
		cout << "no puedes alquilar mas de dos sillas de seguridad por camioneta" << endl;
}

void cCamioneta::agg_porta_equipaje(int nro_porta_equipaje)
{
	if (porta_equipaje == 0 && nro_porta_equipaje == 1) {
		porta_equipaje = nro_porta_equipaje;
		return;
	}


	else
		cout << "no puedes alquilar mas de un portaequipaje por camioneta" << endl;
}




//precio por dia de la moto sin la tarifa, luego le sumo la tarifa en alquiler
float cCamioneta::calcular_tarifa_vehiculo()
{
	if (precio_porta_equipaje <= 0) {
		cout << "Los portaequipaje no tienen precio" << endl;
		return 0;
	}
	float precio_tot;
	precio_tot = precio_dia + (precio_porta_equipaje * porta_equipaje) + (precio_silla_seguridad * silla_seguridad);
	return precio_tot;
}

int cCamioneta::get_elemtenos_seguridad()
{
	return silla_seguridad+porta_equipaje;
}

void cCamioneta::pasos_mantenimiento()
{
	time_t now1 = time(0);
	time_t* now = &now1;
	tm* fech;
	fech = localtime(now);


	cout << "verificar aceite" << endl;
	cout << "verificar aire gomas delanteras" << endl;
	cout << "verificar aire gomas traseras" << endl;
	cout << "limiar la camioneta" << endl;
	fecha_mantenimiento = *fech;


}

void cCamioneta::set_precio_elemento_seguridad(float precio)
{
	precio_silla_seguridad = precio;
	precio_porta_equipaje = precio;
}

string cCamioneta::tostring()
{

	string aux = cVehiculo::tostring() + "Cantidad de sillas de seguridad: " + to_string(silla_seguridad) + '\n' + "Portaequipaje: " + to_string(porta_equipaje) + '\n';
	return aux;
}

void cCamioneta::imprimir()
{
	cout << tostring() << endl;

}
