#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<Student> students;
	students.push_back(Student("���� ������", 1));
	students.push_back(Student("ϸ�� ������", 2));
	students.push_back(Student("������� �������", 3));

	students[0].addGrade("����������", 4);
	students[0].addGrade("�����������", 5);
	students[0].addGrade("�����", 3);
	students[0].addGrade("�������", 5);
	students[0].addGrade("���������� ����", 3);

	students[1].addGrade("����������", 5);
	students[1].addGrade("�����������", 5);
	students[1].addGrade("�����", 5);
	students[1].addGrade("�������", 5);
	students[1].addGrade("���������� ����", 5);

	students[2].addGrade("����������", 3);
	students[2].addGrade("�����������", 2);
	students[2].addGrade("�����", 2);
	students[0].addGrade("�������", 4);
	students[0].addGrade("���������� ����", 3);

	int grade = students[0].getGrade("�����");
	if (grade != -1)
		cout << "������ �� ����� ��� ������� �������: " << grade << endl;
	else cout << "������ �� ����� ��� ������� �������� �� �������" << endl;
	cout << endl;

	for (Student student : students)
	{
		student.printSummary();
		cout << endl;
	}

	checkStudents(students);
}