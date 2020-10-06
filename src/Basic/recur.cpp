// P.358 - Listing 7.16
#include <iostream>
void countdown(int n);

int main() {
	countdown(4);
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Counting down ... " << n << endl;
	if (n > 0)
		countdown(n - 1);	// function calls itself
	cout << n << ": Kaboom!\n";
}
