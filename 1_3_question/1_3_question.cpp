/*매개변수의 디폴트 값*/
/*함수의 선언부분에 표현하며, 매개변수가 전달되지 않을 때 디폴트 값을 사용하는 개념*/
/*디폴트값은 오른족 매개변수부터 채워야함, why? 함수의 인자는 왼쪽부터 채워지기 때문에*/

#include <iostream>
int BoxVolume(int length);
int BoxVolume(int length, int width);
int BoxVolume(int length, int width, int height);

void main()
{
	std::cout << "[3, 3, 3]" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D]" << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D]" << BoxVolume(7) << std::endl;
}

int BoxVolume(int length)
{
	return length * 1 * 1;
}


int BoxVolume(int length, int width)
{
	return length * width * 1;
}


int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}


