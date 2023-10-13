#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
	string name;			//이름
	int age;				//나이
	string address;			//주소

public:
	person(string _name, int _age, string _address) {		//생성자 선언
		age = _age;											//나이 초기화
		name = _name;										//이름 초기화
		address = _address;									//주소 초기화
	}
	string getName() const {								//이름 반환
		return name;
	}
	string getAddress() const {								//이름 반환
		return address;
	}
	int getAge() const {									//나이 반환
		return age;
	}
};


class Student : public person {								//person 상속
private:
	int Student_ID;				//학번

public:
	int getStudent_ID() const {								//학번 반환
		return Student_ID;
	}
	Student(string _name, int _age, string _address, int _Student_ID)	//생성자 선언
		: person(_name, _age, _address) {								//person 생성자 상속
		Student_ID = _Student_ID;										//학번 초기화
	}
};

int main() {
	Student me("kwakhomin", 23, "daejeon", 202002461);					//객체 생성

	std::cout << "Student Information" << std::endl;
	std::cout << "\tName : " << me.getName() << std::endl;				//생성한 객체의 이름 출력
	std::cout << "\tAge : " << me.getAge() << std::endl;				//생성한 객체의 나이 출력
	std::cout << "\tAddress : " << me.getAddress() << std::endl;		//생성한 객체의 주소 출력
	std::cout << "Student ID : " << me.getStudent_ID() << std::endl;	//생성한 객체의 학번 출력
}