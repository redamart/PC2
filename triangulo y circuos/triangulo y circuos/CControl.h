#pragma once
#include "CCirculo.h"
using namespace System::Drawing;

public ref class CControl{
private:
	array<CCirculo^>^ circulos;
public:
	CControl() {
		circulos = gcnew array<CCirculo^>(2);
		circulos[0] = gcnew CCirculo();
	}
	void dibujarc(Graphics^ g){
		for (int i = 0; i < 1; i++) {
			circulos[i]->dibujar(g);
			circulos[i]->mover();
		};
	}
};