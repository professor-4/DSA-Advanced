#include <iostream>
#include <cmath>
using namespace std;


int maxConsecutiveOnes(int arr[], int n){
	int res = 0;
	int curr = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==0){
			 curr =0;
		}
		else {
			curr++;
			res = max( curr, res);
		}
	}
	return res;

}





int main() {
	
      int arr[] = {1, 0, 1, 1, 0, 1, 1, 1, 0 };
      int n = sizeof(arr)/sizeof(arr[0]);

      cout<<maxConsecutiveOnes(arr, n);
    
}