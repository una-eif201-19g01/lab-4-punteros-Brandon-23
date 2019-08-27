/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-26
 *
 *         Author:  Brandon Alexander Arguedas Murillo Brandonxd1970@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include "Empleado.h"
#include <ctime>
#include <stdlib.h>

Empleado::Empleado() {
	nombre = "";
	anno = 0;
	salario = 0;
}

Empleado::Empleado(int ID, bool rev) {
	identificador = 1 + (rand() % (101 - 1));
	srand(time(NULL));
	revisarse = rev;
}

double Empleado::aumentaElSalario(int *annoPtr) {
	double salarioA = 0;
	if (anno >= MINIMA && anno < MAXIMA) {
		return salarioA = salario + (salario*(2 / 100 * anno));
	}
	else
		if (anno >= MAXIMA) {
			return salarioA = salario + (salario*(5 / 100 * anno));
		}
}

void Empleado::procesoDeRevision(int& pulsoPtr) {
	int pulso = (rand() % 4);
	srand(time(NULL));
	if (pulso == pulsoPtr) {
		revisarse = true;
	}
}

std::string Empleado::obtenerReporteEmpleado(std::string reporte) {
	std::string verdad = "No";
	int pulso = 0;
	procesoDeRevision(pulso);

	if (pulso < 3) {
		pulso++;
		if (revisarse = true) {
			verdad = "Si";
		}
	}

	reporte += "Empleado # [" + std::to_string(identificador) + "]\n\tNombre [" + nombre + "]\n\tAños de experiencia [" + std::to_string(anno) + "]\n\tSalario Inicial [" +
			std::to_string(salario) + "]\n\tSalario Acumulado [" + std::to_string(aumentaElSalario(&anno)) + "]\n\tNecesita revision [" + verdad + "]\n";

	return reporte;
}

int Empleado::getIdentificador() {
	return identificador;
}

std::string Empleado::getNombre() {
	return nombre;
}

int Empleado::getAnno() {
	return anno;
}

double Empleado::getSalario() {
	return salario;
}

bool Empleado::getRevisarse() {
	return revisarse;
}

void Empleado::setIdentificador(int ID) {
	Empleado::identificador = ID;
}

void Empleado::setNombre(std::string nom) {
	Empleado::nombre = nom;
}

void Empleado::setAnno(int a) {
	Empleado::anno = a;
}

void Empleado::setSalario(double s){
	Empleado::salario = s;
}

void Empleado::setRevisarse(bool rev) {
	Empleado::revisarse = rev;
}