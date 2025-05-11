#include "Rueda.h"

Rueda::Rueda() : Tamanio{ 0.0 }, tipo{ "Indef" } {}

Rueda::Rueda(float Tamanio, std::string tipo): Tamanio{Tamanio}, tipo{tipo}{}

void Rueda::inflar()
{
	std::cout << "Rueda inflada (" << tipo << ", " << Tamanio << "\")\n";
}

void Rueda::desinflar()
{
	std::cout << "Rueda desinflada\n";
}

void Rueda::mostrar() const
{
	std::cout << "Rueda: " << tipo << ", Tama\xA4o: " << Tamanio << " pulgadas\n";
}
