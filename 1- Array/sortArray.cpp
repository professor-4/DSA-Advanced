#include<iostream>
#include<cstring>
using namespace std;

bool insort(int *arr, int n){

	for (int i = 1; i < n; i++)
	{
		if (arr[i]<arr[i-1]){
			return false;
		}
	}
	return true;
}

int main(){
 int arr[5]= {1,2,5,6,7};


	if (insort(arr,5)== true){
		cout<<"Array is sorted"<<endl;
		}
	else {
		cout<<"Arrya is not sorted"<<endl ;
		}
	
}
