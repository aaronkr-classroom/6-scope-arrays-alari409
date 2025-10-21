// 11_q2.c (슬라이드 28 Q2)
// >>> 11_q3.c (슬라이드 28 Q3)
#include <stdio.h>

void Test()
{
	static int result = 0; //지역 변수 (충돌?)
	printf("%d, ", result++);
}

int main(void)
{
	for (int i = 0; i < 5; i++) Test(); // 0~ 4
	return 0;
}