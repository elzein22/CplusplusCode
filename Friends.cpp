#include<iostream>

using namespace std;

class Salesperson;
class Sale
{
	friend void display(Sale, Salesperson);
	private:
		int month;
		int day;
		int year;
		double amount;
		int idNum;
	public:	
		Sale(int m , int d , int y , double a , int id)
		{
			month = m;
			day = d;
			year = y;
			amount = a;
			idNum = id;
		}
};
class Salesperson
{
	friend void display(Sale,Salesperson);
	private:
		int idNum;
		string name;
	public: 
		Salesperson(int id , string n)
		{
			idNum = id;
			name = n;
		}
};
void display(Sale s , Salesperson sp)
{
	cout << s.month << "/" << s.day << "/" << s.year;
	cout << " $" << s.amount << endl;
	cout << "\nSold by #" << sp.idNum << " " << sp.name;
}


int main()
{
	Sale aSale(10 , 4 , 2018 , 49.99 , 1234);
	Salesperson person(1234 , "John Wick");
	display(aSale , person);
	
	return 0;
}
