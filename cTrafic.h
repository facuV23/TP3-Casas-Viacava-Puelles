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

class cTrafic :
    public cVehiculo
{
private:
    int silla_seguridad;
    float precio_silla_seguridad;
    int asiento_aux;
    float precio_asiento_aux;
public:
    cTrafic(string patente, string color, int nro_chasis, int nro_poliza, tm fecha_mantenimiento, float precio_dia, int capacidad_pasajeros, float tarifa, int silla_seguridad, int asiento_aux);
    void agg_silla_seguridad(int nro_silla);
    void agg_asiento_aux(int nro_asiento_aux);
    float calcular_tarifa_vehiculo();
    int get_elemtenos_seguridad();
    void pasos_mantenimiento();
    void set_precio_elemento_seguridad(float precio);
    string tostring();
    void imprimir();
    ~cTrafic() {}



};



