#include "Motor.h"

Motor::Motor() : Tipo{ "Indef" }, Potencia{ 0 }, Encendido{ false } {}

Motor::Motor(const std::string& Tipo, int Potencia) : Tipo{ Tipo }, Potencia{ Potencia }, Encendido{ false } {}

void Motor::encender()
{
	Encendido = true;
	std::cout << "Motor encendido (" << Tipo << ", " << Potencia << " HP)\n";
}

void Motor::apagar()
{
	Encendido = false;
	std::cout << "Motor apagado\n";
}

void Motor::mostrar() const
{
	std::cout << "Motor: " << Tipo << ", Potencia: " << Potencia << " HP\n";
}
