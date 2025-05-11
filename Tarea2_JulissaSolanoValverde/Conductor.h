#pragma once
#include "Vehiculo.h"

/*
Principio de Responsabilidad Única: maneja únicamente lo relacionado al Conductor
Principio de Parnas: private y public (oculta detalles internos y expone lo esencial)
Ley de Demeter: al llamar los métodos del vehículo iniciar() y mostrarDetalles() sin encadenamiento,
ya que es una dependencia inmediata
*/

class Conductor
{
private:
	std::string Nombre, Licencia;
	Vehiculo* vehiculo;
public:
	Conductor();
	Conductor(const std::string&, const std::string&, Vehiculo*);
	~Conductor() = default;

	void conducir();
	void mostrarInfo() const;

};

