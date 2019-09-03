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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Empleado.h"

Empleado::Empleado() {
	srand(time(NULL));
	identificador = 1 + (std::rand() %101-1);
}

Empleado::Empleado(const std::string &nombre, int anno, double salario):nombre(nombre),anno(anno),salario(salario) {
	srand(time(NULL));
	identificador = 1 + (std::rand() %101-1);
}

double Empleado::aumentaElSalario(int& annoPtr) {
	double salarioA = 0;
	if (annoPtr >= MINIMA && annoPtr < MAXIMA) {
		return salarioA = salario + (salario*(2 / 100 * annoPtr));
	}
	else
		if (annoPtr >= MAXIMA) {
			return salarioA = salario + (salario*(5 / 100 * annoPtr));
		}
}

void Empleado::procesoDeRevision(bool *revisarsePr) {
	if (rand() % 2 == 0) {
		*revisarsePr = true;
	}
	else {
		*revisarsePr = false;
	}
}

std::string Empleado::obtenerReporteEmpleado() {
	std::string reporte;
	std::string verdad;
	procesoDeRevision(&revisarse);
	verdad = std::to_string(revisarse);

	reporte += "Empleado # [" + std::to_string(identificador) + "]\n\tNombre [" + nombre + "]\n\tAños de experiencia [" + std::to_string(anno) + "]\n\tSalario Inicial [" +
			std::to_string(salario) + "]\n\tSalario Acumulado [" + std::to_string(aumentaElSalario(anno)) + "]\n\tNecesita revision [" + verdad + "]\n";

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