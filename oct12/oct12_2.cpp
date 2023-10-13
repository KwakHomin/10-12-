#include <iostream>
#include <stdlib.h>
#include <exception>
using namespace std;

class newException : public exception {			//exception ���
public:
	const char* what() {						//what() �����ε�
		return "x is 5";					//���� ��ȯ
	}
};

int main() {

	int x = rand() % 10;						//������ �� ����
	//x = 5;									//x�� 5�� �� Ȯ�ο�

	try {
		if (x == 5)								//���� x�� 5�̸�
		{
			throw newException();				//���� �߻�
		}
		else
		{
			cout << "Exception is not occured. x is not 5. x is " << x << endl;	
		}
	}
	catch (newException& e) {					//���� �߻��� ���� ó��
		cout << "My exception is ";
		cout << e.what() << endl;				//�߻��� ���� ���
	}
	return 0;
}