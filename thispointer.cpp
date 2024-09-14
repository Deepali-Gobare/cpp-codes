//#include <iostream>  
//using namespace std; 
//class Complex
//{
//
//	int real,img;
//	public:
//		void show();
//		Complex();
//		Complex(int,int);
//		
//};
//void Complex ::show()
//{
//	cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
//}
//Complex::Complex()
//{
//	cout<<"in default constructor\n";
//	//real=10;
//	//img=20;
//	cout<<"enter value of real\n";
//	cin>>real;
//	cout<<"enter value of img\n";
//	cin>>img;
//	
//}
//Complex::Complex(int real,int img)
//{
//	cout<<"in parametrized constructor\n";
//real=real;
//	img=img;
//}
//int main()
//{
//	Complex c1,c2;
//	c1.show();
//	c2.show();
//	Complex c3(5,6);
//	//c3.real=50; allowed when real is publicly declared
//	c3.show();
//	return 0;
//	
//}
//==================================================
//#include<iostream>
//using namespace std;
//class item
//{
//public:
//	static int x;
//	int number;
//public:
//	void getdata(int a)
//	{
//		number=a;
//		number++;
//		x++;
//	}
//	void getcount()
//	{
//		x=10;
//		cout<<"value is "<<x<<endl;
//	}
//	void getcount_1()
//	{
//		x++;
//		cout<<"value is  "<<number<<endl;
//		cout<<"value is "<<x<<endl;
//	}
//};
//int number=9;
//int item::x;
//int main()
//{
//	item a;
//	a.getcount();
//	a.getdata(100);
//	a.getcount_1();
//	cout<<number<<endl;
//	cout<<a.number;
//}

//
//#include<iostream>
//using namespace std;
//class date
//{
//	int dd,mm,yy;
//	public:
//	void show();
//	date(int,int,int);
//	date();
//};
//date::date()
//{
//	this->dd=this->mm=this->yy=0;
//}
// date::date(int dd,int mm,int yy)
//{
//	this->dd=dd;
//	this->mm=mm;
//	this->yy=yy;
//}
// void date::show()
// {
//	 cout<<"date is "<<this->dd<<"/"<<this->mm<<"/"<<yy<<endl;
// }
// int main()
//{
//	date d0;
//	d0.show();
//	date d1(1,1,1);
//	d1.show();
//	date d2(2,2,2);
//	d2.show();
//}



#include<iostream>
using namespace std;
class temp
{
	 int a;
public:
	void get();
	temp add(temp & b1) //This function will take object as arguments and  return object
	{
		temp aobj3;
		aobj3.a= this->a +   b1.a;
		return aobj3;
	}
	void show()
	{
		cout<<"value is   "<<a;
	}
};
void temp:: get()
	{
		cin>>this->a;
	}
int main()
{
	temp aobj1,aobj2;
	aobj1.get();
	aobj2.get();
	temp aobj4=aobj1.add(aobj2);
	aobj4.show();
}
