#include <iostream>

void main()
{
	char user_name[10];
	char user_phone[30];

	std::cout << "당신의 이름은? ";
	std::cin >> user_name;

	std::cout << "당신의 전화번호는? ";
	std::cin >> user_phone;

	std::cout << "이름: " << user_name << std::endl;
	std::cout << "전화번호" << user_phone << std::endl;
}