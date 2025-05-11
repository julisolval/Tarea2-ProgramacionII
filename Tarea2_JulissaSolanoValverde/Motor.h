#pragma once
#include <string>
#include <iostream>

/*
Principio de Responsabilidad Única: maneja únicamente lo relacionado al Motor
Principio de Parnas: private y public (oculta detalles internos y expone lo esencial)
*/

class Motor
{
private:
	std::string Tipo;
	int Potencia;
	bool Encendido;
public:
	Motor();
	Motor(const std::string&, int);
	virtual ~Motor() = default;

	void encender();
	void apagar();
	void mostrar() const;
};

