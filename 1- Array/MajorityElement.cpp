#include <iostream>
#include <cmath>
using namespace std;


int findMajority(int arr[], int n)
{
	int res = 0;
	int count = 1;

	for(int i = 1; i < n; i++)
	{
		if (arr[res]==arr[i]){
			count ++;
		}
		else {count--;}


		if (count==0){
			res = i;
			count =1;
		}
		
	}
	count =0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==arr[res]){
			count ++;
		}
		
	}
	if (count<= n/2){
			return -1;
		}
	return res;
}



int main() {
	
     int arr[] = {6, 8, 4, 8, 8}, n = 5;

     cout<<findMajority(arr, n);
    
}