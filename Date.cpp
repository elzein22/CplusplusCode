#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

static string stringMon[] = {"January" , "Feburary" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};

class Date
{
	private:
		int month;
		int day;
		int year;
	public:
	
		//Mutators
		void setMonth(int m)
		{
			month = m;
			if (month > 12 || month <= 0)
			cout << "Invalid month entered\n";
		}
		void setDay(int d)
		{
			day = d;
			if (day > 31 || day <= 0 && (month % 2 != 0))
			cout << "Invalid day entered\n";
			else if((day > 30 || day <= 0) && month % 2 != 0)
			cout << "Invalid day entered, month does not have 31 days.\n";
		}
		void setYear(int y)
		{
			year = y;
			if (year > 4900 || year < 1583)
				cout << "Invalid year entered\n";
		
		}
		
		//Accessor
		int getMonth(){return month;}
		int getDay(){return day;}
		int getYear(){return year;}
		
		void big()
		{
			cout << endl << getYear() << "/" << getMonth() << "/" << getDay() << endl;
			cout << getYear() << "." << getMonth() << "." << getDay() << endl;
			cout << getYear() << "-" << getMonth() << "-" << getDay() << endl;
			cout << getYear() << " " << stringMon[getMonth() - 1]<< " " << getDay() << endl << endl;
			
		}
		void middle()
		{
			cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
			cout << getMonth() << "." << getDay() << "." << getYear() << endl;
			cout << getMonth() << "-" << getDay() << "-" << getYear() << endl;
			cout << getYear() << " " << stringMon[getMonth() - 1]<< " " << getDay() << endl << endl;
		}
		void little()
		{
			cout << getDay() << "/" <<getMonth() << "/" << getYear() << endl;
			cout << getDay() << "." << getMonth() << "." << getYear() << endl;
			cout << getDay() << "-" <<getMonth() << "-" << getYear() << endl;
			cout << getYear() << " " << stringMon[getMonth() - 1]<< " " << getDay() << endl << endl;
		}
				
	//Constructor	
	 Date(int m , int d , int y)
		{
			month = m;
			day = d;
			year = y;
		}
	 Date()
	 {
	 	month = 05;
	 	day = 23;
	 	year = 1996;
	 }	
	 int getJulianDate(int month , int day, int leap)
	{
	
	int realDay = 0;

	if (month == 01)
       {realDay = day;}
    else if (month == 02)
    	{realDay = day + 31 + leap;}
    else if (month == 03)
       {realDay = day + 59 + leap;}
    else if (month == 04)
        {realDay = day + 90 + leap;}
    else if (month == 05)
       {realDay = day + 120 + leap;}
    else if (month == 06)
       {realDay = day + 151 + leap;}
    else if (month == 07)
       {realDay = day + 181 + leap;}
    else if (month == 8)
        {realDay = day + 212 + leap;}
    else if (month == 9)
        {realDay = day + 243 + leap;}
     else if (month == 10)
        {realDay = day + 273 + leap;}
    else if (month == 11)
        {realDay = day + 304 + leap;}
    else if (month == 12)
        {realDay = day + 334 + leap;}
        
      cout <<"The Julian day for "<< stringMon[getMonth() - 1] << ", " << getDay() << " is: " << realDay ; 
	
	}
};

int getLeap(int year);
int main()
{
	int month , day , year , realDay , leap;
	do{ 
	cout << "Enter a month(1-12): ";
	cin >> month;
	}while(month > 12 || month <= 0);
	
	do{
	cout << "Enter a day(1-31): ";
	cin >> day;
	}while((day > 31 || day <= 0 && (month % 2 != 0)) ||((day > 30 || day <= 0) && month % 2 != 0));
	
	do{
	cout << "Enter a year(1583-4900): ";
	cin >> year;
	}while(year > 4900 || year < 1583);
	
	Date date1(month , day , year);	
	Date date2;
	
	date1.big();
	date1.little();
	date1.middle();
	
	leap = getLeap(year);
	date1.getJulianDate(month , day , leap);	
	
}
int getLeap(int year)
{

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	return 1;
	
			cout << "Invalid day, not a leap year\n";	
	return 0;
}



