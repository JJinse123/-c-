/*무슨 문제가 있는가?*/
int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

// 만약 매개변수를 비워둔 채로 함수를 호출하게 되면 두개의 함수가 모두 호출되기 때문에 오류가 뜸