// P.381 - Listing 8.1
// inline functions are a C++ enhancement designed to speed up programs
#include <iostream>

// an inline function definition
inline double square(double x) { return x * x; }

int main() {
	using namespace std;
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c squared = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";
	return 0;
}

//#define SQUARE(X) X*X
//
//int main() {
//
//	std::cout << SQUARE(5.0) << std::endl;			// Result : 5.0 * 5.0 = 25
//	std::cout << SQUARE(4.5 + 7.5) << std::endl;	// Result : 4.5 + 7.5 * 4.5 + 7.5 = 45.75
//	std::cout << SQUARE(c++) << std::endl;			// Error  : c++*c++
//	int c = 1;
//	std::cout << SQUARE(c++) << std::endl;			// Result : 1
//}