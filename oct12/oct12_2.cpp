#include <iostream>
#include <stdlib.h>
#include <exception>
using namespace std;

class newException : public exception {			//exception 상속
public:
	const char* what() {						//what() 오버로딩
		return "x is 5";					//예외 반환
	}
};

int main() {

	int x = rand() % 10;						//임의의 수 선언
	//x = 5;									//x가 5일 때 확인용

	try {
		if (x == 5)								//만약 x가 5이면
		{
			throw newException();				//예외 발생
		}
		else
		{
			cout << "Exception is not occured. x is not 5. x is " << x << endl;	
		}
	}
	catch (newException& e) {					//예외 발생시 예외 처리
		cout << "My exception is ";
		cout << e.what() << endl;				//발생한 예외 출력
	}
	return 0;
}