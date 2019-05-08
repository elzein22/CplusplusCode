#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	private:
		int idNum;
		string name;
		float hourlyRate;
		static float bonus;
	
	public:
		//Defualt Constructor
		Employee()
		{
			idNum = 0;
			name = "staff";
			hourlyRate = 0;	
		}	
		//Non-Defualt Constructor
		Employee(int id)
		{
			idNum = id;
			name = "Employee";
			hourlyRate = 11.25;
		}
		//Destructor
		~Employee()
		{
			cout << name << " is being terminated" << endl;
		}
		void setIdNum(int i)
		{idNum = i;}
		void setName(string n)
		{name = n;}
		void setHourlyRate(float hr)
		{hourlyRate = hr;}
		
		int getIdNum(){return idNum;}
		string getName(){return name;}
		float getHourlyRate(){return hourlyRate;}
		static float getBonus(){return bonus;}
		
		
};
float Employee::bonus = 100;

int main()
{
	Employee cook;
	Employee counter(1234);
	
	cout << cook.getName() << endl;
	cout << counter.getName() << endl;
	cout << cook.getBonus() << endl;
	cout << Employee::getBonus() << endl;
	
	{
		Employee mgr(5678);
		mgr.setName("Jeff");
	}
	cout << "Pausing";
	int x;
	cin >> x;
	
	return 0;
}
