#include<iostream>
#include<unordered_set>

using namespace std;

int countDistinct(int arr[], int n){
	unordered_set<int> s(arr, arr+n);
	return s.size();
}

int main(){
	int arr[6] = {10, 13, 12, 13, 10, 6};
	int n = 6;
	cout<<countDistinct(arr,n);
}