// addpntrs.cpp -- pointer addition
#include <iostream>
int main() {
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3,2,1 };

	// Here are two ways get the address of an array
	double* pw = wages;			// name of an array = address
	short* ps = &stacks[0];		// or use address operator
	// with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	/*cout << "ps";*/
}