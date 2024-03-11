/*
�̸�����(namespace)�� Ư�������� �̸��� �ٿ��ֱ� ���� ������ ���
�ڽŸ��� �̸������� ����� �� �ȿ� �Լ� �����ϰų� ������ �����ϸ� �̸��浹�� �߻����� ���� 
(�̸��� �Ű������� ���� ��, ��������� �ٸ��ٸ� �̸��浹�� �߻� X)
*/

#include <iostream>
namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
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
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}

/*
�̸������� ��ø: �ٸ� �̸����� �ȿ� ���Ե� �� �ִ�
�̶� ����� �̸������� �ٸ��� ������ �̸��浹 ������ �߻� X

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
std::cout<<Parent::SubTwo::num<<std::endl; �� ����

*/