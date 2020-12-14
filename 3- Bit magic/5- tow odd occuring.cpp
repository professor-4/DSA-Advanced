#include <iostream>
#include <cmath>
using namespace std;

void  twoOddOccuring(int *arr){
	int x = 0, res1 = 0, res2=0;
	for (int i = 0; i < 8; ++i)
	{
		x  = x^arr[i];
	}
	int sn = x&(~(x-1));
	for (int i = 0; i < 8; ++i)
	{
		if ((arr[i]&sn)!=0){
			res1 = res1^arr[i];
		}
		else{
			res2 =  res2^arr[i];
		}
	}

	cout<<res1<<" "<<res2<<endl;



}


int main() {
	int arr[8] = {2,2,3,4,4,5,5,5};
	twoOddOccuring(arr);
  }
