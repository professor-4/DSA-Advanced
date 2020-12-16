#include<iostream>
#include<algorithm>
using namespace std;

void leftRotate(int *arr, int n){
	int temp = arr[0];
	for (int i = 1; i<n; i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}


int main(){
	int arr[7] = {10, 20, 42, 30, 0, 45, 56};
	cout<<"Before Rotating : "<<endl;
	for (int i = 0; i < 7; ++i)
{
	cout<<arr[i]<< " ";
}

	leftRotate(arr,7);
	cout<<endl<<"After Rotating : "<<endl;
for (int i = 0; i < 7; ++i)
{
	cout<<arr[i]<< " ";
}	
}

