// practice

//DMA For C
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int* ptr;
//	int n,i;
//	printf("enter a no of element\n");
//	scanf("%d",&n);
//	ptr = (int*) malloc(n*sizeof(int));
//	printf("accept element\n");
//	for(i=0;i<n;i++)
//		scanf("%d",&ptr[i]);
//		printf("display element\n");
//		for(i=0;i<n;i++)
//		printf("%d\t",ptr[i]);
//		free(ptr);
//	
//}

//Using new operator
//#include<iostream>
//using namespace std ;
//
//int main(){
//	int *p;
//	float *q;
//	char *r;
//	p = new int(10);
//	cout<<*p<<endl;
//	q = new float(1.45);
//	cout<<*q<<endl;
//	r = new char('A');
//	cout<<*r<<endl;
//	
//	delete p;
//	delete q;
//	delete r;	
//}

//Dynamic Memory Allocation for Arrays

//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter sizeof array:"<<endl;
//	cin>>n;
//	int* r = new int[n];
//	for(int i=0;i<n;i++)
//	cin>>*(r+i);
//	for(int i=0;i<n;i++)
//	cout<<*(r+i);
//	delete[] r;
//}


//string
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	char ptr[4];
//	cout<<"enter a string";
//	cin>>ptr;
//	cout<<ptr;
//	cout<<strlen(ptr)<<endl;
//	cout<<sizeof(ptr);
//}


// C++ Program to store GPA of n number of students and display it where n is the number of students entered by the user
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"enter total number of student";
//	cin>>num;
//	float* ptr;
//    ptr = new float[num];
//    cout << "Enter GPA of students." << endl;
//    for( int i=0;i<num;i++){
//    	cout<<"student"<<i+1<<":";
//    	cin>>*(ptr+i);
//    }
//    cout << "\nDisplaying GPA of students." << endl;
//	for (int i = 0; i < num; ++i) 
//	  {
//	    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
//	  }
//	 
//	delete[] ptr;
//	
//	  return 0;
//
//	
//	
//}



 //Create an object of the class which is created dynamically using the new operator and deleting it explicitly using the delete operator:

//#include<iostream>
//using namespace std;
//#include<string.h>
//class student
//{
//	int rollno;
//	char name[20];
//	public:
//	void display();
//	student(int,char *);
//	~student()
//{
//	cout<<"dest";
//}
//};
//student::student(int r,char * sptr)
//{
//	rollno=r;
//	strcpy(name,sptr);
//}
//void student::display()
//{
//	cout<<"rollno is "<<rollno<<endl;
//	cout<<"name = "<<name<<endl;
//	cout<<"\n";
//}
//
//int main()
//{
//	student * ptr=new student(1,"rahul");
//	ptr->display();
//	delete ptr;
//}



#include<iostream>
using namespace std;
#include<stdlib.h>
class A 
{
	public:
    int a;
 	public:
    A()
    {
    	a=10;
        cout << "Constructor was Called!"<< endl;
    }
    void show()
    {
    	cout<<"in show()\n";
	}
};
int main()
{
 
    
    A* a = new A;
    cout<<a->a;
   
    cout << "Object of class A was "
         << "created using new operator!"
         << endl;
 
    // Create an object of class A
    // using malloc operator
    A* b = (A*)malloc(sizeof(A));
    cout<<b->a;
   
    cout << "Object of class A was "
         << "created using malloc()!"
         << endl;
 
    return 0;
}

////accept no of subjects and name from the user dynamically and accept marks for each subject and display average and name of the student
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,m,i,sum=0;
//	cout<<"accept no of subjects\n";
//	cin>>n;
//	cout<<"accept no of character\n";
//	cin>>m;
//	int * p_marks=new int [n];
//	char * p_name=new char[m+1];
//	cout<<"accept marks\n";
//	for(i=0;i<n;i++)
//	{
//		cin>>p_marks[i];
//	}
//	for(i=0;i<n;i++)
//	{
//		sum=sum + p_marks[i];
//	}
//	cout<<"accept name\n";
//	cin>>p_name;
//	float avg=(float)sum/n;
//	cout<<"average is  "<<avg;
//	cout<<"name is  "<<p_name;
//	delete [] p_name;
//	delete[] p_marks;
//}



// C++ program to demonstrate the number of times constructor and destructors are called
//#include <iostream>
//using namespace std;
//static int Count = 0;     
//class Demo {
//public:
// 
//    Demo()
//    { 
//        
//        Count++;
//        cout << "No. of Object created: " << Count<< endl;
//    }
//     ~Demo()
//    {
//         
//        cout << "No. of Object destroyed: " << Count << endl;                                  
//        Count--;
//        
//    }
//};
//int main()
//{
//    Demo t, t1, t2, t3;
//}













