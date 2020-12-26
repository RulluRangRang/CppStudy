// P.118 - Listing 03.13
#include <iostream>
int main() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;			// int형을 float형으로 변환
	int guess = 3.9812;		// float형을 int형으로 변환
	int debt = 7.2E12;		// 결과를 예측할 수 없다
	cout << "tree = " << tree << endl;
	cout << "guess= " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}