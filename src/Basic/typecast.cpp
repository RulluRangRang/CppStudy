// P. 122 - Listing 03.14
#include <iostream>
int main() {
	using namespace std;
	int auks, bats, coots;

	// ���� ������ �� ���� double������ ���� �Ŀ� 
	// �� ���� int������ ��ȯ�Ͽ� �����Ѵ�.
	auks = 19.99 + 11.99;

	// ���� �� ������ �� ���� int������ ��ȯ�� �Ŀ� ���Ѵ�.
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout << "�ٴٿ��� = " << auks << ", ���� = " << bats;
	cout << ", �˵տ��� = " << coots << endl;

	char ch = 'Z';
	cout << "�ڵ� " << ch << "�� ���� ";		// char������ ���
	cout << int(ch) << endl;				// int������ ���
	cout << "��, �ڵ� Z�� ���� ";
	cout << static_cast<int>(ch) << endl;	// int������ ���
	return 0;
}