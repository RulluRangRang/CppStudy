// P.118 - Listing 03.13
#include <iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;			// int���� float������ ��ȯ
	int guess = 3.9812;		// float���� int������ ��ȯ
	int debt = 7.2E12;		// ����� ������ �� ����
	cout << "tree = " << tree << endl;
	cout << "guess= " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}