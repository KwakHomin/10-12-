#include <iostream>
#include <stdexcept>

class A {
    public:
        A() {
            std::cout << "Constructor()" << std::endl;          //������ ȣ��� ���
        }

        ~A() {
            std::cout << "Destructor()" << std::endl;           //�Ҹ��� ȣ��� ���
        }
};

int main() {
    try {
        A obj;                                                  //A ������Ʈ ����
        throw 10;                                               //���� �߻�
    }
    catch (int e) {
        std::cout << "Catch " << e << std::endl;                //���� ó��
    }

    return 0;
}