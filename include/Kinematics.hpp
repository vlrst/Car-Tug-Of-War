#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include <string>


class Kinematics {

	private:
		float vel_i;
		float vel_f;
		float avg_v;
		float a;
		float avg_a;
		float t;
		float d;
	public:
		Kinematics();
		Kinematics(float vel_i, float vel_f, float avg_v, float a, float avg_a, float t, float d);



}; 

