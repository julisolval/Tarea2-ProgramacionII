#include "Conductor.h"

Conductor::Conductor(): Nombre{"Indef"}, Licencia{"Indef"}, vehiculo{nullptr}{}

Conductor::Conductor(const std::string& Nombre, const std::string& Licencia, Vehiculo* vehiculo): Nombre{Nombre}, Licencia{Licencia}, vehiculo{vehiculo}{}

void Conductor::conducir()
{
	std::cout << Nombre << " est\240 conduciendo el veh\241culo\n";
	vehiculo->iniciar();
}

void Conductor::mostrarInfo() const
{
	std::cout << "Conductor: " << Nombre << ", Licencia: " << Licencia << "\n";
	vehiculo->mostrarDetalles();
}
