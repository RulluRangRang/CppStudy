// waiting.cpp -- clock()�� �ð� ���� ������ ����Ѵ�.
#include <iostream>
#include <ctime>
int main() {
	using namespace std;
	cout << "���� �ð��� �� ������ �Է��Ͻʽÿ�.";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;	// ���� �ð��� �ý��� ���� Ŭ�� ���� ��ȯ
	cout << "ī��Ʈ�� �����մϴ�.\a\n";
	clock_t start = clock();
	while (clock() - start < delay) {		// �ð��� ����� ������ ���
		if(clock() % 1000 == 0)
			cout << "����ð�: " << clock()/1000 << endl;
	}
		//;								// �����ݷ� ����
	cout << "����\a\n";
	return 0;
}