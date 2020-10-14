// P.469 - Listing 9.8
// twofile2.cpp -- varialbes with internal and external linkage
#include <iostream>
extern int tom;			// tom defined elsewhere
static int dick = 10;	// overrides external dick
int harry = 200;		// external variable definintion,
						// no confilict with twofil1 harry

void remote_access() {
	using namespace std;
	cout << "remote_access() reports the follwing addresses: \n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}