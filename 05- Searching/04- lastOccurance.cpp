#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int low, int high, int x, int n)
{
	if (low>high)
		return -1;
	int mid = (low+high)/2;
	if (arr[mid]> x){
		lastOccurrence(arr, low, mid-1, x, n);
	}
	else if (arr[mid]<x){
		lastOccurrence(arr, mid+1, high, x,n );
	}
	else {
		if(mid==n-1|| arr[mid+1]!=arr[mid]){
			return mid;
		}
		else {
			lastOccurrence(arr, mid+1, high, x,n);
		}
	}

}

int main() {
    
    int arr[] = {5, 10, 10, 15, 15};
    int  n = 5;

	int x = 10;
	
	cout<<lastOccurrence(arr,0, n-1, x, n);
	return 0;
}