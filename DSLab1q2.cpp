
/*2. Write a program that takes two or more sets as input and produces their
Cartesian product as output.*/
#include<iostream>
using namespace std;

int main(){
	int n,i;
	int A[10];
	int B[10];
	cout<<"Enter the number of elements of set A: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0; i<n; i++) {
		cin>>A[i];
	}
	cout<<"Enter the number of elements of set B: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0; i<n; i++) {
		cin>>B[i];
	}
	cout<<"The cartesian product of (A x B):"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"("<<A[i]<<","<<B[j]<<")";
		}
	}
return 0;
}
