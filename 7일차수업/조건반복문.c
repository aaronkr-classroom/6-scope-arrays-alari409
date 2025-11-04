#include <stdio.h>
#include <ctype.h> 

int main(void)
{
	//
	//char grade;
	//
	//do
	//{
	//	printf("성적 입력 (A, B, C, D, F): "); scanf_s(" %c", &grade);
	//	switch (toupper(grade)) // toupper() 소문자를 대문자로 바꿔주는 함수, tolower() 대->소
	//		{
	//		case 'A':
	//			printf("Exellent!\n");
	//			break;
	//		case 'B':
	//		case 'C':
	//			printf("Good!\n");
	//			break;
	//		case 'D':
	//			printf("Poor!\n");
	//			break;
	//		case 'F':
	//			printf("Fail!\n");
	//			break;
	//		default:
	//			printf("올바른 성적을 입력하세요.\n");
	//		}
	//} while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F');
	//
	//--------------------------

	/*int i = 0;
	while (i < 5)
	{
		printf("환영합니다.\n");
		i++;
	}
	printf("반복 종료 후 i 값: %d\n", i);
	*/
	//-----------------------
	 //입력 값까지 덧셈 ex) 5 입력시 1,2,3,4,5 더함
	int pig = 0;
	int n;
	int i=0;
	printf("정수 입력: "); scanf_s("%d", &n);

	//while (i<= n)
	while(1)
	{
		pig = pig +i;
		i++;
		if (i > n)// while (1) 사용 시
			break;
	}
	printf("%d\n", pig);

	// -> for문
	pig = 0;
	printf("정수 입력: "); scanf_s("%d", &n);

	for (i= 1; i <= n; i++)
	{
		pig = pig + i;
	}
	printf("합: %d\n", pig);

	//----------------------------------
	//점수를 계속 입력받아서 pig 에 누적, 0이 아닐 때 까지,,, 합을 출력

	/*int n;
	int pig = 0;
	do
	{
		printf("누적 할 금액 입력: "); scanf_s("%d", &n);
		pig += n;
		if (n != 0)
		{
			printf("현재까지 누적금액: %d \n\n", pig);
		}
	} while (n != 0);
	printf("총 누적금액: %d\n", pig);
	*/
	//---------------------
	/*int i = 0;
	while (i < 10)
	{
		printf("%2d", i);
		i++;
	}
	printf("\n반복문 종료 후 i값: %d\n", i);
	
	->for 문

	for (i=0 ; i < 10; i++)
	{
		printf("%2d", i);
	}
	printf("\n반복문 종료 후 i값: %d\n", i);*/
	//------------------


	return 0;
}