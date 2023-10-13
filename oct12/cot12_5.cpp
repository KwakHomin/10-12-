#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
	string emp_id;					//���
	string name;					//�̸�
	int age;						//����
	string address;					//�ּ�
	float salary;					//�޿�

public:
	Employee(string _emp_id, string _name, int _age, string _address, float _salary)	//������
	{
		emp_id = _emp_id;			//��� �ʱ�ȭ
		name = _name;				//�̸� �ʱ�ȭ
		age = _age;					//���� �ʱ�ȭ
		address = _address;			//�ּ� �ʱ�ȭ
		salary = _salary;			//�޿� �ʱ�ȭ
	}
	string get_emp_id() const {		//��� ��ȯ
		return emp_id;
	}
	string get_name() const {		//�̸� ��ȯ
		return name;
	}
	int get_age() const {			//���� ��ȯ
		return age;
	}
	string get_address() const {	//�ּ� ��ȯ
		return address;
	}
	float get_salary() const {		//�޿� ��ȯ
		return salary;
	}
};

class Manager : public Employee {	//Employee ���
private:
	int team_size;					//���� ��

public:
	Manager(string _emp_id, string _name, int _age, string _address, float _salary, int _team_size)		//������
		: Employee(_emp_id, _name, _age, _address, _salary) {		//Employee ������ ���
		team_size = _team_size;
	}
	int get_team_size() const {		//���� �� ��ȯ
		return team_size;
	}
};


int main() {

	Manager manager("EMP001", "kwakhomin", 35, "seoul", 5000, 10);			//��ü ����

	cout << "Manager Information" << endl;
	cout << "\tEmployee ID : " << manager.get_emp_id() << endl;				//������ ��ü ��� ���
	cout << "\tName : " << manager.get_name() << endl;						//������ ��ü �̸� ���
	cout << "\tAge : " << manager.get_age() << endl;						//������ ��ü ���� ���
	cout << "\tAddress : " << manager.get_address() << endl;				//������ ��ü �ּ� ���
	cout << fixed;															//�Ҽ��� ������ ���� �����Ҽ������� ǥ���ϵ���
	cout.precision(2);														//�Ҽ��� ���ڸ����� ����ϵ��� ����
	cout << "\tSalary : $" << manager.get_salary() << endl;					//������ ��ü �޿� ���
	cout << "Team Size : " << manager.get_team_size() << endl;				//������ ��ü ���� �� ���

}