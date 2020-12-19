#include<iostream>
using namespace std;

int bSearch( int *arr, int low,  int high, int k){
	if (low>high)
		{return -1;}

		int mid = (low+high)/2;
		if (arr[mid]==k){
			return mid;
		}
		else if (arr[mid]<k){
			bSearch(arr, mid+1, high, k);
		}
		else bSearch(arr, low , mid-1,k);
}



int main(){
	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = 6;

	int x = 20;
	
	cout<<"element present at index: "<<bSearch(arr, 0, n-1, x);
	return 0;
}