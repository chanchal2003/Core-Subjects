#include <iostream>
using namespace std;
// #include "Student.cpp"
// #include "Student.cpp"

class Student {
	public :
	int rollNumber;

	// private :
	int age;
};

int main() {
	// Create objects statically
	Student s1;
	// cout<<s1<<endl;

	s1.age = 24; 
	s1.rollNumber = 101;
	cout << s1.age << endl;
	cout << s1.rollNumber << endl;

	// Create objects dynamicaaly
	Student *s2 = new Student;
	(*s2).age = 23;
	(*s2).rollNumber = 104;

	s2 -> age = 23;
	s2 -> rollNumber = 104;
}

