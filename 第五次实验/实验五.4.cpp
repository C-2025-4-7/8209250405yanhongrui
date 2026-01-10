#include<iostream>
using namespace std;
class Student {
public:
	int num;
	int grade;
	void student(int n,int g)
	{
		n = num;
		g = grade;
	}
};
void max(Student* p, int n)
{
	int score = p->grade;
	int id = p->num;
	for (int i = 1; i < n; i++) {
		if ((p + i)->grade > score) {
			score = (p + i)->grade;
			id = (p + i)->num;
		}
	}
	cout << "最高成绩为：" << score<<endl;
	cout << "对应的学号为：" << id << endl;


}
int main()
{
	Student stu[5];
	for (int i = 0; i < 5; i++) {
		cout << "输入第" << i + 1 << "个学生的学号和成绩：";
		int id, s;
		cin >> id >> s;
		stu[i].student(id, s);
	}
	max(stu, 5);
	return 0;

}
