//student.h
#include<iostream>
using namespace std;
class Student
{

private:
	int num;
	char name[20];
	char sex;
public:
	void display();
	void set_value(int n,const char na[],char s) {
		n = num;
		na = name;
		s = sex;
	}
};

