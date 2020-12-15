
#include <iostream>
#include <cmath>
using namespace std;

void printArray(int **arr,int m,  int n){
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
	}
}





int main() {

	int m = 3, n = 2;
	int *arr[m];
	for (int i = 0; i < m; ++i)
	{
		arr[i] = new int[n];
		


	}
	printArray( *arr[m], m ,n);
}
