#include<iostream>
#include<cstring>
using namespace std;
int lg = 0;
int index = 0;

int indexMax(int *arr){
	for (int i=1; i<5; i++){
 		if (arr[i]>lg){
 			lg = arr[i];
 			index = i;
		}
 }
 return index;
}
int main(){
int arr[5]= {1,5,4,6,2};
cout<<"Index of Maximum number is : "<<indexMax(arr);
}
