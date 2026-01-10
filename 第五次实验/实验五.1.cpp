#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void time() {
		cin >> hour;
		cin >> minute;
		cin >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}

};
int main()
{
	Time t1;
	t1.time();
	return 0;
}
