#include <iostream>
#include <cmath>
#include <cstdlib>
#include "main.hpp"

// Prototypes
void NLERPQuaternion(const float firstQuaternion[4], const float secondQuaternion[4], float alpha, float result[4]);

int main(){

	bool run = true;
	bool toSec = true;

	float quat1[4] { 0.f, 1.f, 1.f, 0.f };
	float quat2[4] { 1.f, 0.0f, 0.f, 0.f };
	float alpha = 0.0f;
	float result[4];

	while(run){

		if(toSec && alpha < 1){
			alpha+=0.05f;
		} else if(alpha > 0){
			alpha-=0.05f;
			toSec = false;
		} else {
			toSec = true;
		}

		NLERPQuaternion(quat1, quat2, alpha, result);

		std::cout << "Alpha is: " << alpha << std::endl;
		for(int i = 0; i < 4; i++){
			std::cout << result[i] << std::endl;
		}

		_sleep(250);

	}


	return 0;

}


void NLERPQuaternion(const float firstQuaternion[4], const float secondQuaternion[4], float alpha, float result[4]){

	float q[4], p[4], diff[4], up[4];
	for(int i = 0; i < 4; i++){
		q[i] = firstQuaternion[i];
		p[i] = secondQuaternion[i];
	}

	for(int i = 0; i < 4; i++){
		diff[i] = p[i] - q[i];
		up[i] = q[i] + alpha * diff[i];
	}

	//float conjugated[4] { up[0], -up[1], -up[2], -up[3] };
	//float downr = 0;
	float len = 0;
	//downr = up[0] * conjugated[0] - up[1] * conjugated[1] - up[2] * conjugated[2] - up[3] * conjugated[3];

	for(int i = 0; i < 4; i++){
		len += up[i] * up[i];
	}

	len = sqrtf(len);
	//downr = sqrtf(downr);

	for(int i = 0; i < 4; i++){
		//result[i] = up[i] * (1 / downr);
		result[i] = up[i] / len;
	}

}
