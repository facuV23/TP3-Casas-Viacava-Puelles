#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <time.h>
#include <math.h>

#include "cVehiculo.h"

using namespace std;

class cAutomovil :
    public cVehiculo
{
private:
    int silla_seguridad;
    float precio_silla_seguridad;
public:
    cAutomovil(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa, int silla_seguridad);
    void agg_silla_seguridad(int nro_silla);
    float calcular_tarifa_vehiculo();
    int get_elemtenos_seguridad();
    void pasos_mantenimiento();
    void set_precio_elemento_seguridad(float precio);
    string tostring();
    void imprimir();
    ~cAutomovil() {}



};

