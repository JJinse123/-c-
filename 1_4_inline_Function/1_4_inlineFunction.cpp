/*매크로 함수란 
#define을 사용해 명령문을 치환해서 하나의 명령으로 묶어 사용하는 것
이때 치환되는 명령이나 변수는 일반 변수, 함수와 비교하기 위해 대문자로만 선언

장점: 빠른 실행, 성능향상
단점: 정의하기 어렵다

ex)
#include <iostream>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	std::cout<<	SQUARE(5) << std::endl;
	return 0;
}
*/

// SQUARE(5)처럼 함수의 몸체부분이 함수호출문장을 완전히 대체했을 때 함수가 인라인화 됐다고 함


/*
C++에서는 매크로함수의 장점을 유지하되, 일반함수처럼 정의할 수 있도록 인라인 함수를 제공해줌
*/
#include <iostream>
inline int SQUARE(int x)
{	
	return x * x;
}
int main() {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
/*
단... 인라인함수선언 시 자료형을 명시하기에 자료형에 의존적임, 반면 매크로함수는 자료형에 의존적 X
이를 해결하기 위해 C++에선 template 기능을 제공
*/
/*
#include <iostream>
template <typename T>
inline T SQUARE(T x)
{
	return x*x;
}
int main(void)
{
	std::cout<<	SQUARE(5.5)<<std::endl;
	std::cout<<	SQAURE(12)<<std::endl;
}
*/
