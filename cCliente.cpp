#include "cCliente.h"

cCliente::cCliente(string DNI, string nombre, string apellido)
{
	this->DNI = DNI;
	this->nombre = nombre;
	this->apellido = apellido;

	/*lista_Clientes.AgregarItem(this);*/
}

//cLista<cCliente>& cCliente::get_lista()
//{
//	return lista_Clientes;
//}

string cCliente::getclave()
{
	return DNI;
}

string cCliente::tostring()
{
	string aux = "Nombre y apellido: " + nombre + ' ' + apellido + "\nDNI: " + DNI;
	return aux;
}

void cCliente::imprimir()
{
	cout << tostring() << endl;
}
