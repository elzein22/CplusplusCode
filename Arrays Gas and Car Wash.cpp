#include <stdio.h>

void displayMenu();
int getGasType();
float getGallons();
char getCarWash();
float getGasRate(int gasType , float gasPrice[4]);
float getWashRate(int gasType , float washPrice[4] , char carWash);
float calcAmount(float gasRate , float washRate , float gallons , char carWash);
int main()
{
	
	//Initialize
	int x;
	//Arrays
	int customerCount[4];			
	float totalGallons[4];
	int totalCarWash[4] ;
	
	x = 0;
	do{
		
	//Input
	int gasType;
	float gallons , washRate , gasRate;
	float gasPrice[4] = {2.999 , 3.099 , 3.199 , 3.299};
	float washPrice[4] = {3.50 , 3.00 , 3.00 , 2.50};
	char carWash;
	
	//Process
	displayMenu();
	gasType = getGasType();
	gallons = getGallons();
	carWash = getCarWash();
	gasRate = getGasRate(gasType , gasPrice);
	washRate = getWashRate(gasType , washPrice , carWash);
	calcAmount(gasRate , washRate , gallons, carWash);
	
	//Totals
	
	
	if (gasType = 1 && carWash == 'Y' || carWash == 'y')
	{
	totalGallons[x] = totalGallons[x] + gallons;
	customerCount[x] = customerCount[x] + 1;  
	totalCarWash[x] = totalCarWash[x] + 1;
	}
	else if (gasType = 2 && carWash == 'Y' || carWash == 'y')
	{
		totalGallons[x] = gallons;
		customerCount[x] = x++;
		totalCarWash[x] = x++;

	}
	else if (gasType = 3 && carWash == 'Y' || carWash == 'y')
	{
		totalGallons[x] = gallons;
		customerCount[x] = x++;
		totalCarWash[x] = x++;
	}
	else if (gasType = 4 && carWash == 'Y' || carWash == 'y')
	{
		totalGallons[x] = gallons;
		customerCount[x] = x++;
		totalCarWash[x] = x++;

	}
	
	
	
	x = x++;
	}while(x > 3);
	
	printf("\n\nYour total gallons for fuel type 1 is: %.2f" , totalGallons[x]);

	
}
	




//Displays menu
void displayMenu()
{
	printf("\nWelcome!\n");
	printf("1 = Economy.\n2 = regular.\n3 = Mid-Grade.\n4 = Premium.\n");
	
}

//Gets gas type
int getGasType()
{
	int gasType;
	
	
	printf("What type of gas would you like?: ");
	scanf("%d" , & gasType);
	
	return gasType;
}

//Gets gallons
float getGallons()
{
	float gallons;
	
	printf("How many gallons would you like?: ");
	scanf("%f" , & gallons);
	
	return gallons;
}

//Whether or not you want a car wash
char getCarWash()
{
	char carWash;
	
	printf("Would you like a car wash?(Yes = Y , No = N): ");
	scanf("\n%c" , & carWash);

	return carWash;	
}

//Gets gas rate
float getGasRate(int gasType , float gasPrice[4])
{
		printf("Your rate of gas is: %.3f\n" , gasPrice[gasType - 1]); 
		
		return gasPrice[gasType - 1];
}

//Gets car wash rate
float getWashRate(int gasType , float washPrice[4] , char carWash)
{
	float washRate;
	if ( carWash == 'Y' || carWash == 'y')
	{
	washRate = washPrice[gasType - 1];
	}
	else 
	washRate = 0;
	return washRate;
}

//Calculates
float calcAmount(float gasRate , float washRate , float gallons , char carWash)
{
	float totalAmount , washTotal ,  gasTotal;
	
	if(gallons >= 10 && carWash == 'Y' || carWash == 'y')
	{
		washTotal = washRate - 1;
		printf("Your car wash charge total is: %.2f\n" , washTotal);
	}
	else
	{
		washTotal = washRate;
		printf("Your car wash charge total is: %.2f\n" , washTotal);
	}
	
	gasTotal = gasRate * gallons;
	printf("Your gas total is: %.2f\n" , gasTotal);
	
	totalAmount = gasTotal + washTotal;
	printf("Your total for today is: %.2f" , totalAmount);
	
	
}
