#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
	bool swapped = false;
	for(int i = 0; i<n-1; i++){
		for (int j = 0; j<n-1-i;j++){
			if (arr[j]>arr[j+1]){
				swapped = true;
				swap(arr[j],arr[j+1]);
			}
		}
		if (swapped == false){
			break;
		}
	}
}



int main(){
	int arr[5] = {3,6,1,7,2};
	int n = 5;
	bubbleSort(arr,n);
	cout<<"----------------";
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"---------------"<<endl;

}