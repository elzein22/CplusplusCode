#include <iostream>
#include<iomanip>
using namespace std;

float getParkingCost(float);
int main() 
{
	float parkingTime , parkingCost;
	
	do
	{
	cout << "For how many hours will you be parking today?(15 minutes equals .25): ";
	cin >> parkingTime;
	}while(parkingTime > 24 || parkingTime < 0);
	

	
	parkingCost = getParkingCost(parkingTime);
	

	cout << "Your parking cost is: " << setprecision(2) << fixed  << parkingCost;

	return 0;
}

float getParkingCost(float parkingTime)
{
	float parkingCost;
	
	if (parkingTime <= 3)
		parkingCost = 2.00;
	if (parkingTime <= 4 && parkingTime > 3)	
		parkingCost = 2.50;
	if (parkingTime <= 5 && parkingTime > 4)	
		parkingCost = 3.00;	
	if (parkingTime <= 6 && parkingTime > 5)	
		parkingCost = 3.50;		
	if (parkingTime <= 7 && parkingTime > 6)	
		parkingCost = 4.00;	
	if (parkingTime <= 8 && parkingTime > 7)	
		parkingCost = 4.50;		
	if (parkingTime <= 9 && parkingTime > 8)	
		parkingCost = 5.00;		
	if (parkingTime <= 10 && parkingTime > 9)	
		parkingCost = 5.50;
	if (parkingTime <= 11 && parkingTime > 10)	
		parkingCost = 6.00;	
	if (parkingTime <= 12 && parkingTime > 11)	
		parkingCost = 6.50;			
	if (parkingTime <= 13 && parkingTime > 12)	
		parkingCost = 7.00;	
	if (parkingTime <= 14 && parkingTime > 13)	
		parkingCost = 7.50;	
	if (parkingTime <= 15 && parkingTime > 14)	
		parkingCost = 8.00;	
	if (parkingTime <= 16 && parkingTime > 15)	
		parkingCost = 8.50;					
	if (parkingTime <= 17 && parkingTime > 16)	
		parkingCost = 9.00;	
	if (parkingTime <= 18 && parkingTime > 17)	
		parkingCost = 9.50;	
	if (parkingTime > 18)	
		parkingCost = 10.00;				
		
		
				
	return parkingCost;	
}
