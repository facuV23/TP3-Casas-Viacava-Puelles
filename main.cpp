#define _CRT_SECURE_NO_WARNINGS


#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <time.h>
#include <math.h>

#include "cLista.h"
#include "cVehiculo.h" 
#include "cMotocicleta.h"
#include "cAutomovil.h"
#include "cCamioneta.h"
#include "cTrafic.h"
#include "cCliente.h"
#include "cAlquiler.h"


using namespace std;

int main() {

	
	cVehiculo* moto1 = new cMotocicleta("asd 123", "rojo", 121, 12354, {0,0,0,0,0,0,0}, 800, 2,100,0);
	cVehiculo* auto1 = new cAutomovil("faf 235", "violeta", 456, 34621, { 0,0,0,0,0,0,0 }, 1000, 5, 200, 0);
	cVehiculo* camioneta1 = new cCamioneta("jgh 643", "verde", 784, 21548, { 0,0,0,0,0,0,0 }, 1200, 5, 250, 0,0);
	cVehiculo* trafic1 = new cTrafic("ljk 424", "blanca", 444, 789789, { 0,0,0,0,0,0,0 }, 3000, 12, 500, 0, 0);

	moto1->set_precio_elemento_seguridad(50);
	auto1->set_precio_elemento_seguridad(200);
	camioneta1->set_precio_elemento_seguridad(200);
	trafic1->set_precio_elemento_seguridad(200);
	
	moto1->pasos_mantenimiento();

	cLista<cVehiculo> lista_vehiculos(150);
	lista_vehiculos + moto1;
	lista_vehiculos + auto1;
	lista_vehiculos + camioneta1;
	lista_vehiculos + trafic1;
	lista_vehiculos.Listar();
	
	

	cCliente* cliente1 = new cCliente("43324602", "Facundo", "Viacava");
	cCliente* cliente2 = new cCliente("30612312", "Valentina", "Casad Guillot");
	cCliente* cliente3 = new cCliente("23565656", "Lucia", "Puelles");
	cCliente* cliente4 = new cCliente("44557878", "Pepe", "perez");
	cLista<cCliente> lista_clientes(150);
	lista_clientes+cliente1;
	lista_clientes.AgregarItem(cliente2);
	lista_clientes + cliente3;
	lista_clientes + cliente4;
	lista_clientes.Listar();
	

	cLista<cAlquiler> lista_alquileres(150);
	lista_alquileres.AgregarItem(new cAlquiler("asdasdew", moto1, cliente1, { 0,0,0,21,5,2021,0,0,0 }, { 0,0,0,23,5,2021,0,0,0 }));
	lista_alquileres.AgregarItem(new cAlquiler("dfsfds", auto1, cliente2, { 0,0,0,21,5,2021,0,0,0 }, { 0,0,0,23,5,2021,0,0,0 }));
	lista_alquileres.AgregarItem(new cAlquiler("asdw32", camioneta1, cliente3, { 0,0,0,21,5,2021,0,0,0 }, { 0,0,0,23,5,2021,0,0,0 }));
	lista_alquileres.AgregarItem(new cAlquiler("asd32322", trafic1, cliente4, { 0,0,0,21,5,2021,0,0,0 }, { 0,0,0,23,5,2021,0,0,0 }));
	lista_alquileres.BuscarItem("asdasdew")->agg_elemetos_seguridad(2,0);
	lista_alquileres.BuscarItem("dfsfds")->agg_elemetos_seguridad(1,0);
	lista_alquileres.BuscarItem("asdw32")->agg_elemetos_seguridad(2, 1);
	lista_alquileres.BuscarItem("asd32322")->agg_elemetos_seguridad(2, 2);

	
	lista_alquileres.BuscarItem("asdasdew")->calcular_tarifa();
	lista_alquileres.BuscarItem("dfsfds")->calcular_tarifa();	
	lista_alquileres.BuscarItem("asdw32")->calcular_tarifa();
	lista_alquileres.BuscarItem("asd32322")->calcular_tarifa();

	lista_alquileres.Listar();
	
	

	lista_vehiculos.Eliminar("asd 123");
	lista_vehiculos.Eliminar("faf 235");
	lista_vehiculos.Eliminar("jgh 643");
	lista_vehiculos.Eliminar("ljk 424");

	lista_clientes.Eliminar("43324602");
	lista_clientes.Eliminar("30612312");
	lista_clientes.Eliminar("23565656");
	lista_clientes.Eliminar("44557878");

	lista_alquileres.Eliminar("asdasdew");
	lista_alquileres.Eliminar("dfsfds");
	lista_alquileres.Eliminar("asdw32");
	lista_alquileres.Eliminar("asd32322");

	
	
	

	system("pause");
	return (0);
}