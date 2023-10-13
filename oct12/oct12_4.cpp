#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
	string name;			//�̸�
	int age;				//����
	string address;			//�ּ�

public:
	person(string _name, int _age, string _address) {		//������ ����
		age = _age;											//���� �ʱ�ȭ
		name = _name;										//�̸� �ʱ�ȭ
		address = _address;									//�ּ� �ʱ�ȭ
	}
	string getName() const {								//�̸� ��ȯ
		return name;
	}
	string getAddress() const {								//�̸� ��ȯ
		return address;
	}
	int getAge() const {									//���� ��ȯ
		return age;
	}
};


class Student : public person {								//person ���
private:
	int Student_ID;				//�й�

public:
	int getStudent_ID() const {								//�й� ��ȯ
		return Student_ID;
	}
	Student(string _name, int _age, string _address, int _Student_ID)	//������ ����
		: person(_name, _age, _address) {								//person ������ ���
		Student_ID = _Student_ID;										//�й� �ʱ�ȭ
	}
};

int main() {
	Student me("kwakhomin", 23, "daejeon", 202002461);					//��ü ����

	std::cout << "Student Information" << std::endl;
	std::cout << "\tName : " << me.getName() << std::endl;				//������ ��ü�� �̸� ���
	std::cout << "\tAge : " << me.getAge() << std::endl;				//������ ��ü�� ���� ���
	std::cout << "\tAddress : " << me.getAddress() << std::endl;		//������ ��ü�� �ּ� ���
	std::cout << "Student ID : " << me.getStudent_ID() << std::endl;	//������ ��ü�� �й� ���
}