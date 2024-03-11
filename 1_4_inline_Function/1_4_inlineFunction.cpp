/*��ũ�� �Լ��� 
#define�� ����� ��ɹ��� ġȯ�ؼ� �ϳ��� ������� ���� ����ϴ� ��
�̶� ġȯ�Ǵ� ����̳� ������ �Ϲ� ����, �Լ��� ���ϱ� ���� �빮�ڷθ� ����

����: ���� ����, �������
����: �����ϱ� ��ƴ�

ex)
#include <iostream>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	std::cout<<	SQUARE(5) << std::endl;
	return 0;
}
*/

// SQUARE(5)ó�� �Լ��� ��ü�κ��� �Լ�ȣ�⹮���� ������ ��ü���� �� �Լ��� �ζ���ȭ �ƴٰ� ��


/*
C++������ ��ũ���Լ��� ������ �����ϵ�, �Ϲ��Լ�ó�� ������ �� �ֵ��� �ζ��� �Լ��� ��������
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
��... �ζ����Լ����� �� �ڷ����� ����ϱ⿡ �ڷ����� ��������, �ݸ� ��ũ���Լ��� �ڷ����� ������ X
�̸� �ذ��ϱ� ���� C++���� template ����� ����
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
