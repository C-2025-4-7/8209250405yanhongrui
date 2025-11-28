#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float num1,num2,num3;
	char a;
	cout << "请依次输入一个数字，一个运算符和一个数字";
	cin >> num1 >> a >> num2;
	if (a == '+') {
		num3 = num1 + num2;
		cout << num1 << "+" << num2 << "=" << num3 << endl;
	}
	else if (a == '-') {
		num3 = num1 - num2;
		cout << num1 << "-" << num2 << "=" << num3 << endl;
	}
	else if (a == '*') {
		num3 = num1*num2;
		cout << num1 << "*" << num2 << "=" << num3 << endl;
	}
	else if (a == '/') {
		if (num2 == 0) {
			cout << "除数不能为零" << endl;
		}
		else {
			num3 = num1 / num2;
			cout << num1 << "/" << num2 << "=" << num3 << endl;
		}
	}
	else if (a == '%') {
		
		if (num2 == 0) {
			cout << "除数不能为零" << endl;
		}
		else {
			num3 = (int)num1 % (int)num2;
			cout << num1 << "%" << num2 << "=" << num3 << endl;
		}
	}
	else {
		cout << "运算符非法" << endl;
	}
	return 0;
}