/*
이름공간(namespace)란 특정영역에 이름을 붙여주기 위한 문법적 요소
자신만의 이름공간을 만들고 이 안에 함수 정의하거나 변수를 선언하면 이름충돌은 발생하지 않음 
(이름과 매개변수가 같을 때, 선언공간만 다르다면 이름충돌이 발생 X)
*/

#include <iostream>
namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}

/*
이름공간의 중첩: 다른 이름공간 안에 삽입될 수 있다
이때 선언된 이름공간이 다르기 때문에 이름충돌 문제가 발생 X

namespace Parent
{
	int num = 2;
	namespace SubOne
	{
		int num = 3;	
	}
	namespace SubTwo
	{
		int num = 4;
	}
}

std::cout<<Parent::num<<std::endl;
std::cout<<Parent::SubOne::num<<std::endl;
std::cout<<Parent::SubTwo::num<<std::endl; 로 접근

*/