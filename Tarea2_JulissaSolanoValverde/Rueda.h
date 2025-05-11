#pragma once
#include <string>
#include <iostream>

/*
Principio de Responsabilidad Única: maneja únicamente lo relacionado a la Rueda
Principio de Parnas: private y public (oculta detalles internos y expone lo esencial)
*/

class Rueda
{
private:
	float Tamanio;
	std::string tipo;
public:
	Rueda();
	Rueda(float, std::string);
	virtual ~Rueda() = default;

	void inflar();
	void desinflar();
	void mostrar() const;
};

