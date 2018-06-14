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
	bool cam;
public:
	CCirculo() {
		Random r;
		color = 1;
		rad = r.Next(5, 50);
		posX = r.Next(0, 500- (2 * rad));
		posY = r.Next(0, 500-(2 * rad));
		vel = 20;
		//r.Next(1, 20)
		cam = false;

	}
	void dibujar(Graphics^ g) {
		g->FillEllipse(Brushes::Red, posX, posY,rad*2, rad*2);

	}
	void mover() {
		if (cam == false) {
			posX = posX + vel;
		}
		else {
			posX = posX- vel;
		}
	}
	void cambio() {
		if (posX >( 500 - (2 * rad))) {
			cam= true;
		}
		if (posX <= 0) {
			cam= false;
		}
	}
};