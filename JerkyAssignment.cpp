#include <iostream>
#include <string.h>
using namespace std;


 
int main() 
{
	int x , total = 0;
	string beefTypes[5]= {"mild" , "sweet" , "hot" , "jalapeno" , "hickory"};
	string mode[2];
	float beefTypeSold[5];
	float largest = 0 , smallest = 1000000000000;
	string largestType, smallestType;
	
	 

	for (x = 0; x < 5; x++)
	{
		do
		{
		cout << "Please enter the amount of jerky sold for " << beefTypes[x] << ": ";
		cin >> beefTypeSold[x];
		}while(beefTypeSold[x] < 0);
		
		total = total + beefTypeSold[x];
		

		if (largest < beefTypeSold[x])
			{
			largest = beefTypeSold[x];
			largestType = beefTypes[x];
			}
		
	
		if (smallest > beefTypeSold[x])
			{
			smallest = beefTypeSold[x];
			smallestType = beefTypes[x];					
			}
			
	}
	
	for (x = 0; x < 5; x++)
	{
		cout << "You sold " << beefTypeSold[x] << " packages of " << beefTypes[x] << "\n";
				
	}

	cout << "\nYou sold a total of " << total << " packages\n\n"; 
	cout << "The best selling is: " << largestType;
	cout << "\nThe worst selling is: " << smallestType;
	
}
