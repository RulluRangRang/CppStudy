// bigstep.cpp -- count as directed
// Listing 05.5, ���� P.246
#include <iostream>
int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "������ �ϳ� �Է��Ͻʽÿ�: ";
	int by;
	cin >> by;
	cout << "���� ũ�� " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;
}