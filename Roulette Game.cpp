#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void showInstructions();
void getBetAmount(float *amount);
int makeBet(int *number, int *evenOdd, int *dozen , int *type);
void spinWheel(int *randNumber);
void figureWinnings(int number , int evenOdd, int dozen, float amount, int randNum, int type , float *winnings);
int main()
{
	int number, evenOdd , dozen, randNumber , type;
	float amount , winnings;
	float win;


	showInstructions();
	type = makeBet(&number , &evenOdd, &dozen , &type); 

	while(type != 4)
	{
	
	getBetAmount(&amount);	
	spinWheel(&randNumber);
	figureWinnings(number , evenOdd, dozen, amount, randNumber , type , &winnings);
	showInstructions();
 	makeBet(&number , &evenOdd, &dozen , &type); 


}
	
	return 0;
}

void showInstructions()
{
	printf("The roulette wheel has the numbers 0-36 on it.");
	printf("\n\nYou can place your bets in one of the three ways:");
	printf("\n\n\t  i. bet on a number (payout is 36 times the bet amount)");
	printf("\n\t ii. bet on an odd or even (payout is 2 times the bet amount)");
	printf("\n\tiii. bet on a dozen~first 1-12, second 13-24, third 25-36 (payout is 3 times the bet amount)");
	
}



int makeBet(int *number, int *evenOdd, int *dozen, int *type)
{
	

	
	printf("What type of bet would you like to make?: ");
	printf("\n\tEnter 1 to bet on a number \n\tEnter 2 for odd or even \n\tEnter 3 to bet on a dozen \n\tEnter 4 to quit: ");
	scanf("%d" , type);
	
	switch (*type)
	{
	case 1: 
	
		printf("\nWhat number would you like to bet on?: ");
		scanf("%d" , number);
		
	break;
	
	case 2:
	
		printf("\nPlease enter 1 for odd or 2 for even: ");
		scanf("%d" , evenOdd);
	break;
		
	case 3:
	
		printf("\nWhat dozen would you like to bet on?\nEnter 1 for 1-12, 2 for 13-24, or 3 for 25-36: ");
		scanf("%d" , dozen);
	break;

	default:
	break;
	
	}
	
}

void getBetAmount(float *amount)
{
	
	printf("How much would you like to bet?: ");
	scanf("%f" , & *amount);
	
}

void spinWheel(int *randNumber)
{
	
	
	srand(time(NULL));
	*randNumber = rand() % 36;
	printf("\nThe number was: %d\n" , *randNumber);

	
}


void figureWinnings(int number , int evenOdd, int dozen, float amount, int randNumber , int type, float *winnings)
{
	
	
	
	
	//Type 1 
	if (number == randNumber && type == 1)
	{
		*winnings = amount * 36;
		printf("You won: %.2f\n\n" , *winnings);
	}
	else if (number != randNumber && type == 1)
	{
		printf("\nYou lost %.2f\n\n" , amount);
	}
	
	
	
	//Type 2
	else if (evenOdd== 1 && evenOdd % 2 != 0 && type == 2)
	{
		*winnings = amount * 2;
		printf("\nYou won %.2f\n\n" , *winnings);
		
	}
	else if (evenOdd==2 && evenOdd % 2 == 0 && type == 2)
	{
		*winnings = amount * 2;
		printf("\nYou won %.2f\n\n" , *winnings);
	}
	else if (evenOdd==2 && evenOdd % 2 != 0 && type == 2)
		{
			printf("\nYou lost %.2f\n\n" , amount);
		}
	else if (evenOdd==1 && evenOdd % 2 != 0 && type == 2)
		{
			printf("\nYou lost %.2f\n\n" , amount);
		}
		
		
	//Type 3	
	else if (dozen <= 3 && type == 3)
	{
		if (dozen ==1 && randNumber >=1 && randNumber <= 12 )
		{
			*winnings = amount * 3;
			printf("You won: %.2f\n\n" , *winnings);
		}
		else if (dozen ==1 && randNumber > 12 )
		{
			printf("\nYou lost %.2f\n\n" , amount);
		}
		
		else if (dozen == 2 && randNumber >=13 && randNumber <= 24 )
		{
			*winnings = amount * 3;
			printf("You won: %.2f\n\n" , *winnings);
		}
		else if (dozen ==2 && randNumber > 24 && randNumber < 13 )
		{
			printf("\nYou lost %.2f\n\n" , amount);
		}
		else if (dozen == 3 && randNumber >=25 && randNumber <= 36 )
		{
			*winnings = amount * 3;
			printf("You won: %.2f\n\n" , *winnings);
		}
		else if (dozen ==3 && randNumber < 24 && randNumber > 36)
		{
			printf("\nYou lost %.2f\n\n" , amount);
		}
	
	}
	
	
}

