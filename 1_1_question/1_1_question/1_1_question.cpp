#include<iostream>

void main()
{
	int num, sum = 0;

	for (int i = 1; i<=5; i++)
	{
		std::cout << i << "¹øÂ° Á¤¼ö ÀÔ·Â: ";
		std::cin >> num;
		sum += num;
	}

	std::cout << "합계: " << sum;
}
