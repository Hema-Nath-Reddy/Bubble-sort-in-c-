#include<iostream>
using namespace std;

void sort(int a[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(a[j+1]<a[j]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}

void display(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
}

int main(){
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	while(size<=0){
		cout<<"Size cannot be less than or equal to 0. Enter a valid size: ";
		cin>>size;
	}
	int a[size];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0;i<size;i++){
		cout<<"Element "<<"["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"The original array is: "<<endl;
	display(a,size);
	sort(a,size);
	cout<<endl<<"The sorted array is: "<<endl;
	display(a,size);
	return 0;
}

