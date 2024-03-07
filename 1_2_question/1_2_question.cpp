/*함수의 오버로딩은 C와 다르게 C++에만 이는 개념*/
/*함수의 오버로딩은 함수의 이름이 같아도 매개변수의 반환형과 인수 개수가 다르면 다른 함수로 호출처리 되는 개념(반환형과는 무관)*/

#include<iostream>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void swap(double *a, double *b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}



void main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
}