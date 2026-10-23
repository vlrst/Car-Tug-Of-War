#include "Kinematics.hpp"
#include <SDL3/SDL.h>
#include <iostream>
#include <vector>

Kinematics::Kinematics() {}

Kinematics::Kinematics(float vel_i, float vel_f, float avg_v, float a, float avg_a, float t, float d) {
	this->vel_i = vel_i;
	this->vel_f = vel_f;
	this->avg_v = avg_v;
	this->a = a;
	this->avg_a = avg_a;
	this->t = t;
	this->d = d;
}

