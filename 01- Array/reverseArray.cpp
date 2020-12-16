#include<iostream>
#include<cstring>
using namespace std;

void reverseArray(int *arr, int n){
	int low = 0, high = n-1;
	while (low<high){
		int temp;
		temp = arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}

}

int main(){
 int arr[5]= {1,2,5,6,7};
 reverseArray(arr,5);
 for (int i =0; i<5;i++){
 	cout<<arr[i]<<endl;
 }
 

}
