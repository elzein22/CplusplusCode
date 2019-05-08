#include <iostream>
#include <string.h>
#include<vector>

using namespace std;

class Date
{
	private:
		int month;
		int day;
		int year;
	public:
		Date(int m , int d , int y)
		{
			month = m;
			day = d;
			year = y;
		}
	friend istream& operator >> (istream& i , Date& d)
	{
		cout << "Enter a month: "; 			i >> d.month;
		cout << "Enter the day: ";			i >> d.day;
		cout << "Enter the year: ";			i >> d.year;
				
		return i;
	}
	friend ostream& operator << (ostream& o , Date& d)
	{
		o << d.month << "/" << d.day << "/" << d.year;
		
		return o;
	}
		
};
class Attendance
{
	
	private:
		Date absence;
		bool excused;
	public:
	 Attendance(int m , int d , int y , bool e = false): absence(m,d,y)
		{
			excused = e;
		}
		
	void display()
		{
				
			cout << absence;
			if(excused)
				cout << " Excused";
			else
				cout << " Unexcused";	
		}
};
class StudentAttendance
{
	private:
		string name;
		vector <Attendance> records;
		int countExcused;
		int countUnexcused;
	public:
		StudentAttendance()
		{
		
		}
		StudentAttendance(string n)
		{
			name = n;
		}
	friend istream& operator >> (istream& i , StudentAttendance& student)
	{
		cout << "Enter student name: "; 			getline(i , student.name);
		
		return i;
	}
	
	void recordAbsence()
	{
		int month , day , year;
		char reason , slash;
		bool excuse = false;
		
		cout << "On what day were you absent (MM/DD/YYYY): ";
		cin >> month >> slash >> day  >> slash >> year;
		
		
		cout << "(E)xcused or (U)nexcused?";
		cin >> reason;
		getchar();
		
		if(reason == 'E')
			excuse = true;
		
		Attendance date(month , day , year , excuse);
		records.push_back(date);
		
		
	
		
	
		
	}
			
};

int main() 
{
	StudentAttendance me;
	cin >> me;
	
	me.recordAbsence();

	
	



	
	
}
