#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

class Pizza
{
	private:
		string pizzaType;
		string pizzaSize;
		int toppings;
		float price;
	public:
		void setType(string t){pizzaType=t;}		
		void setSize(string s){pizzaSize = s;}
		void setToppings(int top){toppings = top;}
		
		string getType(){return pizzaType;}
		string getSize(){return pizzaSize;}
		int getToppings(){return toppings;}
		float getPrice(){return price;}
		
		void displayPizza()
		{
			cout << endl<<pizzaSize<< " " << pizzaType << " with " << toppings << " toppings " << "$" << price;
		}
		void calcPrice()
		{
			if(pizzaSize == "small") 
				price = 10.00;
			else if(pizzaSize == "medium") 
				price = 14.00;
			else if(pizzaSize == "large") 
				price = 18.00;
			
			price += toppings * 2;
		}
			
};

class Order
{
	private: 
		string custName;
		string custPhone;
		vector<Pizza> pizzas;
		float total;
	public:	
		Order(string n , string p)
			{
				custName = n;
				custPhone = p;
				total = 0;
			}
		void addPizza(Pizza onePizza)
		{
			pizzas.push_back(onePizza);
		}	
		void displayOrder()
		{
			cout << "\nOrder for: " << custName << endl;
			cout << "Phone: " << custPhone << endl;
			for (Pizza pi: pizzas)
				{
				pi.calcPrice();
				pi.displayPizza();
				total += pi.getPrice();
				}
				cout << "\nYour total amount is: " << total;
		}
};

int main()
{
	string name, phone , pizzaSize , pizzaType;
	int toppings;
	char again;
	
	
	cout << "Customer name: ";				getline(cin, name);
	cout << "Customer phone: ";				getline(cin, phone);
	
	Order orders(name , phone);
	do{
	cout << "Customer pizza size: ";			getline(cin, pizzaSize);
	cout << "Customer pizza type: ";			getline(cin, pizzaType);
	cout << "Customer toppings: ";				cin >> toppings;
	
	Pizza pizza1;
	
	pizza1.setSize(pizzaSize);
	pizza1.setType(pizzaType);
	pizza1.setToppings(toppings);
	
	orders.addPizza(pizza1);
	
	cout << "Another Y/N";
	cin >> again;
	cin.ignore(100 , '\n');
	
	}while(again == 'Y' || again == 'y');
	
	orders.displayOrder();
	
	
	
	
	
	return 0;
}
