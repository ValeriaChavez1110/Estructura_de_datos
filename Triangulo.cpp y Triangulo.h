//Triangulo.cpp
#include "stdafx.h"
#include "Triangulo.h"

Triangulo::Triangulo()
{
}

//Triangulo.h
#pragma once
#include  "Shape.h"

class Triangulo : public Shape 
{
public:
	Triangulo();
	int getArea() {
		return ((ancho * alto) / 2);
	}
};
