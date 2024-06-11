#include <iostream>
using namespace std;

class Student {

	public :
	int rollNumber;
	
	private :
	int age;

	public :

	Student(){
		this->age=0;
		this->rollNumber=0;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if(a < 0) {
			return;
		}
		age = a;
	}

};



int main() {
	// Create objects statically
	Student s1;

	// s1.age = 24; //this throws error
	s1.rollNumber = 101;
	cout << "S1 Roll number : " << s1.rollNumber << endl;
	s1.setAge(34);
	cout << "S1 age : " << s1.getAge() << endl;


	// Create objects dynamicaaly
	Student *s6 = new Student;
	//(*s6).age = 23;
	(*s6).rollNumber = 104;
	(*s6).setAge(23);
	cout << "S6 age : " << s6 -> getAge() << endl;

	//s6 -> age = 23; //throws error
	// s6 -> rollNumber = 104;
	// s6->setAge(23);
}

