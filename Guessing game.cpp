#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct playerInfo
{
	char name[50];
	int gamesWon = 0;
	int gamesLost = 0; 
	int bestScore = 0;
	
};


int main()
{
	char anotherPlayer;
	
	
	int x;
	
	struct playerInfo player[100];
	int randomNum , inputNum;
	
	
	do
	{
		printf("Enter player name: ");
		scanf("\n");
		gets(player[x].name);
	

	srand(time(NULL));
	randomNum = rand()%1000;
	
		do
		{

	
			printf("Enter a number between 1-1000: \n");
			scanf("%d" , &inputNum);
		
			if (randomNum > inputNum)
			{
				printf("The number is too low\n");
				player[x].gamesLost++;
		
	
			}
			else if (randomNum < inputNum)
			{
				printf("Number is too high\n");
				player[x].gamesLost++;
						
			}
			
			
	
		
		}while(randomNum != inputNum);
	
		if(player[x].bestScore < player[x].gamesLost)
			{
				player[x].bestScore = player[x].gamesLost;
			}
	
	
	printf("\nYou picked the correct number!\n");

	player[x].gamesWon++;

	printf("Player name: %s \n Games lost: %d\n Games won: %d\n Best score: %d\n" , player[x].name , player[x].gamesLost , player[x].gamesWon , player[x].bestScore);


	printf("\nWould another player like to play(Y for yes....N for no): \n");
	scanf("\n%c" , &anotherPlayer);
	
	++x;
	
	}while(anotherPlayer == 'y' || anotherPlayer == 'Y');
	


	
	
	return 0;
}
