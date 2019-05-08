#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

void calculateCost(float& DRAWER_COST , string& deskType , int& drawers , float& total);
int main() 
{
	float DRAWER_COST = 45.00;
	string deskType , drawerValid;
	int drawers;
	float total;
	
	cout << "What type of desk would you like?:(Pine , Oak , Mahogany)";
	cin >> deskType;
	
	cout << "Would you like any drawers?(Y for yes , N for no): ";
	cin >> drawerValid;
	
	if(drawerValid == "Y" || drawerValid == "y");
	{
	cout << "How many drawers would you like with your desk?: ";
	cin >> drawers;
	}


	calculateCost(DRAWER_COST , deskType , drawers , total);
	
	cout << "Your total cost is: " << setprecision(2) << fixed << total;

}
	
void calculateCost(float& DRAWER_COST , string& deskType , int& drawers , float& total)
{
	float deskCost;
	
	if(deskType == "Pine" || deskType == "pine")
		{deskCost = 150;}
		
	if(deskType == "Oak" || deskType == "oak")
		{deskCost = 190;}	
			
	if(deskType == "Mahogany" || deskType == "mahogany")
		{deskCost = 230;}	
	
	total = deskCost + (drawers * DRAWER_COST);		

}
	

