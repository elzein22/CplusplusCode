#include<iostream>
#include <cstring>
#include <random>
#include <cstdlib>
#include<ctime>
#include<array>
#include <iterator>

using namespace std;

class Player
{
	private: 
		string name;
		int choice;
		int wins;
		int loses;
	public:
		Player(string n)
			{name = n;}
		int getChoice()
			{return choice;}
		void setChoice(int c)
			{choice = c;}
	virtual	void chooseNum()
			{cout<< "In Player";}		
//		int getWins()
//			{return wins;}
//		int  getLoses()
//			{return loses;}			
};
class Human : public Player
{
	public:
		Human(string n):Player(n)
			{	}
	virtual	void chooseNum()
		{
			int num;
			do{
			cout << "1. Rock\n2.Paper\n3. Scissors"<<endl;
			cin >> num;
		}while(num > 3 || num <= 0);
			setChoice(num);
		}	
};
class Computer : public Player
{
	public:
		Computer():Player("Joshua")
			{	}
	virtual	void chooseNum()
		{
			int num;
			cout << "1. Rock\n2.Paper\n3. Scissors"<<endl;
			srand(time(0));
			num=(rand() % 3)+1;
			setChoice(num);
		}		
};

void playGame(Player& p1 , Player& p2);
int main()
{
	Human h("dfa");
	Computer c;
	
	playGame(h,c);
	cout << "\nComputer Chose: " << c.getChoice();
//	playGame(c,h);
//	playGame(h,h);
//	playGame(c,c);
}
void playGame(Player& p1 , Player& p2)
{
	p1.chooseNum();
	p2.chooseNum();
	
	//Rock-Paper-Scissors logic	
	
	if((p1.getChoice()==1 && p2.getChoice()==3)||(p1.getChoice()==2 && p2.getChoice()==1)||(p1.getChoice()==3 && p2.getChoice()==2))
		cout << "User wins, computer loses";
	else if((p1.getChoice()==3 && p2.getChoice()==1)||(p1.getChoice() < p2.getChoice()))	
		cout << "Computer wins, user loses";
	else
		cout << "Draw!";
}
