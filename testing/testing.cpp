#include "testing.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

#include <glm/glm.hpp>

bool myFunc(glm::vec2 first, glm::vec2 second){
	return (first.x < second.x);
}

int main(){

	std::vector<glm::vec2> myVec;

	myVec.push_back({1, 32.25});
	myVec.push_back({3, 626.24});
	myVec.push_back({2, 3.14});
	myVec.push_back({2, 62.1});
	myVec.push_back({3, 62.1});
	myVec.push_back({1, 3.14});

	std::stable_sort(myVec.begin(), myVec.end(), myFunc);

	for(std::vector<glm::vec2>::iterator it = myVec.begin(); it < myVec.end(); it++){
		std::cout << ' ' << "{" << (*it).x << ", " << (*it).y << "}" << std::endl;
	}

	std::cout << std::endl << std::endl;

	return 0;

}
