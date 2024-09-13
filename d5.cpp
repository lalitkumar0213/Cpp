//#include<iostream>
//using namespace std;
//class Circle
//{
//	public:
//	int radii;
//	double area(){
//		return 3.14*radii*radii;
//	}
//};
//int main(){
//	Circle c1;
//	c1.radii=5;
//	cout<<"Radius = "<<c1.radii<<endl;
//	cout<<"area = "<<c1.area()<<endl;
//}
////private data members cannot be access using object

//==================================================================================================
//
//#include<iostream>
//using namespace std;
//class Circle
//{
//	protected:
//	int radii;
//	int perimeter;
//	
//};
//class Circle2:public Circle
//{
//	public:
//	double area(int r, int p){
//			radii = r;
//			perimeter =p;
//		return 3.14*r*r*p;
//	
//	}
//};
//int main(){
//	Circle2 c2;
//	
//	
////	cout<<"Radius = "<<c2.radii<<endl;
//	cout<<"area = "<<c2.area(2, 5)<<endl;
//}



//==============================================================================================



//
//#include<iostream>
//using namespace std;
//class car
//{
//	public: 
//	int a;
//	private:
//	int b;
//	protected:
//	int ten;
//		
//};
//class model:public car
//{
//	public:
//	int i;
//	int show(int f)
//	{
//		ten = f;
//		cout<<"hello "<<endl;
//		return ten;
//	}
//};
//
//int main()
//{
//	model obj;
//	obj.i = 123;
//	obj.a = 22;
////	obj.b = 55;
////	obj.c = 66;
////	
//	cout<<obj.i<<endl;
//	cout<<obj.a<<endl;
//	cout<<obj.show(7)<<endl;
//	cout<<sizeof(obj);	
////	cout<<obj.b<<endl;
////	cout<<obj.c<<endl;
//};	
////we cannot access private member through derived class object

//===================================================================================

//#include<iostream>
//using namespace std;
//class A
//{
//	public:
//		int b;
//		
//};
//class B :public A
//{
//	public :
//		int c;
//};
//
//int main()
//{
//	A obj1;
//	obj1.b = 10;
////	obj1.c= 20; 
//	cout<<obj1.b<<endl;
////	cout<<obj1.c<<endl; // we can not access derived class members thourht base class objects 
//};
//


//==========================================================================================


//#include<iostream>
//using namespace std;
//class car
//{
//	public: 
//	int a;
//	int getpvt(){
//		return b;
//	}
//	private:
//	int b = 77;
//	protected:
//	int ten;
//		
//};
//class model:public car
//{
//	public:
//	int i;
//	int j;
//	int show(int f)
//	{
//		ten = f;
//		cout<<"hello "<<endl;
//		return ten;
//	}
//};
//
//int main()
//{
//	model obj;
//	
//	cout<<obj.getpvt()<<endl; // we can access private member using function created in public of base class 
////	obj.i = 123;
////
////	cout<<obj.i<<endl;
////
////	cout<<obj.show(7)<<endl;
//	cout<<sizeof(obj);	

//};

//===========================================================================================================


//
//
//
//#include <iostream> 
//using namespace std; 
// 
//class Base { 
//private: 
//    int pvt = 1; 
// protected: 
//    int prot = 2; 
// public: 
//    int pub = 3; 
//    int getPVT() { return pvt; } 
//}; 
//  
//class ProtectedDerived : protected Base { 
//public: 
//    int getProt() { return prot; } 
//    int getPub() { return pub; } 
//    //protected: prot,pub,getpvt means they cannot be called with the helpof
//    //derived class object
//}; 
//  
//int main() 
//{ 
//    ProtectedDerived object1; 
//    cout << "Protected = " << object1.getProt() << endl; 
//    cout << "Public = " << object1.getPub() << endl; 
//   // cout << "Public = " << object1.getPVT() << endl; -------->ERROR
//    
//    return 0; }
//    
//    
//======================================================================================================================   


