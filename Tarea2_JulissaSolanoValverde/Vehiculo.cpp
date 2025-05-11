#include "Vehiculo.h"

Vehiculo::Vehiculo() :Marca{ "Indef" }, Modelo{ "Indef" }, motor{}, rueda{} {}

Vehiculo::Vehiculo(const std::string& Marca, const std::string& Modelo, const Motor& motor, const std::vector<Rueda>& rueda) : Marca{ Marca }, Modelo{ Modelo }, motor{ motor }, rueda{ rueda } {}

void Vehiculo::iniciar()
{
	motor.encender();
	for (Rueda& rued : rueda) {
		rued.inflar();
	}
	std::cout << "Veh\241culo iniciado: " << Marca << " " << Modelo << "\n";
}

void Vehiculo::detener()
{
	motor.apagar();
	for (Rueda& rued : rueda) {
		rued.desinflar();
	}
	std::cout << "Veh\241culo detenido: " << Marca << " " << Modelo << "\n";
}

void Vehiculo::mostrarDetalles() const
{
	std::cout << "Veh\241culo: " << Marca << " " << Modelo << "\n";
	motor.mostrar();              
	for (const Rueda& rued : rueda) {
		rued.mostrar();
	}
}
