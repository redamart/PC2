#pragma once
#include "CCirculo.h"
using namespace System::Drawing;

public ref class CControl{
private:
	array<CCirculo^>^ circulos;
	int c;
public:
	CControl() {
		c = 0;
		circulos = gcnew array<CCirculo^>(100);
		
	}
	void agregarC() {
		circulos[c] = gcnew CCirculo();
		c++;
	}
	void dibujarc(Graphics^ g){
		for (int i = 0; i < c; i++) {
			circulos[i]->dibujar(g);
			circulos[i]->mover();
			circulos[i]->cambio();
		};
	}
};