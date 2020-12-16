#include<iostream>
#include<algorithm>
using namespace std;

void removeDuplicate(int *arr, int n){
	int res=1;
	for (int i=1; i<n; i++){
		if (arr[i]!=arr[res-1]){
			arr[res]=arr[i];
			res++;
		}
	}
}

int main(){
	int arr[7] = {10, 10, 25, 45, 45, 56};	
	removeDuplicate(arr, 6);
for (int i = 0; i < 4; ++i)
{
	cout<<arr[i]<<endl;
}
	
}
