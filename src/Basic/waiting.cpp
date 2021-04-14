// waiting.cpp -- clock()을 시간 지연 루프에 사용한다.
#include <iostream>
#include <ctime>
int main() {
	using namespace std;
	cout << "지연 시간을 초 단위로 입력하십시오.";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;	// 지연 시간을 시스템 단위 클록 수로 변환
	cout << "카운트를 시작합니다.\a\n";
	clock_t start = clock();
	while (clock() - start < delay) {		// 시간이 경과할 때까지 대기
		if(clock() % 1000 == 0)
			cout << "현재시간: " << clock()/1000 << endl;
	}
		//;								// 세미콜론 유의
	cout << "종료\a\n";
	return 0;
}