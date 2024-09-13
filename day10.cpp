//#include<iostream>
//using namespace std;
//#include<string.h>
//int main()
//{
//	char name[10]= "Hellooo"; \0 is not counted
//	int x=strlen(name);
//	cout<<x<<"\n"<<sizeof(name);//it will return the size of array =10
//}

//#include<iostream>
//using namespace std;
//#include<string.h>
//int main()
//{
//	char name[10]= "Hell\0ooo"; //length is counted till \0
//	int x=strlen(name);
//	cout<<x<<"\n"<<sizeof(name);
//}



//===========================================================================

//#include<iostream>
//using namespace std;
//int ustr(char*);
//int main(){
//	char ch[10];
//	cout<<"Enter the string"<<endl;
//	cin>>ch;
//	int len = ustr(ch);
//	cout<<"length is"<<len<<endl;
//}
//int ustr(char* ch1)
//{
//	int len = 0;
//	while(*ch1!='\0')
//	{
//		len++;
//		ch1++;
//	}
//	return len;
//}






//=============================================================================================





//Accept one string from user and display wether string is palwndrome or not use predefined functions 
//
//#include<iostream>
//using namespace std;
//#include<string.h>
//int main()
//{
//	char ch[10] = "hellooo";
//	char ch1[10];
//	ch1 = strrev(ch);
//	
//	cout<<"source  "<<ch<<endl;
//	cout<<"Destination  "<<ch1;
//	
//}




//1)WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE


#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=7;
	*a = b;
	*b = a;
	cout<<" "<<<<b;
	
}















