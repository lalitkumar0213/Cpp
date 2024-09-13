//C++ program to demonstrate public
// access modifier

//#include<iostream> 
//using namespace std;
//class Sphere{
//	public:
//		double radius;
//		double calculate_area(){
//			return 4*3.14*radius*radius;
//		}
//};
//int main(){
//	Sphere s1;
//	s1.radius=7.8;
//	s1.calculate_area();
//	cout<<"radius is :"<<s1.radius<<endl;
//	cout<<"area is : "<<s1.calculate_area();
//
//}



// C++ program to demonstrate private access modifier

//#include<iostream>
//using namespace std;
//class Sphere{
//	private:
//		double radius;
//		public:
//			double calculate_area(){
//				return 4*3.14*radius*radius;
//			}
//};
//
//int main(){
//	Sphere s2;
//	//s2.radius=3.6; //Gives error
//	s2.calculate_area();
//	//cout<<"Radius is : "<<s2.radius<<endl; // Gives error 
//	cout<<"Area is : "<<s2.calculate_area()<<endl;
//}


// C++ program to demonstrate protected access modifier

//#include<iostream>
//using namespace std;
//class Sphere{
//	protected:
//		double radius;
//    public:
//    	double calculate_area(){
//    		return 4*3.14*radius*radius;
//		}
//};
//int main(){
//	Sphere s3;
//	//s3.radius=4.7;  // gives error
//	s3.calculate_area();
//	//cout<<"radius is: "<<s3.radius<<endl; //gives error
//	cout<<"area is :"<<s3.calculate_area();
//	
//}


// C++ program to demonstrate protected access modifier

//#include<iostream>
//using namespace std;
//class Sphere{
//	protected:
//		double radius;
//		};
//		
//class Circle : public Sphere{
//    public:
//    	void setradius(double r){
//    		radius = r;
//    	}
//    	void display(){
//    		cout<<radius<<endl;
//			cout<<4*3.14*radius*radius<<endl;
//		}
//};
//int main(){
//	Circle s3;
//	//s3.radius;
//	s3.setradius(7);
//	s3.display();
//}



// C++ program to demonstrate implementation of Inheritance

//#include<iostream>
//using namespace std;
//class Student{
//	public:
//		int prn;
//		
//};
//class Course:public Student{
//	public:
//		int c_id;
//		void display(){
//		    cout<<prn<<endl;	
//		}
//};
//int main(){
//	Course C1;
//	C1.prn=46;
//	C1.c_id=12;
//	cout<<"Course id is :"<<C1.c_id<<endl;
//	cout<<"prn number is: "<<C1.prn;	
//}


// C++ program to demonstrate the working of public 
//#include<iostream>
//using namespace std;
//class Base{
//	private:
//		int pvt=5;
//	protected:
//		int prot= 10;
//	public:
//		int pub=7;
//		int getpvt(){
//			return pvt;
//		}
//	
//};
//class Child:public Base{
//	public:
//		int getprot(){
//			return prot;
//		}
//};
//int main()
//{
//	Child C1;
//	cout<<"private :"<<C1.getpvt()<<endl;
//	cout<<"Protect :"<<C1.getprot()<<endl;
//	cout<<"public :"<<C1.pub;
//}


// C++ program to demonstrate the working of protected
//#include<iostream>
//using namespace std;
//class Base{
//	private:
//		int pvt=5;
//	protected:
//		int prot= 10;
//	public:
//		int pub=7;
//		int getpvt(){
//			return pvt;
//		}
//	
//};
//class Child:protected Base{
//	public:
//		int getprot(){
//			return prot;
//		}
//		int getpub(){
//			return pub;
//		}
//};
//int main()
//{
//	Child C1;
//	//cout<<"private :"<<C1.getpvt()<<endl;//error
//	cout<<"Protect :"<<C1.getprot()<<endl;
//	cout<<"public :"<<C1.getpub();
//}



// C++ program to demonstrate the working of private
//#include<iostream>
//using namespace std;
//class Base{
//	private:
//		int pvt=5;
//	protected:
//		int prot= 10;
//	public:
//		int pub=7;
//		int getpvt(){
//			return pvt;
//		}
//	
//};
//class Child:private Base{
//	public:
//		int getprot(){
//			return prot;
//		}
//		int getpub(){
//			return pub;
//		}
//};
//int main()
//{
//	Child C1;
//	//cout<<"private :"<<C1.getpvt()<<endl;//error
//	cout<<"Protect :"<<C1.getprot()<<endl;
//	cout<<"public :"<<C1.getpub();
//}


//When the base class is protectedly inherited by the derived class
//#include<iostream>
//using namespace std;
//class A{
//	int c;
//	public:
//		int b=10;
//	protected:
//		int a=20;
//		void display(){
//			cout<<"in display of"<<endl;
//		}
//};
//class B:protected A
//{
//	public:
//		int d;
//	public:
//		void show(){
//			B b1;
//			b1.display();
//			cout<<a<<"\n"<<b;		
//		}	
//};
//int main(){
//	B b2;
//	b2.show();
//}


//When the base class is publicly inherited by the derived class

//#include<iostream>
//using namespace std;
//
//class A{
//	int c;
//	public:
//		int a;
//	protected:
//		int b;
//		public:
//			void display(){
//				cout<<"in display of A : "<<endl;
//			}
//};
//
//class B:public A{
//	public:
//		void show(){
//		
//			display();
//				cout<<a<<b;		
//		}
//};
//
//class C:public B{
//	public:
//		void show(){
//			cout<<a<<b;
//		}
//};
//
//int main(){
//	B b1;
//
//	b1.show();
//	b1.display();
//}












