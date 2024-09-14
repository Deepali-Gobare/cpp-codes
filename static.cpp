
//static variable
//#include<iostream>
//using namespace std;
//static int count=0;
//void demo(){
////	static int count=0;
////	cout<<count<<endl;
//	count++;
//}
//int main(){
//	for(int i=0;i<5;i++){
//		demo();
//cout<<count<<endl;
//		
//	}
////	cout<<count<<endl;
//	return 0;
//}
//=====================================================
//#include<iostream>
//using namespace std;
//class Complex
//{
//	int real;
//	int img;
//	static int cnt;
//	public:
//	void accept();
//	void setReal(int);
//	int getImg();
//	void show()
//	{
//		cout<<"complex number is "<<real<<"+"<<img<<"i"<<"  "<<cnt<<endl;	
//	}
//	static int getCnt()
//	{
//		cnt=5;
//		return cnt;	
////		return real;
//	}
//};
////datatype classname::static variable name;
//int Complex::cnt;//memory allocation takes place
//void Complex::accept()
//{
//	cout<<"enter real and img\n";
//	cin>>real>>img;
//}
//void Complex::setReal(int r )
//{
//	real=r;
//}
//int Complex::getImg()
//{
//	return img;
//}
//int main()
//{
//	Complex c1;
//	c1.accept();
//	c1.show();
//	 cout<<"value is "<<Complex::getCnt();
//	  cout<<"value is "<<c1.getCnt();
//	
//}
//\====================================================================================
#include <iostream>  
using namespace std; 
class Complex
{

	int real,img;
	public:
		void show();
		Complex();
		Complex(int,int);
		
};
void Complex ::show()
{
	cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
}
Complex::Complex()
{
	cout<<"in default constructor\n";
	//real=10;
	//img=20;
	cout<<"enter value of real\n";
	cin>>real;
	cout<<"enter value of img\n";
	cin>>img;
	
}
Complex::Complex(int real,int img)
{
	cout<<"in parametrized constructor\n";
this->real=real;
	this->img=img;
}
int main()
{
	Complex c1,c2;
	c1.show();
	c2.show();
	Complex c3(5,6);
	//c3.real=50; allowed when real is publicly declared
	c3.show();
	return 0;
	
}
