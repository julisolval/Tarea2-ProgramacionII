#include "Conductor.h"

int main() {
	Motor motor("Diesel", 120);
	motor.encender();

	std::vector<Rueda> ruedas;
	for (int i = 0; i < 4; i++) {
		ruedas.push_back(Rueda(16.0, "Todo terreno"));
	}

	Vehiculo carro("Toyota", "Hilux", motor, ruedas);
	Conductor conductor("Juan P\202rez", "B123456", &carro);
	
	conductor.mostrarInfo();
	conductor.conducir();
	carro.detener();
	return 0;
}