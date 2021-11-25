#include "Exam.h"

Exam::~Exam()
{
}

Exam::Exam(Faculty* f, Department* d, Student* s, SeniorLecturer* l, Discipline* di) :
	faculty(f), department(d), student(s), lecturer(l), discipline(di), mark(0)
{
	cout << "Added to studiyng course exam on faculty " << this->faculty->abbreviature <<
		" on department " << this->department->name<<endl;
	cout << "Exam of discipline " << this->discipline->getName() << " is taken by student " << this->student->getFullName() << " and checked by lecturer " << this->lecturer->getFullName()<<endl;
}

void Exam::takeExam(string date)
{
	cout << "Date: " << date << endl;
	cout << "Exam of discipline " << this->discipline->getName() << " is taking by student " << this->student->getFullName() << " and checking by lecturer " << this->lecturer->getFullName()<<endl;
	int score = rand() % 4 + 2;
	this->lecturer->setExamSign(this);
	cout << "Student scored " << score << endl;
	if (score < 3)this->faculty->deductStudent(this->student);
	else
	{
		cout << "Great work! Continue your study" << endl;
	}
}

ostream& operator<<(std::ostream& out, Exam& d)
{
	out << d.discipline << " " << d.date;
	return out;
}
