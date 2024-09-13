#include<iostream>
using namespace std;
class A 
{public:
	int a = 10;
};
class B 
{public:
	int b =30;
	virtual void func(){
	
	cout<<"Test"<<endl;	
	}
};

int main()

{
	A obj;
	B obj1;

	cout<<sizeof(obj)<<endl;
	cout<<sizeof(obj1);
}

//=========================================================================


