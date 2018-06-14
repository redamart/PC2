#pragma once

using namespace System;
using namespace System::Drawing;

public ref class CCirculo {
private:
	int posX;
	int posY;
	int rad;
	int color;
	int vel;
	bool cambio;
public:
	CCirculo() {
		Random r;
		color = 1;
		rad = r.Next(5, 50);
		posX = r.Next(0, 2 * rad);
		posY = r.Next(0, 2 * rad);
		vel = r.Next(1,20);
		cambio = false;

	}
	void dibujar(Graphics^ g) {
		g->FillEllipse(Brushes::Red, posX, posY,rad*2, rad*2);

	}
	void mover() {
		if (cambio == false) {
			posX += vel;
		}
		else {
			posX -=  vel;
		}
	}
	void cambio() {
		if (posX > 2 * rad) {
			cambio = true;
		}
		if (posX <= 0) {
			cambio = false;
		}
	}
};