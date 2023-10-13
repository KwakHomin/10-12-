#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
	string emp_id;					//사번
	string name;					//이름
	int age;						//나이
	string address;					//주소
	float salary;					//급여

public:
	Employee(string _emp_id, string _name, int _age, string _address, float _salary)	//생성자
	{
		emp_id = _emp_id;			//사번 초기화
		name = _name;				//이름 초기화
		age = _age;					//나이 초기화
		address = _address;			//주소 초기화
		salary = _salary;			//급여 초기화
	}
	string get_emp_id() const {		//사번 반환
		return emp_id;
	}
	string get_name() const {		//이름 반환
		return name;
	}
	int get_age() const {			//나이 반환
		return age;
	}
	string get_address() const {	//주소 반환
		return address;
	}
	float get_salary() const {		//급여 반환
		return salary;
	}
};

class Manager : public Employee {	//Employee 상속
private:
	int team_size;					//팀원 수

public:
	Manager(string _emp_id, string _name, int _age, string _address, float _salary, int _team_size)		//생성자
		: Employee(_emp_id, _name, _age, _address, _salary) {		//Employee 생성자 상속
		team_size = _team_size;
	}
	int get_team_size() const {		//팀원 수 반환
		return team_size;
	}
};


int main() {

	Manager manager("EMP001", "kwakhomin", 35, "seoul", 5000, 10);			//객체 생성

	cout << "Manager Information" << endl;
	cout << "\tEmployee ID : " << manager.get_emp_id() << endl;				//생성한 객체 사번 출력
	cout << "\tName : " << manager.get_name() << endl;						//생성한 객체 이름 출력
	cout << "\tAge : " << manager.get_age() << endl;						//생성한 객체 나이 출력
	cout << "\tAddress : " << manager.get_address() << endl;				//생성한 객체 주소 출력
	cout << fixed;															//소수점 이하의 수를 고정소수점으로 표현하도록
	cout.precision(2);														//소수점 두자리까지 출력하도록 설정
	cout << "\tSalary : $" << manager.get_salary() << endl;					//생성한 객체 급여 출력
	cout << "Team Size : " << manager.get_team_size() << endl;				//생성한 객체 팀원 수 출력

}