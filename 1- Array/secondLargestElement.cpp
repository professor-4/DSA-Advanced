#include<iostream>
#include<cstring>
using namespace std;
int lg = 0;
int index = 0;

int secondLargest(int arr []){
	int res = -1, largest = 0;

	for (int i =0; i<5; i++){
		if (arr[i]>arr[largest]){
			res = largest;
			largest = i;
		}
		else if (arr[i]!= arr[largest]){
			if (arr[i]>arr[res]|| res==-1){
				res = i; 
			}
		}
	}
	return res;
}

int main(){
int arr[5]= {1,4,2,6,5};

cout<<"Index of second largest number is : "<<secondLargest(arr);
 
}
