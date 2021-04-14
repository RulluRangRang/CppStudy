// Eng P.130 - Listing 4.6
// numstr.cpp -- following number input with line input
#include <iostream>
int main() {
	using namespace std;
	cout << "What year was your house build?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80); // <- �Է� ��ȸ ���� 
	// ���� : ���ֿ����� �Է��ϰ� EnterŰ�� ���� ���� ���ڸ� �Է� ť�� ���� �α� ������ �߻�
	// �ذ��� 1. cin>>year; �Ŀ� cin.get() �Ǵ� cin.get(ch) ���
	// �ذ��� 2. (cin>>year).get(); �Ǵ� (cin>>year).get(��) ���
	cout << "Year build: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}