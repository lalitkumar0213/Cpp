//Assignment1
//Q1
//#include<iostream>
//using namespace std;
//
//int maximum(int number[])
//{
//	int max=number[0];
//    for(int i=1; i<5; i++){
//    	if (number[i]>max){
//    		max=number[i];
//		}
//    
//	}
//		return max;
//}
//
//int main()
//{
//  int numbers[5];
//  cout<<"Enter the numbers : "<<endl;
//  for(int i=0; i<5 ; i++){
// 	cin>>numbers[i];
//  }	
//   
// cout<<"max is "<<maximum(numbers);
//  
//}

//Q2
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a[5], i, sum = 0;
//    float avg;
//    int* ptr = a;
//
//    cout << "Enter 5 elements:\n";
//    for (i = 0; i < 5; i++) {
//        cin >> *(ptr + i); 
//    }
//
//    for (i = 0; i < 5; i++) {
//        sum += *(ptr + i); 
//    }
//
//    avg = sum / 5; 
//
//    cout << "Sum is: " << sum << endl;
//    cout << "Average is: " << avg << endl;
//
//    return 0;
//}

//Q3
//#include<iostream>
//int main()
//{
//	int m[5]={1,2,3,4,5};
//	int i,a[5];
//	for(i=0;i<5;i++)
//	{
//			a[i]=m[i];
//	}
//
//	cout<<"display elements";
//	for(i=0;i<=4;i++)
//	cout<<"copied element in another array"<<a[i];
//	
//}

//Assignment 2
//Q1 Addition of two matrix
//#include <iostream>
//using namespace std;
//
//int main()
// {
//    const int ROWS = 2;
//    const int COLS = 2;
//
//    
//    int matrix1[ROWS][COLS] = { {1, 2}, {3, 4} };
//    int matrix2[ROWS][COLS] = { {5, 6}, {7, 8} };
//    int result[ROWS][COLS]; 
//
//    
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            result[i][j] = matrix1[i][j] + matrix2[i][j];
//        }
//    }
//
//    cout << " after Addition:\n";
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << result[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


//Q2 traspose of matrix
//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    const int ROWS = 3;
//    const int COLS = 2;
//
//    
//    int matrix[ROWS][COLS] = { {1, 2}, {3, 4}, {5, 6} };
//    int transpose[COLS][ROWS]; 
//
//   
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            transpose[j][i] = matrix[i][j];
//        }
//    }
//
//    
//    cout << "Original Matrix:\n";
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    
//    cout << "Transposed Matrix:\n";
//    for (int i = 0; i < COLS; ++i) {
//        for (int j = 0; j < ROWS; ++j) {
//            cout << transpose[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

// Q3 square of all elemnte of 2d array
//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    const int ROWS = 3;
//    const int COLS = 3;
//
//   
//    int matrix[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//
//    
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            matrix[i][j] *= matrix[i][j]; 
//        }
//    }
//    cout << "Matrix with squared elements:\n";
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



// Assignment no 3
//store 10book details in array
//#include <iostream>
//using namespace std;
//class Book{
//	int price;
//	char name[20];
//	public:
//		void getdata();
//        void putdata();
//};
//void Book::getdata()
//{
//	cout<<"enter a price of book:";
//	cin>>price;
//	cout<<"enter a name of the book:";
//	cin>>name;
//}
//void Book::putdata()
//{
//  cout << price << " ";
//  cout << name << " ";
//  cout << endl;
//}
//int main()
//{
//	Book b[5];
//	int i;
//	for(i=0;i<5;i++)
//	{
//		b[i].getdata();
//    }
//   
//    cout << "book Data - " << endl;
//   
//  
//    for(i = 0; i < 5; i++){
//	
//    b[i].putdata();
//  }
//	
//}
























