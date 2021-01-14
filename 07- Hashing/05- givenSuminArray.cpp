#include<iostream>
#include<unordered_set>

using namespace std;

int ispair(int *arr, int n, int sum){

	unordered_set<int> s;
	for (int i = 0; i < n; ++i)
	{
		if (s.find(sum-arr[i])!=s.end())
		{
			return true;
		}
		else s.insert(arr[i]);
	}
	return false;

}


int main(){
	int a[7] = {10, 15, 20, 15, 30, 30, 5};
	int n=7;
	int sum=41;
	cout<<ispair(a,n,sum);
}