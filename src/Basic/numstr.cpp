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
	cin.getline(address, 80); // <- 입력 기회 무시 
	// 이유 : 입주연도를 입력하고 Enter키가 만든 개행 문자를 입력 큐에 남겨 두기 때문에 발생
	// 해결방법 1. cin>>year; 후에 cin.get() 또는 cin.get(ch) 사용
	// 해결방법 2. (cin>>year).get(); 또는 (cin>>year).get(초) 사용
	cout << "Year build: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}