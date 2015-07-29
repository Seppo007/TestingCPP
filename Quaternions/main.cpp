#include <iostream>
#include <cmath>
#include <cstdlib>
#include "main.hpp"

int main(){

	float q[4] { 0.5f, 1.f, 1.f, 0.5f };
	float qNormalized[4];

	float betrag = 0.f;
	for(int i = 0; i < 4; i++){
		betrag += q[i] * q[i];
	}
	betrag = sqrtf(betrag);

	std::cout << "Betrag von Quat1: " << betrag << std::endl;

	for(int i = 0; i < 4; i++){
		qNormalized[i] = q[i] / betrag;
	}

	betrag = 0.f;
	for(int i = 0; i < 4; i++){
		betrag += qNormalized[i] * qNormalized[i];
	}
	betrag = sqrtf(betrag);

	std::cout << "Betrag nach Normalisierung: " << betrag << std::endl;

	return 0;

}
