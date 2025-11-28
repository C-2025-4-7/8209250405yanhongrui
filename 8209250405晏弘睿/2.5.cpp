#include<iostream>
using namespace std;
int main()
{
	char a;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "请输入一串字符" << endl;
	while ((a = cin.get()) != '\n') {
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
			letters++;
		}
		else if (a == ' ') {
			spaces++;

		}
		else if (a >= '0' && a <= '9') {
			digits++;
		}
		else {
			others++;
		}
	}
	cout << "字母个数"<<letters<<endl;
	cout << "空格个数"<<spaces<<endl;
	cout << "数字个数"<<digits<<endl;
	cout << "其他字符个数"<<others<<endl;




	return 0;
}