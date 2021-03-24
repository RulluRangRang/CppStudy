// forloop.cpp -- for 루프
// Listing 05.1, 국문 P.234
#include <iostream>
int main() {
	using namespace std;
	int i;		// 카운터를 선언한다.
	// 초기화; 조건 검사; 갱신
	for (i = 0; i < 5; i++)
		cout << "C++가 루플를 사용합니다.\n";
	cout << "루프를 언제 끝내야 하는지 C++는 알고 있습니다.\n";
	return 0;
}