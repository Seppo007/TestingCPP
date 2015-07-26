#include "testing.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

#include <glm/glm.hpp>

bool myFunc(glm::vec2 first, glm::vec2 second){
	return (first.x < second.x);
}

int main(){

	const float firstQuaternion[4] { 0.f, 1.f, 2.f, 1.f };
	const float secondQuaternion[4] { 0.f, 2.f, 1.f, 1.f };
	const float alpha = 0.4f;

	float zaehler[4];

	for(size_t i = 0; i < 4; i++){
		zaehler[i] = firstQuaternion[i] + alpha * (secondQuaternion[i] - firstQuaternion[i]);
	}

	std::cout << "zaehler[2] = " << zaehler[2] << std::endl;

	/*std::vector<glm::vec2> myVec;

	myVec.push_back({1, 32.25});
	myVec.push_back({3, 626.24});
	myVec.push_back({2, 3.14});
	myVec.push_back({2, 62.1});
	myVec.push_back({3, 62.1});
	myVec.push_back({1, 3.14});

	std::stable_sort(myVec.begin(), myVec.end(), myFunc);

	for(std::vector<glm::vec2>::iterator it = myVec.begin(); it < myVec.end(); it++){
		std::cout << ' ' << "{" << (*it).x << ", " << (*it).y << "}" << std::endl;
	}*/

	std::cout << std::endl << std::endl;

	return 0;

}
