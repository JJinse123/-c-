#include<iostream>

void main()
{
	int total;

	while (1)
	{
		std::cout << "판매금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> total;
		if (-1 == total)
		{
			std::cout << "프로그램을 종료합니다";
			break; 
		}
		std::cout << "이번 달 급여: " << 50 + total * 0.12 << "만원" << std::endl;
	}

}