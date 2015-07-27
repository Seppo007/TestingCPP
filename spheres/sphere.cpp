#include <iostream>

#include "sphere.hpp"
#include "boundingsphere.hpp"

#include <iostream>

int main(){

	float first[3] = { 2.f, 2.f, 2.f };
	float secnd[3] = { 2.f, 2.f, 3.f };

	BoundingSphere sphere1(first, 1);
	BoundingSphere sphere2(secnd, 1);

	int ergebnis = sphere1.GetContactSituation(sphere2);

	std::cout << "Das Ergebnis ist: " << ergebnis << std::endl;


	return 0;

}
