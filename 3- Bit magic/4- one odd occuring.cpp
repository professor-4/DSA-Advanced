#include <iostream>
#include <cmath>
using namespace std;

int findodd(int *arr){
	int res = 0;
	for (int i = 0; i<5; i++){
		res = res^arr[i];
	}
	return res;

}


int main() {
	int arr[5] = {2,2,2,5,5};
	cout<<findodd(arr);
  }
