/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Brandon Alexander Arguedas Murillo Brandonxd1970@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Costantes
static const int MINIMA = 1;
static const int MAXIMA = 3;

class Empleado {
private:
	double aumentaElSalario(int& annoPtr);
	void procesoDeRevision(bool *revisarsePr);

protected:
	int identificador;
	std::string nombre;
	int numero;
	int anno;
	double salario;
	bool revisarse;

public:
	Empleado();
	Empleado(const std::string &nombre,int anno,double salario);

	std::string obtenerReporteEmpleado();

	int getIdentificador();

	std::string getNombre();

	int getAnno();

	double getSalario();

	bool getRevisarse();

	void setIdentificador(int ID);

	void setNombre(std::string nom);

	void setAnno(int a);

	void setSalario(double s);

	void setRevisarse(bool rev);
};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
