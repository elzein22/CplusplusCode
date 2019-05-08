#include<iostream>

using namespace std;

class Job
{
	private:
		int jobNum;
		int jobTime;
		double hourlyRate;
	public:
		Job(int jn , int jt , double hr)
		{
			jobNum = jn;
			jobTime = jt;
			hourlyRate = hr;
		}	
	int operator+(Job j)
	{
		
		int temp = jobTime + j.jobTime;
		return temp;
	}	
	Job operator+(int t)
	{
		Job temp(0,0,0);
		
		temp.jobTime= jobTime + t;
		temp.jobNum = jobNum;
		temp.hourlyRate = hourlyRate;
		
		return temp;
	}
	void displayJob()
	{
		cout << "\n"<< jobNum << " " << jobTime << " " << hourlyRate << " " << endl;
	}
	
	friend Job operator+(int t , Job j)
	{
		j.jobTime = j.jobTime + t;
		return j;	
	}
	friend ostream& operator << (ostream& o , const Job& j)
	{
		o << "\nJob Number: " << j.jobNum;
		o << "\nJob Time: " << j.jobTime;
		o << "\nHourly Rate: " << j.hourlyRate;
		
		return o;
	}
	friend istream& operator >> (istream& i , Job& j)
	{
		i >> j.jobNum;
		i >> j.jobTime;
		i >> j.hourlyRate;
		
		return i;
	}
	Job& operator++()
	{
		//prefix
		++jobTime;
	
		
		return *this;
	}
	Job& operator++(int x)
	{
		//prefix
		jobTime++;
		
		return *this;
	}
	bool operator==(Job& ajob)
	{
		//prefix
		if(ajob.jobTime == jobTime && ajob.hourlyRate == hourlyRate)
			return true;
				
		
		
		return false;
	}

};

int main()
{
	int num , time;
	double rate;
	
		cout <<"Enter job number: "; 		cin >> num;
		cout <<"Enter job time: ";			cin >> time;
		cout << "Enter hourly rate: ";		cin >> rate;	
	Job jobA(num , time , rate);
	
		
		cout <<"Enter job number: "; 		cin >> num;
		cout <<"Enter job time: ";			cin >> time;
		cout << "Enter hourly rate: ";		cin >> rate;
	Job jobB(num , time , rate);
	
	cout <<"\nTotal time for both jobs is " << (jobA + jobB) << endl;
	
	
		cout <<"Enter job number: "; 		cin >> num;
		cout <<"Enter job time: ";			cin >> time;
		cout << "Enter hourly rate: ";		cin >> rate;
	Job jobC(num , time , rate);
	
	//Different way of outputting jobA + jobB
	int sum;
	sum = jobA.operator+(jobB);
	cout << "\n" << sum;
	

	jobA.displayJob();
		jobA = jobA + 10;
		jobA.displayJob();
	
	jobB.displayJob();
		jobB = jobB + 20;
		jobB.displayJob();
		
	Job total(0 , 0 , 0);	
		
	total = jobA + jobB + jobC;	
		total.displayJob();
	
	cout << jobA << jobB;
	
	
	cout << jobB;
		++jobB;
		cout << jobB;
		jobB++;
		
		if(jobA == jobB)
			cout << "\nEqual";
		else
			cout << "\nNot equal";	

	
	return 0;
}
