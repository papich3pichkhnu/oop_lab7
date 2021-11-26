#include <iostream>
#include "Faculty.h"
#include "Student.h"
#include "Department.h"
#include "Lecturer.h"
#include "SeniorLecturer.h"
#include "AssociateProfessor.h"
#include "GraduateStudent.h"
#include "Exam.h"
#include "Vector.h"
#include <time.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include "myfunctors.h"
using namespace std;
//task 11
void showSquaredAge(Student s)
{
	cout << "Squared age of student \"" << s.getFullName() << "\": ";
	cout << (s.getAge()) * (s.getAge()) << endl;
}
//task 12
void showSquaredAge(Student* s)
{
	cout << "Squared age of student \"" << s->getFullName() << "\": ";
	cout << (s->getAge()) * (s->getAge()) << endl;
}
//task 13
Student createStudent()
{
	Student s;
	s.setName("Petrov", "Ivan", "Viktorovych");
	s.setData(25, 190);
	s.show();
	return s;
}
int main()
{
	srand(time(NULL));
#pragma region lab2  



	////task 6

	//Faculty faculty1, faculty2, faculty3, faculty4, faculty5;
	//Student* dynamicStudent1 = new Student();
	//Student* dynamicStudent2 = new Student();
	//Student* dynamicStudent3 = new Student();
	//Student* dynamicStudent4 = new Student();
	//Student* dynamicStudent5 = new Student();

	////task 7

	//Faculty arrayFaculties[5] = { faculty1,faculty2,faculty3,faculty4,faculty5 };
	//Student* dynamicArrayStudents[5];
	//dynamicArrayStudents[0] = dynamicStudent1;
	//dynamicArrayStudents[1] = dynamicStudent2;
	//dynamicArrayStudents[2] = dynamicStudent3;
	//dynamicArrayStudents[3] = dynamicStudent4;
	//dynamicArrayStudents[4] = dynamicStudent5;

	////task 8-9

	//cout << "Faculties" << endl;
	//for(int i=0;i<5;i++)
	//{
	//    char n = (char)(int('0') + i + 1);
	//    string sn = ""; sn += n;
	//    arrayFaculties[i].setFaculty("faculty" + sn, "FC" + sn);
	//    arrayFaculties[i].setInfo("decane" + sn, rand() % 20 + 2000, "123456789", "fac"+sn + "@gmail.com");
	//    arrayFaculties[i].setNumericData(rand() % 5 + 10, rand() % 5 + 10);
	//    arrayFaculties[i].modifyData(&arrayFaculties[i]);
	//    arrayFaculties[i] = arrayFaculties[i].returnWithModifiedData();
	//    cout << "Faculty " << i+1 << ":" << endl;
	//    arrayFaculties[i].show();
	//}
	//Faculty fileFaculty;
	//arrayFaculties[0].printToFile();
	//fileFaculty = Faculty::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Faculty written and read from file:" << endl;
	//fileFaculty.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << "Students" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//    cout << "Student " << i + 1<<endl;
	//    if (i % 2 == 0) {
	//        char n = (char)(int('0') + i + 1);
	//        string sn = ""; sn += n;
	//        dynamicArrayStudents[i]->setName("Name" + sn, "FirstName" + sn, "LastName" + sn);
	//        dynamicArrayStudents[i]->setEyesHair("brown", "blonde");
	//        dynamicArrayStudents[i]->setData(18,170);
	//        dynamicArrayStudents[i]->setFaculty(&arrayFaculties[i]);
	//        dynamicArrayStudents[i]->modifyName(dynamicArrayStudents[i]);
	//    }
	//    else {
	//        dynamicArrayStudents[i] = Student::generate();
	//    }
	//    dynamicArrayStudents[i]->show();
	//}
	//Student fileStudent;
	//dynamicArrayStudents[0]->printToFile();
	//fileStudent = Student::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Student written and read from file:" << endl;
	//fileStudent.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << endl;

	////task 10

	//cout << "Basic student and faculty interaction scenario" << endl;
	//Faculty fit;
	//fit.setFaculty("Faculty of information tchnologies", "FIT");
	//fit.setInfo("Savenko_O.S.", 2012, "(0382)67-19-43", "savenko_oleg_st@ukr.net");
	//fit.setNumericData(6, 8);
	//
	//Student stud;
	//stud.setName("Volodymyr", "Avsiievych", "Ruslanovych");
	//stud.setEyesHair("blue", "brown");
	//stud.setData(18, 174);
	//stud.setFaculty(&fit);
	//stud.show();
	//cout << endl;

	////task 11

	//cout << "/********************/" << endl;

	//Faculty* pfit=&fit;
	//pfit->show();

	//cout << "/********************/" << endl;

	////task 12

	//int* array = Faculty::myAlloc();
	//int cnt = 0;
	//while (array[cnt] == 0)cnt++;
	//cout << "Array of numbers of cathedras:" << endl;
	//for (int i = 0; i < cnt; i++)
	//{
	//    array[i] = arrayFaculties[i].getNumOfCathedras();
	//    cout << array[i] << " ";
	//}
	//for (int i = 0; i < cnt; i++)
	//{
	//    for (int j = i + 1; j < cnt; j++)
	//    {
	//        if (array[j] < array[i])swap(array[j], array[i]);
	//    }
	//}
	//cout << endl << "Sorted array of numbers of cathedras:" << endl;
	//for (int i = 0; i < cnt; i++)
	//{       
	//    cout << array[i] << " ";
	//}
#pragma endregion
#pragma region lab2z

 /*Faculty* fit=new Faculty();
 fit->setFaculty("Faculty of information tchnologies", "FIT");
 fit->setInfo("Savenko_O.S.", 2012, "(0382)67-19-43", "savenko_oleg_st@ukr.net");
 fit->setNumericData(6, 8);

 Faculty* afaculty = new Faculty();
 afaculty->setFaculty("Faculty of nothing", "FON");
 afaculty->setInfo("Noone_O.S.", 2038, "(0382)12-34-56", "noone@nomail.net");
 afaculty->setNumericData(10, 20);


 Student* stud1=new Student();
 stud1->setName("Volodymyr", "Avsiievych", "Ruslanovych");
 stud1->setEyesHair("blue", "brown");
 stud1->setData(18, 174);
 Student* stud2 = new Student();
 stud2->setName("Vladyslav", "Avsiievych", "Ruslanovych");
 stud2->setEyesHair("blue", "brown");
 stud2->setData(18, 174);

 fit->enrollStudent(stud1);
 fit->enrollStudent(stud2);

 Discipline* discipline1 = new Discipline("OOP", "KI", "Exam", 10);
 Discipline* discipline2 = new Discipline("CL", "KI", "Course_Project", 10);
 Discipline* discipline3 = new Discipline("SDA", "KI", "Exam", 10);

 Lecturer* lecturer = new Lecturer();
 lecturer->setName("Lysenko", "Sergiy", "Mykolayovych");
 lecturer->addDiscipline(discipline1);
 lecturer->addDiscipline(discipline2);
 lecturer->addDiscipline(discipline3);

 fit->enrollLecturer(lecturer);

 lecturer->teaching();*/
#pragma endregion
#pragma region lab3

 ////task 14
 ////простий
	//Student a("Test", "Test", "Test", 18, 190, "Blue", "White");
	////явний
	//Student b = Student();
	////скорочений
	//Student c;

	////task 11-13
	//showSquaredAge(a);
	//showSquaredAge(&a);
	//Student test = createStudent();
	//test.show();

	////task 15-17
	//Student* pStudent = new Student();


	//Faculty faculty1, faculty2, faculty3, faculty4, faculty5;
	//Student* dynamicStudent1 = new Student();
	//Student* dynamicStudent2 = new Student();
	//Student* dynamicStudent3 = new Student();
	//Student* dynamicStudent4 = new Student();
	//Student* dynamicStudent5 = new Student();
	//
	//Faculty arrayFaculties[5] = { faculty1,faculty2,faculty3,faculty4,faculty5 };
	//Student* dynamicArrayStudents[5];
	//dynamicArrayStudents[0] = dynamicStudent1;
	//dynamicArrayStudents[1] = dynamicStudent2;
	//dynamicArrayStudents[2] = dynamicStudent3;
	//dynamicArrayStudents[3] = dynamicStudent4;
	//dynamicArrayStudents[4] = dynamicStudent5;

	//
	//cout << "Faculties" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	char n = (char)(int('0') + i + 1);
	//	string sn = ""; sn += n;
	//	arrayFaculties[i].setFaculty("faculty" + sn, "FC" + sn);
	//	arrayFaculties[i].setInfo("decane" + sn, rand() % 20 + 2000, "123456789", "fac" + sn + "@gmail.com");
	//	arrayFaculties[i].setNumericData(rand() % 5 + 10);
	//	arrayFaculties[i].modifyData(&arrayFaculties[i]);
	//	arrayFaculties[i] = arrayFaculties[i].returnWithModifiedData();
	//	cout << "Faculty " << i + 1 << ":" << endl;
	//	arrayFaculties[i].show();
	//}
	//
	//Faculty fileFaculty;
	//arrayFaculties[0].printToFile();
	//fileFaculty = Faculty::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Faculty written and read from file:" << endl;
	//fileFaculty.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << "Students" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Student " << i + 1 << endl;
	//	if (i % 2 == 0) {
	//		char n = (char)(int('0') + i + 1);
	//		string sn = ""; sn += n;
	//		dynamicArrayStudents[i]->setName("Name" + sn, "FirstName" + sn, "LastName" + sn);
	//		dynamicArrayStudents[i]->setEyesHair("brown", "blonde");
	//		dynamicArrayStudents[i]->setData(18, 170);
	//		dynamicArrayStudents[i]->setFaculty(&arrayFaculties[i]);
	//		dynamicArrayStudents[i]->modifyName(dynamicArrayStudents[i]);
	//	}
	//	else {
	//		dynamicArrayStudents[i] = Student::generate();
	//	}
	//	dynamicArrayStudents[i]->show();
	//}
	//Student fileStudent;
	//dynamicArrayStudents[0]->printToFile();
	//fileStudent = Student::readFromFile();
	//cout << "/********************/" << endl;
	//cout << "Student written and read from file:" << endl;
	//fileStudent.show();
	//cout << endl;
	//cout << "/********************/" << endl;
	//cout << endl;

#pragma endregion


	Faculty* FIT = new Faculty("Faculty of information techologies", "FIT", "Savenko O.S.", 2000, 5, 10, "tel", "email");

	Department* KIIS = new Department("KIIS");
	Department* KN = new Department("KN");

	FIT->addDepartment(KIIS);
	FIT->addDepartment(KN);

	Student* AVR = new Student("Avsiievych", "Volodymyr", "Ruslanovych");
	Student* ARV = new Student("Avsiievych", "Ruslan", "Volodymyrovych");

	FIT->enrollStudent(AVR);
	FIT->enrollStudent(ARV);

	Discipline* OOP = new Discipline("OOP", KIIS, "Exam", 10, 20, 5);
	Discipline* CL = new Discipline("CL", KIIS, "Course_Project", 10, 20, 5);
	Discipline* WEB = new Discipline("WEB", KIIS, "Exam", 10, 20, 5);

	AssociateProfessor* LSM = new AssociateProfessor("Lysenko", "Sergiy", "Mykolayovych");
	SeniorLecturer* POO = new SeniorLecturer("Pavlova", "Olga", "Oleksandrivna");
	Lecturer* DDO = new Lecturer("Denysiuk", "Dmytro", "Oleksandrovych");

	KIIS->enrollLecturer(LSM);
	KIIS->enrollLecturer(POO);
	KIIS->enrollLecturer(DDO);

	//Exam* eOOP = new Exam(FIT, KIIS, AVR, DDO, WEB); error - DDO isn't SeniorLecturer or derived
	//eOOP->takeExam("15.10.2021");
	Exam* eCL = new Exam(FIT, KIIS, AVR, POO, CL);
	eCL->takeExam("28.10.2021");
	Exam* eOOP = new Exam(FIT, KIIS, ARV, LSM, OOP);
	eOOP->takeExam("28.10.2021");
	LSM->mentorCourseProject(AVR);

	vector<Person*> people;
	people.push_back(AVR);
	people.push_back(ARV);
	people.push_back(LSM);
	people.push_back(POO);
	people.push_back(DDO);
	for (Person* p : people)
	{
		p->selfDescribe();
	}
	cout << "/****/" << endl;
	/*Student* AVR_copy = dynamic_cast<Student*>(people[0]);
	AVR_copy->showFaculty();
	cout << "" << endl << endl;*/
	/*try {
		FIT->deductStudent(AVR);
		AVR->showFaculty();
	}
	catch (runtime_error ex)
	{
		cout << "/" << endl;
		cout << ex.what() << endl;
		cout << "/" << endl;
	}
	*/
	FIT->show();
	(*(FIT))++;
	FIT->show();
	*(FIT) += AVR;
	*(FIT) -= AVR;
	*(FIT) *= 2;
	((*(FIT))[0])->show();
	*(FIT) += AVR;
	AVR->showFaculty();
	cout << Faculty::getMax(1, 2)<<endl;
	cout << (*KIIS) << endl;
	Vector<Person*, 5> vec;
	vec[0] = AVR;
	vec[1] = ARV;
	vec[2] = LSM;
	vec[3] = POO;
	vec[4] = DDO;
	vec.print();
	cout << endl;
	vec.reverse();
	vec.print();
	cout << endl;
	vec.clear();
	vec.print();
	cout << endl;

	/****lab7*****/
	vector<Student*> vstud;
	vstud.reserve(6);
	for (int i = 1; i <= 6; i++)
	{
		Student* st = new Student("First_name" + std::to_string(i), "Middle_name" + std::to_string(i), "Last_name" + std::to_string(i));
		vstud.push_back(st);
	}
	Student* item = vstud[3];
	cout<< **(find(vstud.begin(), vstud.end(), item))<<endl;
	cout << "/***move**/"<<endl;
	// find converts vstud.begin() and vstud.end() in InputIterator, so they can't modify elements from iterators;
	move(vstud.begin() + 2, vstud.end(), vstud.begin());
	// find converts      this iterator    ^  in OutputIterator, so it can replace element from iterator;
	for (vector<Student*>::iterator st=vstud.begin();st!=vstud.end();st++)
	{
		cout << **st << endl;
		
	}
	cout << endl;
	for (vector<Student*>::reverse_iterator st = vstud.rbegin(); st != vstud.rend(); st++)
	{
		cout << **st << endl;
	}
	cout << endl;
	cout << "/***replace**/" << endl;
	replace(vstud.begin(), vstud.end(), vstud[0], item);
	//replace converts iterators in ForwardIterator, they can assign and access values
	for (Student* st : vstud)
	{
		cout << *st << endl;
	}

	list<Lecturer*> list_lecturers;
	for (int i = 1; i <= 6; i++)
	{
		Lecturer* st = new Lecturer("First_name" + std::to_string(i), "Middle_name" + std::to_string(i), "Last_name" + std::to_string(i));
		list_lecturers.push_front(st);
	}
	cout << "/***list**/" << endl;
	for (list<Lecturer*>::iterator it = list_lecturers.begin(); it!=list_lecturers.end();it++)
	{
		
		cout << **it<< endl;
	}
	list<Lecturer*>::iterator it=list_lecturers.begin();
	for (int i = 0; i < 4; i++)
	{
		it++;
	}
	reverse_copy(it, list_lecturers.end(), list_lecturers.begin());
	//BiDirectionalIterator used to iterated forward and reverse
	cout << "/***list after reverse_copy**/" << endl;
	for (Lecturer* le : list_lecturers)
	{
		cout << *le << endl;
	}
	random_shuffle(vstud.begin(), vstud.end());
	cout << "/***vector after random_shuffle*/" << endl;
	for (Student* st : vstud)
	{
		cout << *st << endl;
	}
	deque<Student*> deque_st;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			deque_st.push_back(vstud[i]);
		}
		else deque_st.push_front(vstud[i]);
	}
	cout << "/**deque***/" << endl;
	for (Student* st : deque_st)
	{
		cout << *st << endl;
	}
	set<Student*> set_st;
	for (int i = 0; i < 6; i++)
	{
		set_st.insert(vstud[i]);
	}
	cout << "/**set***/" << endl;
	for (Student* st : set_st)
	{
		cout << *st << endl;
	}
	multiset<Student*> mset_st;
	for (int i = 0; i < 6; i++)
	{
		mset_st.insert(vstud[i]);
	}
	cout << "/**multiset***/" << endl;
	for (Student* st : mset_st)
	{
		cout << *st << endl;
	}
	map<Student*,Lecturer*> map_st;
	list<Lecturer*>::iterator lit = list_lecturers.begin();
	for (int i = 0; i < 6; i++)
	{
		map_st[vstud[i]]=*(lit++);
	}
	cout << "/**map***/" << endl;
	for (auto mst : map_st)
	{
		cout << "Student "<< *(mst.first) << "-> Lecturer " << *(mst.second) << endl;
	}
	multimap<Student*, Lecturer*> mmap_st;
	list<Lecturer*>::iterator lit1 = list_lecturers.begin();
	for (int i = 0; i < 6; i++)
	{
		mmap_st.insert(pair<Student*,Lecturer*>(vstud[i],*(lit1++)));
	}
	cout << "/**multimap***/" << endl;
	for (auto mst : mmap_st)
	{
		cout << "Student " << *(mst.first) << "-> Lecturer " << *(mst.second) << endl;
	}
	stack<Student*> stack_st;
	for (int i = 0; i < 6; i++)
	{
		stack_st.push(vstud[i]);
	}
	cout << "/**stack***/" << endl;
	while(!stack_st.empty())
	{
		cout << *(stack_st.top()) << endl;
		stack_st.pop();
	}
	queue<Student*> queue_st;
	for (int i = 0; i < 6; i++)
	{
		queue_st.push(vstud[i]);
	}
	cout << "/**queue***/" << endl;
	while (!queue_st.empty())
	{
		cout << *(queue_st.front()) << endl;
		queue_st.pop();
	}
	priority_queue<Student*> pqueue_st;
	for (int i = 0; i < 6; i++)
	{
		pqueue_st.push(vstud[i]);
	}
	cout << "/**priority_queue***/" << endl;
	while (!pqueue_st.empty())
	{
		cout << *(pqueue_st.top()) << endl;
		pqueue_st.pop();
	}

	//functors//
	cout << "/**functors**/" << endl;
	
	vector<int> va = { 1,2,3,4,5 };
	vector<int> vb = { 10,20,30,40,50};
	vector<int> result;
	cout << "va" << endl;
	for (int k : va)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "vb" << endl;
	for (int k : vb)
	{
		cout << k << " ";
	}
	cout << endl;
	result.resize(5);
	cout << "plus" << endl;
	transform(va.begin(), va.begin() + 5, vb.begin(), result.begin(), myplus());
	for (int k : result)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "minus" << endl;
	transform(va.begin(), va.begin() + 5, vb.begin(), result.begin(), myminus());
	for (int k : result)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "times" << endl;
	transform(va.begin(), va.begin() + 5, vb.begin(), result.begin(), mytimes());
	for (int k : result)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "divides" << endl;
	transform(vb.begin(), vb.begin() + 5, va.begin(), result.begin(), mydivides());
	for (int k : result)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "modulus" << endl;
	transform(va.begin(), va.begin() + 5, vb.begin(), result.begin(), mymodulus());
	for (int k : result)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "negate" << endl;
	transform(va.begin(), va.begin() + 5,result.begin(),mynegate());
	for (int k : result)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << endl;
	cout << endl;

	vector<int> vva = { 1,2,3,4,5 };
	vector<int> vvb = { 1,1,4,5,3 };
	vector<int> result1;
	cout << "vva" << endl;
	for (int k : vva)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "vvb" << endl;
	for (int k : vvb)
	{
		cout << k << " ";
	}
	cout << endl;
	result1.resize(5);
	cout << "equal_to" << endl;
	transform(vva.begin(), vva.begin() + 5, vvb.begin(),result1.begin(), myequal_to());
	for (int k : result1)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "not_equal_to" << endl;
	transform(vva.begin(), vva.begin() + 5, vvb.begin(), result1.begin(), mynot_equal_to());
	for (int k : result1)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "greater" << endl;
	transform(vva.begin(), vva.begin() + 5, vvb.begin(), result1.begin(), mygreater());
	for (int k : result1)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "less" << endl;
	transform(vva.begin(), vva.begin() + 5, vvb.begin(), result1.begin(), myless());
	for (int k : result1)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "greater_equal" << endl;
	transform(vva.begin(), vva.begin() + 5, vvb.begin(), result1.begin(), mygreater_equal());
	for (int k : result1)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "less_equal" << endl;
	transform(vva.begin(), vva.begin() + 5, vvb.begin(), result1.begin(), myless_equal());
	for (int k : result1)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << endl;
	cout << endl;
	vector<bool> vvva = { false,false,true,true,true };
	vector<bool> vvvb = { false,true,true,false,false };
	vector<bool> result2;
	result2.resize(5);
	cout << "vvva" << endl;
	for (int k : vvva)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "vvvb" << endl;
	for (int k : vvvb)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "logical_and" << endl;
	transform(vvva.begin(), vvva.begin() + 5, vvvb.begin(), result2.begin(), mylogical_and());
	for (int k : result2)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "logical_or" << endl;
	transform(vvva.begin(), vvva.begin() + 5, vvvb.begin(), result2.begin(), mylogical_or());
	for (int k : result2)
	{
		cout << k << " ";
	}
	cout << endl;
	cout << "logical_not" << endl;
	transform(vvva.begin(), vvva.begin() + 5, result2.begin(), mylogical_not());
	for (int k : result2)
	{
		cout << k << " ";
	}
}
