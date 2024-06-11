#include <iostream>
using namespace std;

class Student {

	public :
	int rollNumber;
	int age;

	public :

    /*Explicit Default COnstructor*/
	Student(){
		this->age=0;
		this->rollNumber=0;
	}

    /*Parameterised Constructor*/
    Student(int age,int rollNumber){
		this->age=age;
		this->rollNumber=rollNumber;
	}

    /*Copy Constructor*/
    Student(Student const &s){
        this->age = s.age;
        this->rollNumber=s.rollNumber;
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
    //Default
	Student s1;
    s1.age = 12;
    s1.rollNumber=2;

    //Parameterized
    Student s2(18,1);
    s2.display();

    //Copy
    Student s3(s1);
    s3.display();
}

