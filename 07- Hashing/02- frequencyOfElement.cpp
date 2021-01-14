#include<iostream>
#include<unordered_map>

using namespace std;

void countFreq(int *arr, int n){
	unordered_map<int,int> m ;
	for(int i=0; i<n ; i++){
		m[arr[i]]++;
	}
	for(auto value: m){
		cout<<value.first<<" - "<< value.second<<endl;
	}
}


int main(){
	int arr[6] = {10, 13, 12, 13, 10, 13};
	int n = 6;
	countFreq(arr,n);
}