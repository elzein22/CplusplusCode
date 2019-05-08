// C++ program to convert 12 hour to 24 hour 
// format 
#include<iostream> 
using namespace std; 
  
class Time
{
	private:
		int hours;
		int min;
	public:
	Time()
	{
		
	}
	Time(int h , int m)
	{
		hours = h;
		min = m;
	}
	void setHour(int h)
	{ hours = h; }	
	void setMin(int m)
	{ min = m; }	
	void display()
	{
		if(hours > 12 && min >= 10)
		{cout << hours-12 << ":" << min << " P.M." << endl;}
		else if(hours > 12 && min < 10) 
		{ cout << hours-12 << ":0" << min << " P.M." << endl; }
		else if(hours < 12 && min >= 10)
		{ cout << hours << ":" << min << " A.M." << endl;}
		else if(hours < 12 && min < 10) 
		{ cout << hours << ":0" << min << " A.M." << endl; }
	}
};
  
// Driver code 
int main() 
{ 
	Time time;
	int hour,min;
	
	do{
	cout << "Enter the hour in military time(0-23): ";
	cin >> hour;
	}while(hour > 23 || hour < 0);
	
	do{
	cout << "Enter the minute(00-59): ";
	cin >> min;
	}while(min > 59 || min < 0);
		
	time.setHour(hour);
	time.setMin(min);
	
	time.display();
	
	
	
	
   return 0; 
} 
