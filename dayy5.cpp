//#include<iostream>
//using namespace std;
//class Demo{
//	private:
//		int a =3;
//		
//	public:
//		int z=4;
//	    int abc(){
//			cout<<"Hello";
//		}
//	protected:
//		int f=5;
//		
//		
//};
//class Demo1:private Demo{
//	public:
//	int g;
//	int gett(){
//	    return z;
//	}
//	int putt(){
//	    return f;
//	}
//	int pull(){
//	    return a;
//	}
//};
//int main()
//{
//	Demo1 d;
//	cout << "Public = "<< d.gett()<<endl; 
//	cout << "Protected = "<< d.putt()<<endl;
////	cout << "Protected = "<< d.pull()<<endl;//Errorr as private members cannot be access
//}


//
//#include<iostream>
//using namespace std;
//class A{
//	
//		
//			int a;
//		
//	public:
//	
//			int b;
//	public:
//	
//	void display()
//	{
//			cout<<"hello world"<<endl;
//	}
//	
//		
//	protected:
//		
//			int c;
//		
//};
//
//class B:private A{
//	public: 
//		int show(){
//			display();
//		}
//
//};
//int main()
//{
//	B obj1;
//	obj1.show();
////	obj1.display(); // we can not access base class functions through derived class object
//}






