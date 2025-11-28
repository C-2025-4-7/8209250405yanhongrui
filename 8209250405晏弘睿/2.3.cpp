#include<iostream>
using namespace std;
int main()
{
	float num1, num2, num3;
	float c;
	cout << "请输入三角形的三条边：";
	cin >> num1>>num2>>num3;
	if (num1 <= num2 + num3 && num2 <= num1 + num3 && num3 <= num1 + num2) {

		c = num1 + num2 + num3;
		cout << "该三条边可以组成一个三角形，且该三角形的周长C=" << c << endl;
		if (num1 == num2 || num1 == num3 || num2 == num3){
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不为等腰三角形" << endl;
		}
	}
	else {
		cout << "该三条边无法组成三角形" << endl;
	}
	



	return 0;
}