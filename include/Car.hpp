#pragma once 
#include <SDL3/SDL.h>
#include <iostream>
#include <vector>

class Car {
	private:
		float temperature;
//		const float surfaceArea;
	public:
		Car();
		Car(int temp);
//		Car(int temperature, float surfaceArea);
		void getInfo();

}; 
