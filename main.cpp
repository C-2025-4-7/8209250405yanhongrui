#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	double num, fah;
	cout << "请输入摄氏度，华氏度：";
	cin >> num;
	cout << ",";
	cin >> fah;
	cout << "Celsius\t" << "Fahrenheit\t" << "|\t" << "Fahrenheit\t" << "Celsius\t" << endl;
	for (int i = 1; i <= 11;) {
		cout << fixed << setprecision(2);
		cout << num << "\t" << celsius_to_fah(num) << "\t" <<"|\t"<< fah << "\t" << fahrenheit_to_cels(fah) << "\t" << endl;
		num--;
		fah--;
		fah--;
		fah--;
		fah--;
		fah--;
		fah--;
		fah--;
		fah--;
		fah--;
		fah--;
		i++;	
	}
}