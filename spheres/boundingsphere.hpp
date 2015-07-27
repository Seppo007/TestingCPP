#pragma once

#include <cmath>

class BoundingSphere{

	public:
		int GetContactSituation(const BoundingSphere& other) const;
		BoundingSphere(float center[3], float rad){
			for(int i = 0; i < 3; i++){
				m_centerPoint[i] = center[i];
				m_radius = rad;
			};

		}

	private:
		float m_centerPoint[3];
		float m_radius;

};


int BoundingSphere::GetContactSituation(const BoundingSphere& other) const {

	int contact = 4;

	float dVec[3], dist, dotProd = 0;
	float r_sum = m_radius + other.m_radius;

	for(int i = 0; i < 4; i++){
		dVec[i] = std::fabs(m_centerPoint[i] - other.m_centerPoint[i]);
		dotProd += dVec[i] * dVec[i];
	}

	dist = sqrtf(dotProd);

	if(dist < r_sum){

		contact = 3;

		bool inside = true;
		for(int i = 0; i < 3; i++){
		}

	}

	return contact;

}
