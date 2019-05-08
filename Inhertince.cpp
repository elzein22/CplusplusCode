#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Rectangle
{
	private:
		int length;
		int width;
	public:
		void setData(int l , int w)
		{length =l;
			width=w;}
			
		void showRectangle()
			{cout<<length << " by " << width;}	
			
		int computeArea()
			{return length * width;}	
};
class Block : public Rectangle
{
	private:
		int height;
	public:
		void setData(int h , int l, int w)
			{
				Rectangle::setData(l , w);
				height = h;
			}
			
				
		void showBlock()
			{	
				showRectangle();
				cout << " by " << height;
			}
		
		int computeArea()
		{
			int area;
			area = Rectangle::computeArea() * height;
			return area;
		}
};
int main() 
{
	//Rectangle r;
	//r.setData(10 , 5);
	//r.showRectangle();
	//cout << "\nArea : " << r.computeArea() << endl;	
	
	Block b;
	b.setData(2 , 3 , 4);
	b.showBlock();
	cout << b.computeArea();
}
