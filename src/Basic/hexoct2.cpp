// P.87 - Listing 03.4
#include <iostream>
int main() {
	using namespace std;
	int chest = 42;		// 10진 정수형 상수
	int waist = 42;	// 16진 정수형 상수
	int inseam = 42;	// 8진 정수형 상수

	cout << "손님 몸매는 한마디로 끝내 줍니다.\n";
	cout << "가슴둘레 " << chest << "\n";
	cout << hex;		// 진법을 바꾸는 조정자
	cout << "허리둘레 " << waist << "\n";
	cout << oct;		// 진법을 바꾸는 조정자
	cout << "인심길이 " << inseam << "\n";
	return 0;
}