// Example: Program to use the const keyword with the member function of class
//#include<iostream>
//using namespace std;
//
//class ABC  
//{  
// 
//public:  
//int A; // its value is const  
//
//void fun () const  
//{  
// cout<<A; // it shows compile time error  
//}  
//ABC(){
//	A=10;
//}
//};  
//  
//int main ()  
//{  
//    ABC obj; // object creation classname objname;  
//    obj.fun();  // call const member fun of class abc using  . 
//    return 0;  
//}
//==================================================
//#include <iostream>
//using namespace std;
// 
//class Demo {
//    int x;
// 
//public:
//    void set_data(int);
//    int get_data() const;
//};
// void Demo::set_data(int a) 
//{
// x = a;
// }
//int Demo::get_data() const 
//{
// return x; 
//}
//main()
//{
//    Demo d;
//    d.set_data(10);
//    cout << d.get_data();
// 
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a=10;
//	void* b = &a;
//	printf("%d",sizeof(void*));
//}
//================================================

//#include<iostream>
//using namespace std;
//
//int main(){
//	int* p;
//	float* q;	
//}

//====================================================
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n,m,sum=0;
//	
//	cout<<"enter the no. of subjects: "<<endl;\
//	cin>>n;
//	
//	cout<<"enter the no. of character: "<<endl;
//	cin>>m;
//	
//	int* marks=new int[n];
//	char* name=new char[m+1];
//
//    cout<<"enter the marks of the subjects: "<<endl;
//	for(int i=0;i<n;i++){
//		cin>>marks[i];
//	}	
//	
//	for(int i=0;i<n;i++){
//		sum=sum+marks[i];
//	}
//	cout<< "sum: "<<sum<<endl;
//
//	cin>>name;
//	
//	cout<<"name: "<<name<<endl;
//	
//	float avg=(float)sum/n;
//	cout<<"average: "<<avg;	
//}

//==========================================================

//#include<iostream>
//using namespace std;
//#include<stdlib.h>
//class A 
//{
//	public:
//    int a;
// 	public:
//    A()
//    {
//    	a=10;
//        cout << "Constructor was Called!"<< endl;
//    }
//    void show()
//    {
//    	cout<<"in show()\n";
//	}
//};
//int main()
//{
 
    // Create an object of class A using new operator
//    A* a = new A;
//    cout<<a->a<<endl;
//   
//    cout << "Object of class A was "
//         << "created using new operator!"
//         << endl;
// 

    // Create an object of class A
    // using malloc operator
//    A* b = (A*)malloc(sizeof(A));
//    cout<<b->a<<endl;
//   
//     cout << "Object of class A was "
//         << "created using malloc()!"
//         << endl;
//    return 0;
//}
//===============================================

//#include <iostream> 
//using namespace std; 
//class Student
//{ 
//  
//public:  
//    Student() 
//    { 
//        cout << "Constructor is called!\n"; 
//    }  
//    ~Student() 
//    { 
//        cout << "Destructor is called!\n"; 
//    } 
//   // Function to display message 
//    void write() 
//    { 
//        cout << "Writing!\n"; 
//    } 
//}; 
//
//int main() 
//{ 
//    
//    Student* student = new Student[3]; 
//      // Function call to write() 
//    student[0].write(); 
//    student[1].write(); 
//    student[2].write(); 
//     delete[] student; //try with delete 
//  
//    return 0; 
//}


 #include <iostream>
using namespace std;
class Test
{
	public:
	Test()
	{
		cout<<"constructor is invoked";
	}
	~Test()
	{
		cout<<"destructor is invoked";
	}
};
Test t1;
int main()
{
	cout<<"main begins";
	Test t2;
	{
		cout<<"block begins"<<endl;
		Test t3;
		cout<<"block ends"<<endl;
	}
	cout<<"main ends"<<endl;
}


