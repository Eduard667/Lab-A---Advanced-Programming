#include <iostream>

int main(int argc, char** argv) {

	std::cout << "Enter temperature in Fahrenheit" << std::endl;
	double fahrenheit;
	std::cin >> fahrenheit;

	double celsius = 5.0 / 9.0 * (fahrenheit - 32); // needs to be in floating point, as 5/9 would be integer division
	std::cout << "Temperature in Celsius: " << celsius << std::endl;

	return 0;
}