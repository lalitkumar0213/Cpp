//#include<iostream>
//using namespace std;
//#include<string.h>
//
//class account
//{
//	public:
//		int acctno;
//		char name [10];
//		static float rate;
//		
//	account (int acctno, char*name){
//		
//		this ->acctno= acctno;
//		strcpy (this->name,name);		
//			
//	}
//	void display()
//	{
//		cout<<"Account no. "<<acctno<<"  "<<"rate of intrest is" <<rate<<endl;
//	}
//};
//
//float account::rate= 5.5;
//
//int main()
//{
//	account a1= account(222,"abcd");
//	account a2=account(223,"xyz");
//	a1.display();
//	a2.display();
//}


//============================================================================================================


#include<iostream>
using namespace std;
class complex
{
	int real,img;// both real and img are created on stack 
	public:
	static const int cnt; // static vareables are stroed in data section so the sizeof() is not considered so no space is allocated 
	private:
	static const int cnt1;
	public:
		complex()
		{
			cout<<"default is invoked\n";
			real=5;
			img=5;
		//	cnt++;//not allowed
		}
		static int getcnt()
		{
			return cnt1;
		}
};
const int complex::cnt=5;//memory alloaction takes place
const int complex::cnt1=10;
int main()
{
	complex c1;//when object is created memory i allocated on heap
	cout<<"no of obj created is   "<<complex::getcnt();
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
	cout<<complex::cnt;
	//cout<<complex::cnt1;

}
//default is invoked
//no of obj created is 10
//sizeoof obj is    16
//5

//===========================================================================================



//#include <iostream>
//using namespace std;
//
//class Test
//{
//	static int x;
//public:
//	Test() { x++; 
//	}
//	static int getX() 
//	{
//	return x;}
//};
//int Test::x = 4;
//int main()
//{
//	
//	cout << Test::getX() << " ";
//}
//


//
//#include <iostream>
//using namespace std;
// 
//class Player
//{
//private:
//    int id;
//    static int next_id;
//public:
//    int getID() { return id; }
//    Player()  {  id = next_id++; }
//};
//int Player::next_id = 1;
// 
//int main()
//{
//  Player p1;
//  Player p2;
//  Player p3;
//  cout << p1.getID() << " ";
//  cout << p2.getID() << " ";
//  cout << p3.getID();
//  return 0;
//}


//2 3 4


//===========================================================================


//#include<iostream>
//using namespace std;
//int main(){
//	char * names[5]= {"Rohan","Rahul", "Ram","Ramesh", "Raj"};
//	
//	
//		
//		for(int j=0;j<29;j++)
//		{
//			cout<<*(*(names+0)+j)<<"\n";
////			cout<<names[0+j]<<endl;
//		}
//		cout<<endl;
//		
//}
	
	
	
//	for(int i=0;i<=5;i++)
//	{
//		cout<<names[i+j]<<endl;
////		cout<<*(*(names+i)+0)<<endl;
//	}
//
//}

// ========================================================================


//#include <iostream>
//using namespace std;
//class Point {
//	public: // public acess specifier added
//    Point() 
//	{ 
//		cout << "Constructor called"<<endl;
//	}
//};
//int main()
//{
//    Point t1;
//    return 0;
//}
  
//Constructor called

// ========================================================================
//
//Excercise 2:
//#include<iostream>
//using namespace std;
//class Point {
//public:
//    Point() { cout << "Constructor called"; }
//};
//int main()
//{
//   Point t1;
//    Point* t2 = new Point();// t2 pointer object memory is allocated
//   return 0;
//}

//==============================================================================
//Excercise 3:
//#include<iostream> 
//
//using namespace std; 
//#include<stdlib.h> 
// class Test 
//{ 
//public: 
//   Test() 
//   { cout << "Constructor called"; } 
//}; 
// int main() 
//{ 
//    Test *t = (Test *) malloc(sizeof(Test)); 
//    return 0; 
//} 
// Unlike new, malloc() doesn’t call constructor.
//
//Excercise 4:
//
//#include<iostream>
//using namespace std;
//class temp
//{
//	int z;
//	static int y;
//public:
//	temp();
//	void show();
//	void display();
//};
//int x;
//int temp::y;
//void temp::show()
//{
//	y++;
//}
//temp::temp()
//{
//	int z=200;
//	x=100;
//	cout<<"value of z is "<<z<<endl;
//}
//void temp::display()
//{
//	cout<<"value of x is "<<x<<endl;
//	cout<<"value of y is  "<<y<<endl;
//}
//int main()
//{
//	temp t;
//	t.show();
//	t.show();
//	t.display();
//	cout<<sizeof(t);
//}
//
//Excercise 5:
//
//#include<iostream>
//using namespace std;
//class item
//{
//public:
//	static int x;
//	int number;
//public:
//	void getdata(int a)
//	{
//		number=a;
//		number++;
//		x++;
//	}
//	void getcount()
//	{
//		x=10;
//		cout<<"value is "<<x<<endl;
//	}
//	void getcount_1()
//	{
//		x++;
//		cout<<"value is  "<<number<<endl;
//		cout<<"value is "<<x<<endl;
//	}
//};
//int number=9;
//int item::x;
//int main()
//{
//	item a;
//	a.getcount();
//	a.getdata(100);
//	a.getcount_1();
//	cout<<number<<endl;
//	cout<<a.number;
//}
//==============================================
//#include<iostream>
//using namespace std;
//class complex{
//	int real, img;
//	public:
//		complex(int, int);
//		void display();
//		complex();
//		complex operator++();
//		complex operator++(int);
//};
//complex::complex()
//	{
//		real=img=0;
//	
//	}
//complex::complex(int real,int img)
//{
//	this->img=img;
//	this->real=real;
//
// } 
// void complex::display()
//{
//	if(img>0)
//	cout<<real<<"+"<<img<<"i"<<endl;
//	else
//	cout<<real<<img<<"i"<<endl;
//}
//complex complex::operator++()
//{
//		
//	++this->real;
//	++this->img;
//	return(*this);
//}
//complex complex :: operator++(int)
//{
//	complex temp=(*this);
//	++this->real;
//	++this->img;
//	return temp;
//}
//int main(){
//
//	complex c1(1,2);
//	complex c2=c1++; 
//	c1.display();
//	c2.display();
//	
////2+3i
////1+2i
//	complex c3(1,2);
//	complex c4=c1++; 
//	c3.display();
//	c4.display();
////1+2i
////2+3i
//}
//
//
//
//
//
//
//
//
//
//





