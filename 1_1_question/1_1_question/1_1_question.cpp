#include<iostream>

void main()
{
	int num, sum = 0;

	for (int i = 1; i<=5; i++)
	{
		std::cout << i << "��° ���� �Է�: ";
		std::cin >> num;
		sum += num;
	}

	std::cout << "�հ�: " << sum;
}
