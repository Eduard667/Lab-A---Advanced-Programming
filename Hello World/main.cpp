#include <iostream> // commenting out this line will cause an error, which disables the ability to read and write to the console window
using namespace std; // removing this will require std:: prefix for cout and endl

int main(int argc, char** argv) {

	std::cout << "Hello World" << std::endl;

	std::cout << sizeof(12345678901) << std::endl; // below 10 digits fits in 4 bytes, above fits in 8 bytes
	std::cout << sizeof("Hello world") << std::endl; // string literal size includes null terminator
	std::cout << sizeof("") << std::endl; // empty string still has a null terminator, so size is 1
	std::cout << sizeof(5.00) << std::endl; // double precision floating point number size is 8 bytes
	std::cout << sizeof(-5.00) << std::endl; // negative double precision floating point number size is also 8 bytes
	std::cout << sizeof(-127) << std::endl; // negative integer size is same as positive integer size, which is 4 bytes
	std::cout << sizeof(2000) << std::endl; // integer size is 4 bytes

	/*double a = 10.0;
	double b = 10.0;
	if (a == b)
		std::cout << "A and B are identical" << std::endl;*/ // comparing two identical double values - should print this line

		/*double x = 20.0;
		double y = 2.0;
		if (x == y)
			std::cout << "X and Y are identical" << std::endl*/; // comparing two different double values - should NOT print this line

			const double x = 100000.123456789; // changing this value may affect whether y and z are identical
			const double a = 200000.123456789;
			double y = (x + a) / x;
			// double z = 1.0 + (a / x);
			double z = x / y;
			if (y == z)
				std::cout << "y and z are identical" << std::endl;
			std::cout << "y: " << y << std::endl;
			std::cout << "z: " << z << std::endl;
			std::cout << "x: " << x << std::endl;
			std::cout << "a: " << a << std::endl; // demonstrating floating point precision issues, numbers after the decimal are rounded off

			return 0;
}