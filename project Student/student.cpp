#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

// ��������� ������ �������� �� ������ ����������
void Student::addGrade(string subject, int grade)
{
	grades[subject] = grade;
}

// ���������� ������ �������� �� ���������� ����������
int Student::getGrade(string subject)
{
	auto it = grades.find(subject);
	if (it != grades.end())
		return it->second;
	return -1;
}

// ��������� ������� ������ �������� �� ���� �����������
double Student::calculateAverageGrade()
{
	double sum = 0;
	for (const auto& pair : grades)
		sum += pair.second;
	return (grades.empty() ? 0 : sum / grades.size());
}

// ���������� ����������� ������ �������� �� ���� �����������
int Student::getMinGrade()
{
	int minGrade = INT_MAX;
	for (const auto& pair : grades)
		if (pair.second < minGrade)
			minGrade = pair.second;
	return (grades.empty() ? -1 : minGrade);
}

// ���������� ������������ ������ �������� �� ���� �����������
int Student::getMaxGrade()
{
	int maxGrade = INT_MIN;
	for (const auto& pair : grades)
		if (pair.second > maxGrade)
			maxGrade = pair.second;
	return (grades.empty() ? -1 : maxGrade);
}

// ������� ��� ���������� � ��������
void Student::printSummary()
{
	cout << "��� ��������: " << name << endl;
	cout << "��������������� �����: " << registrationNumber << endl;
	cout << "������� ������:: " << calculateAverageGrade() << endl;
	cout << "����������� ������: " << getMinGrade() << endl;
	cout << "������������ ������: " << getMaxGrade() << endl;
}

// ��������� �������
void checkStudents(vector<Student> students)
{
	cout << "��������, ������� ����� ��� �������� �� 5:" << endl;
	for (Student student : students)
	{
		bool allGradesAre5 = true;
		for (const auto& pair : student.grades)
			if (pair.second != 5)
			{
				allGradesAre5 = false;
				break;
			}
		if (allGradesAre5)
			student.printSummary();
	}
	cout << endl;

	cout << "�������� ������� ����� ���� �� ���� 3:" << endl;
	for (Student student : students)
		for (auto pair : student.grades)
			if (pair.second == 3)
			{
				student.printSummary();
				cout << endl;
				break;
			}
	cout << endl;

	cout << "�������� ������� ����� ���� �� ���� 2:" << endl;
	for (Student student : students)
		for (auto pair : student.grades)
			if (pair.second == 2)
			{
				student.printSummary();
				cout << endl;
				break;
			}
}