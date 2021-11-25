#include "Department.h"
#include <iostream>
#include <fstream>
#include <string>
int Department::count = 0;
Department::Department(string _n) :name(_n), f(nullptr), headOfDepartment(nullptr)
{
	++this->count;
	cout << "Deparment \"" << this->name << "\" was created" << endl;
}

Department::~Department()
{
	++this->count;
	cout << "Deparment \"" << this->name << "\" was destroyed" << endl;
}

Department::Department() :Department("DepartmentC"+std::to_string(++this->count))
{

	cout << "Deparment \"" << this->name << "\" was created" << endl;
}

void Department::setHeadOfDepartment(Lecturer* l)
{
	this->headOfDepartment = l;
}

void Department::setFaculty(Faculty* f)
{
	this->f = f;
}
Faculty* Department::getFaculty()
{
	return this->f;
}
void Department::show()
{
	cout << "Department " << this->name << endl;
}
void Department::enrollLecturer(Lecturer* s)
{
	this->lecturers.push_back(s);
	s->setDepartment(this);
	cout << "Lecturer " << s->getFullName() << " was enrolled on the department " << this->name << endl;

}
void Department::deductLecturer(Lecturer* s)
{
	bool f = false;
	for (auto it = this->lecturers.begin(); it != this->lecturers.end(); it++)
	{
		if (s->getFullName() == (*it)->getFullName())
		{
			this->lecturers.erase(it);
			cout << "Lecturer " << s->getFullName() << " was deducted from the department " << this->name << endl;
			f = true;
			s->setDepartment(NULL);
			break;
		}
	}
	if (!f)
	{
		cout << "Lecturer " << s->getFullName() << " doesn't teach on this department " << this->name << endl;
	}
}
std::ostream& operator<<(std::ostream& out, Department& d) {
	
	out << "Department " << d.name;	
	return out;
}