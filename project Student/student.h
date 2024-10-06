#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Student
{
	string name;
	int registrationNumber;
	map<string, int> grades;

	Student(string studentName, int regNumber) : name(studentName), registrationNumber(regNumber) {}

	// ��������� ������ �������� �� ������ ����������
	void addGrade(string subject, int grade);

	// ���������� ������ �������� �� ���������� ����������
	int getGrade(string subject);

	// ��������� ������� ������ �������� �� ���� �����������
	double calculateAverageGrade();

	// ���������� ����������� ������ �������� �� ���� �����������
	int getMinGrade();

	// ���������� ������������ ������ �������� �� ���� �����������
	int getMaxGrade();

	// ������� ��� ���������� � ��������
	void printSummary();
};

// ��������� �������
void checkStudents(vector<Student>);