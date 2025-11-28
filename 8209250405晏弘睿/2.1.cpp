#include<iostream>
using namespace std;
int main()
{
	char ch;
	int num;
	cout << "请输入一个字符：";
	cin >> ch;
	if ((int)ch>=97&&(int)ch<=122) {
		num = (int)ch - 32;
		cout << "则该字母的大写为：" << (char)num << endl;

	}
	else {
		cout << "该字符的ASCII码值为：" << (int)ch << endl;

	}



	return 0;
}
