#include <iostream>
#include <cmath>
using namespace std;

int maxSubArray(int arr[], int n){
	int res = arr[0];
	int maxending = arr[0];
	for (int i = 1; i < n; ++i)
	{
		maxending = max((maxending+arr[i]),arr[i]);
		res = max( res , maxending);
	}
	return res;

}





int main() {
	
      int arr[] = {1, -2, 3, -1, 2};
      int n = sizeof(arr)/sizeof(arr[0]);

      cout<<maxSubArray(arr, n);
    
}