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

class cCamioneta :
    public cVehiculo
{
private:
    int silla_seguridad;
    float precio_silla_seguridad;
    int porta_equipaje;
    float precio_porta_equipaje;
public:
    cCamioneta(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa, int silla_seguridad, int porta_equipaje);
    void agg_silla_seguridad(int nro_silla);
    void agg_porta_equipaje(int nro_porta_equipaje);
    float calcular_tarifa_vehiculo();
    int get_elemtenos_seguridad();
    void pasos_mantenimiento();
    void set_precio_elemento_seguridad(float precio);
    string tostring();
    void imprimir();
    ~cCamioneta() {}



};


