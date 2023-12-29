#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	cin >> a;
	cin >> b;
	c = a + b;
	cout << "Сумма чисел = " << c;
	
	return 0;
}