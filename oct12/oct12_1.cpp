#include <iostream>

class operator_overloding {
private:
	int n;									//���� ����

public:
	operator_overloding(int a) {
		n = a;								//�Է¹��� ������ n�ʱ�ȭ
	}

	//��������������
	operator_overloding operator++(int) {
		operator_overloding temp(n);		//���� �� ����
		n++;								//����
		return temp;						//���� �� ��ȯ
	}

	//��������������
	operator_overloding& operator++() {
		n++;								//���� �� ����
		return *this;						//������ ��ü ��ȯ
	}

	//���� �� ��ȯ
	int get() const {
		return n;							//���� n�� ��ȯ
	}
};

int main() {
	operator_overloding a(5);								//��ü ����
	std::cout << a.get() << "(�ʱⰪ)" << std::endl;		//�ʱ� n�� ���

	a++;													//a++ ����
	std::cout << a.get() << "(a++ ���)" << std::endl;		//���� �� n�� ���

	++a;													//++a ����
	std::cout << a.get() << "(++a ���)" << std::endl;		//���� �� n�� ���
}