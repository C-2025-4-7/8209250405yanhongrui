#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a;
	cout << "请输入一个正数：";
	cin >> a;
	
	if (a < 0)
	{
		cout << "你个春竹，说了要你输入正数" << endl;
		return 0;
	}
	else if (a == 0)
	{
		cout << "0的平方根为0" << endl;
		return 0;
	}
	
	else if(a>0){
		
		for (float x = (a + 1) / 2.0; ; x = (x + a / x) / 2.0) {
			if (((x + a / x) / 2.0 - x) > -1.0e-5 && ((x + a / x) / 2.0 - x) < 1.0e-5) {
			    cout << "a的平方根为：" << x << endl;
				break;
			}
		}
			   

			
	}
	
	
	




	
	return 0;
}