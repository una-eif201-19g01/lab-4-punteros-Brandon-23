#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Empleado.h"

int main() {

	Empleado empleado[3];

    empleado[0].setNombre("Mike");
    empleado[0].setAnno(2);
    empleado[0].setSalario(1200000);

	empleado[1].setNombre("Sebastian");
	empleado[1].setAnno(3);
	empleado[1].setSalario(1600000);

	empleado[2].setNombre("Carolina");
	empleado[2].setAnno(8);
	empleado[2].setSalario(1800000);

	empleado[3].setNombre("Emma");
	empleado[3].setAnno(1);
	empleado[3].setSalario(800000);

	for (int contador = 0; contador < 4; contador++) {
		std::cout << empleado[contador].obtenerReporteEmpleado() << std::endl;
	}

    return 0;
}