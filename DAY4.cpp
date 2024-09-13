// 1) Dynamic Initialization of Object

//#include<iostream>
//using namespace std;
//
//class Demo {
//	
//	int* ptr;
//	
//	public:
//		
//		Demo(){
//			
//			ptr = new int;
//			*ptr = 10;
//		}
//		
//		void display(){
//			cout<<*ptr;
//		}
//		
//		~Demo(){
//			
//			cout<<"Destructor is called";
//			delete ptr;
//		}
//		
//};
//
//int main(){
//	Demo d1;
//	d1.display();
//	d1.~Demo(
//	);
//}



// 2) Dynamic Constructor

//#include <iostream>
//using namespace std;
//#include <string.h>
//class StringA{
//	int len;
//	char *ptr;
//	public:
//		
//		void chardisplay();
//		StringA();
//		StringA(char*);
//		void stringdisplay();
//		StringA(char,int);
//		StringA(int);
//		
//		~StringA(){
//		  cout<<"Destructor is called"<<endl;
//		  
//		}
//};
//StringA :: StringA(){
//	len=1;
//	ptr=new char[len];
//	*ptr='A';
//}
//void StringA :: chardisplay(){
//	cout<<"Length is "<<len<<endl;
//	cout<<"Character is "<<*ptr<<endl;
//} 
//StringA :: StringA(char* sptr){
//	len=strlen(sptr);
//	ptr=new char[len+1];
//	strcpy(ptr,sptr);
//}
//void StringA :: stringdisplay(){
//	cout<<"length is :"<<len<<endl;
//	cout<<"String is :"<<ptr<<endl;	
//}
//
//StringA :: StringA(char ch, int l){
//	int i;
//	len=l;
//	ptr = new char[len+1];
//	for(i=0;i<len;i++){
//		ptr[i]=ch;
//	}
//	ptr[i]='/0';
//}
//
//StringA :: StringA(int l){
//	int i;
//	len = l;
//	ptr = new char[len+1];
//	cout<<"Accept String : ";
//	cin>> ptr;
//}
//
//int main()
//{
//	StringA A1;
//	A1.chardisplay();
//	
//	StringA A2("rahul");
//	A2.stringdisplay();
//	
//	StringA A3('$',50);
//	A3.stringdisplay();
//	
//	StringA A4(10);
//	A4.stringdisplay();
//}


// 3) Copy Constructor / 4) Dangling Pointer
//
//#include<iostream>
//#include<string.h>
//using namespace std;
//class CopyCons{
//	int len;
//	char *ptr;
//public:
//	CopyCons(char*);
//	void copydisplay();
//	~CopyCons();
//	
//	
//	
//};
//void CopyCons :: copydisplay(){
//	cout<<"lenght is"<<len<<endl;
//	cout<<"String is:"<<ptr<<endl;
//}
//CopyCons::CopyCons(char * sptr){
//	len=strlen(sptr);
//	ptr=new char[len+1];
//	strcpy(ptr,sptr);
//}
//CopyCons::~CopyCons()
//{
//	cout<<"Destructor is called"<<endl;
//}
//
//int main(){
//	CopyCons c1("krupali");
//	c1.copydisplay();
//	{
//		CopyCons c2(c1);
//		c2.copydisplay();
//}
//
//	c1.copydisplay();
//}



// 4) Important Program (Dynamic Constructor)

//#include<iostream>
//using namespace std;
//class Demo{
//	int size;
//	int * ptr;
//  public:
//  	Demo();
//	void get();
//	void show();
//	int max();
//	int min();
//};
//Demo::Demo(){
//	cout<<"Stored elements are"<<endl;
//	cin>>size;
//	ptr = new int[size];
//	
//}
//
//void Demo::get(){
//	cout<<"accept elements are: ";
//	for(int i=0;i<size;i++){
//		cin>>ptr[i];
//	}
//}
//
//void Demo::show(){
//	cout<<"values are: ";
//	for(int i= 0;i<size;i++){
//		cout<<ptr[i];
//	}
//}
//int Demo::max(){
//	int m=ptr[0];
//	for(int i=1;i<size;i++){
//		if(ptr[i]>m)
//		m = ptr[i];
//	}
//	return m;
//}
//
//int Demo :: min(){
//	int m=ptr[0];
//	for(int i=1;i<size;i++){
//		if(ptr[i]<m)
//		m = ptr[i];
//	}
//	return m;
//}
//
//int main()
//{
//	Demo a;
//	a.get();
//	a.show();
//	cout<<"maximum number is "<<a.max()<<endl;
//	cout<<"minimum number is "<<a.min()<<endl;
//}




































