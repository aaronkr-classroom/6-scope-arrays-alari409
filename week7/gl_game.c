//gl_game.c
#include <stdio.h>
#include <stdlib.h>// rand(), stand()
#include <time.h> //time()

int rand_num; //전역변수 


void gamelnit(void)
{
	srand(time(0));// 1970.1.1 0:00시 부터 현재까지의 ms 값
	rand_num = rand() % 10 + 1; // (0~9) + 1 = (1~ 10)
}

void gamePlay(void)
{
	//지역 변수
	int guess = 0, count = 0, allowed = 5; //5개의 추측만 허용

	printf("Guess the number (1 ~ 10): ");

	do
	{
		scanf_s("%d", &guess);
		count++; 

		if (guess == rand_num)
		{
			printf("정답! GOOD! You win!");
			break;
		}
		else if (guess < rand_num)
		{
			printf("Too Low! Try higher!");
		}
		else if (guess < rand_num)
		{
			printf("Too high! Try lower!");
		}
	} while (count != allowed);

	if (count > allowed)
	{
		printf("Too many Guesses! You lose!");
	}
	
}

int main(void)
{
	gamelnit();
	gamePlay();
	return 0;
}