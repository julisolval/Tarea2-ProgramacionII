#pragma once
#include "Motor.h"
#include "Rueda.h"
#include <vector>

/*
Principio de Responsabilidad �nica: maneja �nicamente lo relacionado al Veh�culo
Principio de Parnas: private y public (oculta detalles internos y expone lo esencial)
Ley de Demeter: al llamar los m�todos del motor encender(), apagar() y mostrar() sin encadenamiento,
ya que es una dependencia inmediata
*/

class Vehiculo
{
private:
	std::string Marca, Modelo;
	Motor motor;
	std::vector<Rueda> rueda;
public:
	Vehiculo();
	Vehiculo(const std::string&, const std::string&, const Motor&, const std::vector<Rueda>&);
	virtual ~Vehiculo() = default;

	void iniciar();
	void detener();
	void mostrarDetalles() const;
};

