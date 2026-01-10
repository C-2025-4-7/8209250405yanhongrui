#include<iostream>
using namespace std;
class Cuboid {
private:
	int length;
	int width;
	int height;
public:
	void input()
	{
		cout << "请输入长，宽，高：";
		cin >> length;
		cin >> width;
		cin >> height;
		cout << endl;
	}
	void output()
	{
		int v = length * width * height;
		cout << "长方体体积为：" << v << endl;
	}
};
int main() {
	Cuboid cub[3];
	for (int i = 0; i < 3; i++)
	{
		cub[i].input();
		cout << "第" << i + 1 << "个";
		cub[i].output();
	}
	
}