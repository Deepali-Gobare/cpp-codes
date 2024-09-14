// Assign question 1st:-Find the max val from the array
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"enter the size of an array:"<<endl;
//    cin>>n;
//	
//	int arr[n];
//	cout<<"enter the elements of an array:"<<endl;
//	
//	
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}	
//	int max=arr[0];
//	for(int i=1;i<n;i++){
//		if(max<arr[i]){
//			max=arr[i];
//		}
//	}
//	cout<<"Maximaum val:"<<max<<endl; 
//	return 0;
//		
//	
//}

//Calculate average of all elements from the array 
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"enter the size of the array:"<<endl;
//	cin>>n;
//	int arr[n];
//		cout<<"enter the elements of an array"<<endl;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int sum=0;
//	for(int i=0;i<n;i++){
//        sum=sum+arr[i];
//	}
//	cout<<"sum of arr:"<<sum<<endl;
//	float avg=sum/n;
//	cout<<"average of array elements:"<<avg;
//}
//========================================================
//Calculate average of all elements from the array to integer pointer
#include <iostream>
using namespace std;

int main(){
	int arr[3]={11,12,13};
	
	int *ptr[3];
	int sum=0;
	for(int i=0;i<3;i++){
		ptr[i]=&arr[i];
			cout<<"address of array elements:"<<*ptr[i]<<endl;
			sum=sum+*ptr[i];	
	}
	cout<<"sum: "<<sum<<endl;
   float avg=sum/3;
	cout<<"avg: "<<avg<<endl;    	
}

//=================================================================
//Calculate average of all elements from the array pointer
//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"enter the size of the array:"<<endl;
//	cin>>n;
//	int arr[n];
//		cout<<"enter the elements of an array"<<endl;
//	for(int i=0;i<n;i++){
//		cin>>*(arr+i);
//	}
//	int sum=0;
//	for(int i=0;i<n;i++){
//        sum=sum+*(arr+i);
//	}
//	cout<<"sum of arr:"<<sum<<endl;
//	float avg=(float)sum/n;
//	cout<<"average of array elements:"<<avg;
//}

//copy one element of one array in another array using pointer notation

//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"Get the value for n:"<<endl;
//	cin>>n;
//	int arr[n];
//	int newarr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	cout<<"original array: "<<endl;
//		for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	cout<<"Printing the new array:"<<endl;
//	for(int i=0;i<n;i++){
//	newarr[i]=*(arr+i);
//	cout<<newarr[i]<<" ";
//	}
//}
//================================================================
//wap Addition matrix

//#include <iostream>
//using namespace std;
//int main(){
//	int rows,col;
//	cout<<"enter number of rows: "<<endl;
//		cin>>rows;
//	cout<<"enter number of columns: "<<endl;
//	cin>>col;
//	int matrix1[rows][col];
//	int matrix2[rows][col];
//	int addMatrix[rows][col];
//	cout<<"MATRIX 1ST:"<<endl;
//  	for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cin>>matrix1[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"1st matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<matrix1[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//		cout<<"MATRIX 2ND:"<<endl;
//  	for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cin>>matrix2[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"2nd matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<matrix2[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			addMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
//		}
//		cout<<endl;
//	}
//		cout<<"Add matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<addMatrix[i][j]<<" ";
//		}
//		cout<<endl;
//	}	
//}
//=================================================================
//wap transpose of a matrix

//#include <iostream>
//using namespace std;
//int main(){
//	int rows,col;
//	cout<<"enter number of rows: "<<endl;
//		cin>>rows;
//	cout<<"enter number of columns: "<<endl;
//	cin>>col;
//	int matrix1[rows][col];
//	int transposeMatrix[rows][col];
//	cout<<"MATRIX 1ST:"<<endl;
//  	for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cin>>matrix1[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"1st matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<matrix1[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//		 transposeMatrix[i][j]=matrix1[j][i];
//		}
//		cout<<endl;
//	}
//		cout<<"Transpose matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<transposeMatrix[i][j]<<" ";
//		}
//		cout<<endl;
//	}	
//}
//===================================================================================
//Square of all elements of a Matrix
//#include <iostream>
//using namespace std;
//int main(){
//	int rows,col;
//	cout<<"enter number of rows: "<<endl;
//		cin>>rows;
//	cout<<"enter number of columns: "<<endl;
//	cin>>col;
//	int matrix1[rows][col];
//
//	int squareMatrix[rows][col];
//	cout<<"MATRIX 1ST:"<<endl;
//  	for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cin>>matrix1[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"1st matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<matrix1[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			squareMatrix[i][j]=matrix1[i][j]*matrix1[i][j];
//		}
//		cout<<endl;
//	}
//		cout<<"Square matrix: "<<endl;
//		for(int i=0;i<rows;i++){
//		for(int j=0;j<col;j++){
//			cout<<squareMatrix[i][j]<<" ";
//		}
//		cout<<endl;
//	}	
//}
//Store details of 10books in an array

//#include<iostream>
//using namespace std;
//
//class Books{
//	int price;
//	int pages;
//	
//	public:
//		void getData();
//		void putData();
//};
//void Books::getData(){
//	cout<<"enter price: "<<endl;
//	cin>>price;
//	cout<<"enter pages: "<<endl;
//	cin>>pages;
//}
//void Books::putData(){
//	
//	cout<<"Price: "<<price<<endl;
//	cout<<"Pages: "<<pages<<endl;
//}
//int main(){
//	Books b1[3];
//	
//	for(int i=1;i<=3;i++){
//		cout<<i<<"book: "<<endl;
//		b1[i].getData();
//	}
//	
//	for(int i=1;i<=3;i++){
//		cout<<i<<"book: "<<endl;
//		b1[i].putData();
//	}
//}
// #include<iostream>
// using namespace std;

// class temp
// {
// public:
// 	void show();
// 	void show() const;
// };
// void temp::show()
// {
// 	cout<<"in non constant show";
// }
// void temp::show()const
// {
// 	cout<<"in  constant show";
// }
// int main()
// {
// 	 temp t;
// 	t.show();
// }
