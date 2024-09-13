/*#include <iostream>
using namespace std;
class MyDate{
	int dd,mm,yy;
	public:
		void accept();
		void setDay(int);
		int getDay();
		void show()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy;
			
		}
};
void MyDate::accept()
{
	cout<<"Enter a date \n";
	cin>>dd>>mm>>yy;
	
}
void MyDate :: setDay(int d)
{
	dd = d;
}
int MyDate :: getDay()
{
	return dd;
}
int main(){
	MyDate d1;
	d1.accept();
	d1.show();
	d1.setDay(31);
	d1.show();
	cout<<"Day part is "<<d1.getDay();
	}
	*/
	
	
#include<iostream>
using namespace std;

class base;
class demo
{
	public:
	void show(base&);
	
};
class base
{
	protected:
	int a;
	private:
	int b;
	public:
	
	base()
	{
		a=10;
		b=20;
	}
	public:
friend void demo::show(base&);
};
void show(base& b1)
	{
		cout<<b1.a<<endl;
		cout<<b1.b<<endl;
	}

int main()
{
	base obj1;
	demo obj2;
	
	obj2.show(obj1);
}
