#include <iostream>
#include <stdexcept>

class A {
    public:
        A() {
            std::cout << "Constructor()" << std::endl;          //생성자 호출시 출력
        }

        ~A() {
            std::cout << "Destructor()" << std::endl;           //소멸자 호출시 출력
        }
};

int main() {
    try {
        A obj;                                                  //A 오브젝트 생성
        throw 10;                                               //예외 발생
    }
    catch (int e) {
        std::cout << "Catch " << e << std::endl;                //예외 처리
    }

    return 0;
}