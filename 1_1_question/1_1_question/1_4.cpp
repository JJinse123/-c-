#include<iostream>

void main()
{
	int total;

	while (1)
	{
		std::cout << "�Ǹűݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> total;
		if (-1 == total)
		{
			std::cout << "���α׷��� �����մϴ�";
			break; 
		}
		std::cout << "�̹� �� �޿�: " << 50 + total * 0.12 << "����" << std::endl;
	}

}