#include<iostream>
#include<algorithm>
using namespace std;


void leftRotateD(int *arr, int n, int d){
	int temp[d];
	for (int i = 0; i < d; ++i)
	{
		temp[i] = arr[i];
	}
	for (int i = d; i <n; ++i)
	{
		arr[i-d]=arr[i];
	}
	for (int i = 0; i < d; ++i)
	{
		arr[n-d+i]=temp[i];
	}
}


int main(){
	int arr[7] = {10, 20, 0, 30, 0, 0, 56};
	cout<<"Before Rotation : "<<endl;
	for (int i = 0; i < 7; ++i)
{
	cout<<arr[i]<<" ";
}
	
	leftRotateD(arr, 7,3);
	cout<<endl<<"After Rotation :"<<endl;
for (int i = 0; i < 7; ++i)
{
	cout<<arr[i]<<" ";
}
	
}
