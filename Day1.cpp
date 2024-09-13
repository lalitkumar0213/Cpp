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
	
	
	
	
	
/*#include<iostream>
using namespace std;
class Complex
{
	int real;
	int img;
	public:
	void setReal(int);
	int getReal();
	public:
	void accept();
	void show()
	{
		cout<<"Complex number"<<real<<"+"<<img<<"i"<<endl;
	}
};
void Complex :: accept()
{
	cout<<"Enter a Real number \n";
	cin>>real;
	cout<<"Enter a Imaginary number \n";
	cin>>img;
}
void Complex :: setReal(int r)
{
	real = r;
}
int Complex :: getReal()
{
	return real;
}
int main(){
	Complex c1;
	c1.accept();
	c1.show();
	c1.setReal(7);
	c1.show();
	cout<<c1.getReal();
}

*/


#include<iostream>
using namespace std ;
class Complex
{
	int real;
	int img;
//	static int x;
	public:
		void accept();
		void setReal(int);
		int getImg() const;
		void show() const
		{
			cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
			
		}
		Complex(int r, int i)
		{
			real=r;
			img=i;
		}
	
	
};
void Complex::accept()
{
	cout<<"enter real and img \n";
	cin>>real>>img;
}
void Complex::setReal(int r)
{
	real = r;
}
int Complex::getImg() const
{
	return img;
}
int main()
{
   const Complex d1(2,3);
	//d1.accept();
	d1.show();
//	d1.setReal(10);
    d1.show();
	cout<<"imaginary part is "<<d1.getImg();
	//cout<<"Size of the object"<<sizeof(d1);
}
































