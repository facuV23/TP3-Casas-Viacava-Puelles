#include "cAlquiler.h"

cAlquiler::cAlquiler(string clave_alquiler, cVehiculo* vehiculo, cCliente* cliente, tm fecha_inicio, tm fecha_final)
{
	this->clave_alquiler = clave_alquiler;
	this->vehiculo = vehiculo;
	this->cliente = cliente;
	this->cant_elementos_seguridad = vehiculo->get_elemtenos_seguridad();
	this->fecha_inicio = fecha_inicio;
	this->fecha_final = fecha_final;
	this->monto_total = 0;

	
}


float cAlquiler::calcular_tarifa()
{
	
	cMotocicleta* pmoto = dynamic_cast<cMotocicleta*>(vehiculo);
	cAutomovil* pauto = dynamic_cast<cAutomovil*>(vehiculo);
	cCamioneta* pcamioneta = dynamic_cast<cCamioneta*>(vehiculo);
	cTrafic* ptrafic = dynamic_cast<cTrafic*>(vehiculo);
	
	if (pmoto != NULL) {
		monto_total = (pmoto->calcular_tarifa_vehiculo() + pmoto->gettarifa()) * (fecha_final.tm_mday - fecha_inicio.tm_mday);
		return (monto_total);
	}
	if (pauto != NULL) {
		monto_total = (pauto->calcular_tarifa_vehiculo() + pauto->gettarifa()) * (fecha_final.tm_mday - fecha_inicio.tm_mday);
		return (monto_total);
	}
	if (pcamioneta != NULL) {
		monto_total = (pcamioneta->calcular_tarifa_vehiculo() + pcamioneta->gettarifa()) * (fecha_final.tm_mday - fecha_inicio.tm_mday);
		return (monto_total);
	}
	if (ptrafic != NULL) {
		monto_total = (ptrafic->calcular_tarifa_vehiculo() + ptrafic->gettarifa()) * (fecha_final.tm_mday - fecha_inicio.tm_mday);
		return (monto_total);
	}
}
void cAlquiler::agg_elemetos_seguridad(int cantidad,int cantidad2)
{
	cMotocicleta* pmoto = dynamic_cast<cMotocicleta*>(vehiculo);
	cAutomovil* pauto = dynamic_cast<cAutomovil*>(vehiculo);
	cCamioneta* pcamioneta = dynamic_cast<cCamioneta*>(vehiculo);
	cTrafic* ptrafic = dynamic_cast<cTrafic*>(vehiculo);

	if (pmoto != NULL) {
		pmoto->agg_casco(cantidad);
		cant_elementos_seguridad = pmoto->get_elemtenos_seguridad();
			return;
	}
		
	if (pauto != NULL) {
		pauto->agg_silla_seguridad(cantidad);
		cant_elementos_seguridad = pauto->get_elemtenos_seguridad();
		return;
	}
	if (pcamioneta != NULL) {
		pcamioneta->agg_silla_seguridad(cantidad);
		pcamioneta->agg_porta_equipaje(cantidad2);
		cant_elementos_seguridad = pcamioneta->get_elemtenos_seguridad();

		return;
	}
	if (ptrafic != NULL) {
		ptrafic->agg_silla_seguridad(cantidad);
		ptrafic->agg_asiento_aux(cantidad2);
		cant_elementos_seguridad = ptrafic->get_elemtenos_seguridad();

		return;
	}
	
}
string cAlquiler::getclave()
{
	return clave_alquiler;
}
string cAlquiler::tostring()
{
	string aux = ".-.-.-.-.-.-.-.-.Alquiler  " +clave_alquiler  + ".-.-.-.-.-.-.-.-.-.-.\n" +
		"-Datos del vehiculo: \n" + vehiculo->tostring() +
		"-Datos del cliente: \n" + cliente->tostring() +
		"\n-Datos del alquiler: \n" + "Clave del alquiler: " + clave_alquiler + "\nFecha inicio: " + to_string(fecha_inicio.tm_mday) + "/" + to_string(fecha_inicio.tm_mon + 1) + "/" + to_string(fecha_inicio.tm_year) + "\nFecha final: " + to_string(fecha_final.tm_mday) + "/" + to_string(fecha_final.tm_mon + 1) + "/" + to_string(fecha_final.tm_year) + "\nMonto total: " + to_string(monto_total) + ".-"
		+"\nElementos de seguridad: "+to_string(cant_elementos_seguridad)
		+"\n.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.-.-.-.-.-.-.-.-.\n";
	return aux;
}

void cAlquiler::imprimir()
{
	cout << tostring() << endl;
}
