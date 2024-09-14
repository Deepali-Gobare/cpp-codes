#include<iostream>
using namespace std;

// 1D-Array
//int main(){
//    int n;
//    
//    cout<<"enter size of the array: "<<endl;
//    cin>>n;
////   int arr1[n];
//   int *ptr=new int[5];
//   cout<<"enter value of elements: "<<endl;
//
//   for (int i = 0; i < n; i++)
//   {
//       cin>>ptr[i];
//   }
//cout<<"Element  of an array: "<<endl;
//   for (int i = 0; i < n; i++)
//   {
//    cout<<ptr[i];
//   }
//==================================================================================
//2D-Array
//int arr[2][2]={{1,2},{3,4}};
//
//for(int i=0;i<2;i++){
//	for(int j=0;j<2;j++){
//		cout<<arr[i][j]<<" ";
//	}
//	cout<<endl;	
//}
//cout<<&arr[0][1]<<endl;  //address
//cout<<*(*(arr+0)+0);  //value

//}
//====================================================
//void add(int a=1,int b=2,int c=9,int d=4,int e=5);
//
//int main(){
////	add();
////	add(10);
//	add(10,20);
//}

//void add(int a,int b,int c,int d,int e){
//	int f=a+b+c+d+e;
//	cout<<"Addation: "<<f<<endl;
//}
//====================================================
//Array of integer pointer
//#include <iostream>  
//using namespace std;  
//int main()  
//{ 
//    int ptr1[5]; // integer array declaration  
//    int *ptr2[5]; // integer array of pointer declaration  
//    cout << "Enter five numbers :" <<endl;  
//    for(int i=0;i<5;i++)  
//    {  
//        cin >> ptr1[i];  
//    }  
//    for(int i=0;i<5;i++)  
//    {  
//        ptr2[i]=&ptr1[i];   
//    }    
//  cout << "The values are" << endl; 
//    for(int i=0;i<5;i++)  
//    {  
//        cout << *ptr2[i] << endl; 
////cout<<ptr2[i]<<endl; 
//    }
//
//	cout<<"sizeof"<<sizeof(ptr1);
//		cout<<"sizeof"<<sizeof(ptr2);
//}
//=======================================================
//change the value of one array index value is also make changes on another array but same index value...
//#include <iostream>
//using namespace std;
//int main(){
//	int arr[3];
//	int* arr2[3];
//	cout<<"Enter the elements of an array: "<<endl;
//	for(int i=0;i<3;i++){
//		cin>>arr[i];
//	}
////	sending the address of arr[3] in arr2[3]
//	for(int i=0;i<3;i++){
//		arr2[i]=&arr[i];
//	}
////	print the values of arr2[3]
//	 for(int i=0;i<3;i++){
////	 	cout<<arr2[i]<<endl;
//        cout<<*arr2[i]<<endl;
//	 }
//	 *arr2[2]=40;   //change the value of arr2[2] =40
////	 cout<<*arr2[2];
//	 
//     cout<<"the values of arr2 are: ";
//     for(int i=0;i<3;i++){
//     	cout<<*arr2[i]<<" "<<endl;
//	 }
//	 int z=arr[2]=*arr2[2];
//	 cout<<"value of arr2[2] and arr[2] is: "<<z;
//}
