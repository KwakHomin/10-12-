#include <iostream>

class operator_overloding {
private:
	int n;									//변수 정의

public:
	operator_overloding(int a) {
		n = a;								//입력받은 값으로 n초기화
	}

	//후위증가연산자
	operator_overloding operator++(int) {
		operator_overloding temp(n);		//현재 값 저장
		n++;								//증가
		return temp;						//이전 값 반환
	}

	//전위증가연산자
	operator_overloding& operator++() {
		n++;								//현재 값 증가
		return *this;						//변경한 객체 반환
	}

	//현재 값 반환
	int get() const {
		return n;							//현재 n값 반환
	}
};

int main() {
	operator_overloding a(5);								//객체 생성
	std::cout << a.get() << "(초기값)" << std::endl;		//초기 n값 출력

	a++;													//a++ 실행
	std::cout << a.get() << "(a++ 결과)" << std::endl;		//실행 후 n값 출력

	++a;													//++a 실행
	std::cout << a.get() << "(++a 결과)" << std::endl;		//실행 후 n값 출력
}