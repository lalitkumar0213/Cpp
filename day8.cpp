
//Friend function
//#include<iostream>
//using namespace std;
//class A{
//	public:
//		int pub;
//		A(){
//			pub = 10;
//			priv = 55;
//			pro =66;
//		}
//	friend class F;
//	protected:
//		int pro;
//	private:
//		int priv;
//		
//};
//class F{
//	public:
//	void display(A & t){
//		cout<<"Hello : "<<t.pub<<endl;
//		cout<<"Hello : "<<t.priv<<endl;
//		cout<<"Hello : "<<t.pro<<endl;
//	}
//};
//int main(){
//	A a1;
//	F f1;
//	f1.display(a1);// a1 cannot be access outside main so we use t 
//}
//=============================================================================================
//Global Function as Friend Function
//#include<iostream>
//using namespace std;
//class parent
//{	
//	protected:
//	int a;
//	
//	private:
//	 int b;
//	public:
//	
//	parent()
//	{
//		a=10;
//		b=20;
//	}
//	friend void fun(parent&);
//	
//		
//};
//void fun(parent& p1){
//	
//	cout<<"Hello world \n"<<p1.a<<endl;
//	cout<<"Hello world \n"<<p1.b<<endl;
//	
//}
//int main()
//{
//	parent p;
//	fun(p);
//}



//=======================================================================================================

//
//#include<iostream>
//using namespace std;
//
//class base;
//class demo
//{
//	public:
//	void show(base&);
//	
//};
//class base
//{
//	protected:
//	int a;
//	private:
//	int b;
//	public:
//	
//	base()
//	{
//		a=10;
//		b=20;
//	}
//friend void demo::show(base&);
//};
//void demo::show(base& b1)
//	{
//		cout<<b1.a<<endl;
//		cout<<b1.b<<endl;
//	}
//
//int main()
//{
//	base obj1;
//	demo obj2;
//	
//	obj2.show(obj1);
//}

//====================================================================

//#include <iostream>    
//using namespace std;    
//class Box    
//{    
//    private:    
//        int length;    
//    public:    
//        Box()
//	{
//		length=0;
//	}
//        friend int printLength(Box); //friend function    
//};    
//int printLength(Box b)    
//{    
//   b.length += 10;   
////    b.length = b.length + 10;   
//    return b.length;    
//}    
//int main()    
//{    
//    Box b;    
//    cout<<"Length of box: "<< printLength(b)<<endl;    
//    return 0;    
//} 

//==============================================================================

//#include<iostream>
//using namespace std;
//
//class A;
//class B
//{
//	int x;
//	public :
//	void data(int i)
//	{
//		x=i;
//	}
//	friend void getdata(A,B);
//};
//class A
//{
//	int y;
//	public:
//	void data(int j )
//	{
//		y=j;
//	}
//	friend void getdata(A,B);
//};
//
//	void getdata(A a,B b)
//	{
//		if (b.x>=a.y)
//	std::cout << b.x << std::endl;  
//    else  
//    std::cout << a.y << std::endl; 
//	}
//
//int main()
//{
//	B b;
//	A a;
//	b.data(33);
//	a.data(44);
//	getdata(a,b);
//};


//====================================================================================================











