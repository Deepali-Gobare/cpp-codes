#include<iostream>
using namespace std;
class A{
	int a;
	public:
	void get(){
		a=100;
		cout<<a;
	}
};
int main(){
	A obj;
	obj.get();
}
//=============================================================
//#include<iostream>
//using namespace std;
//class A{
//	int a;
//	void get(){
//		a=100;
//		cout<<a;
//	}
//};
//int main(){
//	A obj;
//	obj.get();
//}
//======================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	const int a=12;
//	a=a+12;
//	cout<<a<<endl;
//}
//==========================================================

//#include<iostream>
//using namespace std;
//int main(){
//	int a=2,b=1;
//	int* const p=&a;
//	
////	p=&b;
//	*p=12;
//	cout<<"value of a: "<<a<<endl;
//	cout<<"value of *p: "<<*p<<endl;
//	cout<<"value of p: "<<p<<endl;
//	
//}
//=======================================================================

//#include<iostream>
//using namespace std;
//int main(){
//	int i=10;int j=67;
//	const int* l=&i;
//	cout<<"address of i:"<<l<<endl;
//	l=&j;
//	cout<<"address of j:"<<l<<endl;
////	*l=11;
//i=8;
//j=3;
//	cout<<"value of i:"<<j<<endl;
//	
//}
//===================================================================\
//#include<iostream>
//using namespace std;
//int main(){
//  int a=1,b=3;
//  const int * const q=&b;
// q=&a;
// cout<<q<<endl;
// *q=4;
// cout<<*q<<endl;
//  
//}
//=========================================================================
//pass by value->>>>

//#include<iostream>
//using namespace std;
//void swap1(int,int);
//int main(){
//	int e=1;
//	int r=2;
//	cout<<"Befor swaping "<<e<<" "<<r<<endl;
//	swap1(e,r);
//    cout<<"After swaping "<<e<<" "<<r<<endl;
//}
//void swap1(int d,int g){
//      int temp;
//      temp=d;
//      d=g;
//      g=temp;
//      cout<<"swapping inside function: "<<d<<g<<endl;
//}
//======================================================================
//pass by address->

//#include<iostream>
//using namespace std;
//void swapping(int*,int*);
//int main(){
//	int m=3, n=6;
//	cout<<"before swap: "<<m<<n<<endl;
//	swapping(&m,&n);
//	cout<<"after swap: "<<m<<n<<endl;
//}
//
//void swapping(int *a,int *b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//	
//}

//===========================================================================
