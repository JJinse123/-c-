#include <iostream>

void main()
{
	char user_name[10];
	char user_phone[30];

	std::cout << "����� �̸���? ";
	std::cin >> user_name;

	std::cout << "����� ��ȭ��ȣ��? ";
	std::cin >> user_phone;

	std::cout << "�̸�: " << user_name << std::endl;
	std::cout << "��ȭ��ȣ" << user_phone << std::endl;
}