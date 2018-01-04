#include "stdafx.h"
#include "NewClass.h"
#include <iostream>

double NewClass::divide(double a, double b) {
	double result = a / b;
	std::cout << "Result is: " << result << std::endl;
	return result;
}
