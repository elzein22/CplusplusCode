#include<iostream>
#include<iomanip>
#include<cstring>
#include<vector>
#include<conio.h>

using namespace std;

class Workout
{
	private:
		string activity;
    	int minutes;
    public:
    Workout()
	{
		activity = "Tri";
		minutes = 60;
	}
	Workout(string newActivity , int newMinutes)
	{
		activity = newActivity;
		minutes = newMinutes;
	}
	void setActivity(string a)
		{activity = a;}
	string getActivty()
		{return activity;}
	void setMinutes(int m)
		{minutes = m;}	
    int getMinutes()
   		{return minutes;}
   	
   	virtual string getDescription()
   	{
   		int choice;
   		
   		cout << "**WELCOME**" << endl << endl << "-ALL WORKOUTS BEGIN WITH A 15 MIN JOG!-" << endl << endl;
   		cout << "---You Chose " << ": " << getActivty() << endl << endl;
   		setMinutes(15);
   		
   }
};
class Chest : public Workout
{
	public:
		int choice;
		Chest()
		{
			setActivity("Chest");
			setMinutes(60);	
		}
		Chest(string a , int m)
		{
			setActivity(a);
			setMinutes(m);
		}
		
    virtual string getDescription()
	{
		string desc = Workout::getDescription();

		cout << "****What would you like to do?: " << endl;
		cout << "-1. Heavy Lift." << endl;
		cout << "-2. Light Lift." << endl;
		cout << "-3. Muscle Confusion." << endl;
		do{
		cout << "Please select one of the following numbers: ";	
		cin >> choice;
		}while(choice > 3);
		system("cls");
		
	
		if(choice == 1) 
		{
			cout << "*Heavy Chest Workout:*" << endl;
			cout << "-5 reps of 5 sets of bench." << endl;
			cout << "-5 reps of 5 sets of inclice." << endl;
			cout << "-5 reps of 5 sets of dumbell flys." << endl;
			cout << "-5 reps of 5 sets of decline bench." << endl;
	}
			switch(choice){
		
		case 2:
		
			cout << "*Light Chest Workout:*" << endl;
			cout << "-8 reps of 3 sets of bench." << endl;
			cout << "-8 reps of 3 sets of inclice bench." << endl;
			cout << "-8 reps of 3 sets of dumbell flys." << endl;
			cout << "-8 reps of 3 sets of decline bench." << endl;
			break;
			
		
		case 3:
				
			cout << "*Muscle Confusion Chest Workout:*" << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of bench." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of inclice." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of dumbell flys." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of decline bench." << endl;
			break;
		
			 
		}
			
	}
			
};
class TriBi : public Workout
{
	public:
		int choice;
		TriBi()
		{
			setActivity("Triceps/Biceps");
			setMinutes(60);	
		}
		TriBi(string a , int m)
		{
			setActivity(a);
			setMinutes(m);
		}
		
    virtual string getDescription()
	{
		
		int min;
		string desc = Workout::getDescription();

		cout << "****What would you like to do?: " << endl;
		cout << "-1. Heavy Lift." << endl;
		cout << "-2. Light Lift." << endl;
		cout << "-3. Muscle Confusion." << endl;
		do{
		cout << "Please select one of the following numbers: ";	
		cin >> choice;
		}while(choice > 3);
		system("cls");
		
	
		if(choice == 1)
		{
			cout << "*Heavy Tricep/Bicep Workout:*" << endl;
			cout << "-5 reps of 5 sets of bicep curls." << endl;
			cout << "-5 reps of 5 sets of skull crushers." << endl;
			cout << "-5 reps of 5 sets of hammer curls." << endl;
			cout << "-5 reps of 5 sets of tricep pulldowns." << endl;
						
		}
		else if(choice == 2)
		{
			cout << "*Light Tricep/Bicep Workout:*" << endl;
			cout << "-8 reps of 3 of bicep curls." << endl;
			cout << "-8 reps of 3 of skull crushers." << endl;
			cout << "-8 reps of 3 sets of hammer curls." << endl;
			cout << "-8 reps of 3 sets of tricep pulldowns." << endl;
		}
		else if(choice == 3)
		{
			cout << "*Muscle Confusion Tricep/Bicep Workout:*" << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of bicep curls." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of skull crushers." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of hammer curls." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of tricep pulldowns." << endl;
		}
		int x = 3;
	do{	
	cout << "How many minutes did the workout take you today!?: ";
	cin >> min; 
	setMinutes(min);
	
	cout << "*********************************************************************"<<endl;
	cout << "\t\t\t ******REPORTS******" << endl << endl;

	cout << "Your total time logged for the week is: " << getMinutes() << endl;--x;

	}while(x < 1);
	
	}
			
};
class LegsBack : public Workout
{
	public:
		int choice;
		LegsBack()
		{
			setActivity("Legs/Back");
			setMinutes(60);	
		}
		LegsBack(string a , int m)
		{
			setActivity(a);
			setMinutes(m);
		}
		
    virtual string getDescription()
	{
		string desc = Workout::getDescription();

		cout << "****What would you like to do?: " << endl;
		cout << "-1. Heavy Lift." << endl;
		cout << "-2. Light Lift." << endl;
		cout << "-3. Muscle Confusion." << endl;
		do{
		cout << "Please select one of the following numbers: ";
		cin >> choice;
		}while(choice > 3);
		system("cls");	
		
		
		if(choice == 1)
		{
			cout << "*Heavy Legs/Back Workout:*" << endl;
			cout << "-5 reps of 5 sets of squats." << endl;
			cout << "-5 reps of 5 sets of deadlifts." << endl;
			cout << "-5 reps of 5 sets of leg extentions." << endl;
			cout << "-5 reps of 5 sets of back pulldowns." << endl;
		
						
		}
		else if(choice == 2)
		{
			cout << "*Light Legs/Back Workout:*" << endl;
			cout << "-8 reps of 3 of squats.." << endl;
			cout << "-8 reps of 3 of deadlifts." << endl;
			cout << "-8 reps of 3 sets of leg extentions." << endl;
			cout << "-8 reps of 3 sets of back pulldowns." << endl;
		}
		else if(choice == 3)
		{
			cout << "*Muscle Confusion Legs/Back Workout:*" << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of squats.." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 deadlifts." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of leg extentions." << endl;
			cout << "-Start at 10 reps, then minus 2 reps from each set of 5 sets of back pulldowns." << endl;
		}
		
			
	}
};
int main()
{
	Chest chest;
	Workout workout;
	TriBi triBi;
	LegsBack legsBack;
	vector <int> minVec;
	int choice , min;
	vector <string> day;
	
	cout << "What would you like to workout?:" << endl;
	cout << "-1. Chest." << endl;
	cout << "-2. Triceps/Biceps." << endl;
	cout << "-3. Legs/Back." << endl;
	cout << "-4. Rest Day." << endl;
	do{
	cout << "Please select one of the following numbers: ";
	cin >> choice;
	}while(choice > 4);
  	system("cls");

	
	
	if(choice==1)
		chest.getDescription();
	else if(choice==2)
		triBi.getDescription();
	else if(choice==3)
		legsBack.getDescription();
	

	cout << "How many minutes did the workout take you today!?: ";
	cin >> min; 
	
	workout.setMinutes(min);
	
	cout << "*********************************************************************"<<endl;
	cout << "\t\t\t ******REPORTS******" << endl << endl;

	cout << "Your total time logged for the week is: " << workout.getMinutes() << endl;
	return 0;
	
}
