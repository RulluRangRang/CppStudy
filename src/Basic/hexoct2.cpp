// P.87 - Listing 03.4
#include <iostream>
int main() {
	using namespace std;
	int chest = 42;		// 10�� ������ ���
	int waist = 42;	// 16�� ������ ���
	int inseam = 42;	// 8�� ������ ���

	cout << "�մ� ���Ŵ� �Ѹ���� ���� �ݴϴ�.\n";
	cout << "�����ѷ� " << chest << "\n";
	cout << hex;		// ������ �ٲٴ� ������
	cout << "�㸮�ѷ� " << waist << "\n";
	cout << oct;		// ������ �ٲٴ� ������
	cout << "�νɱ��� " << inseam << "\n";
	return 0;
}