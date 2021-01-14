#include<iostream>
#include<unordered_set>

using namespace std;

int intersection(int *a, int *b,int len_a, int len_b){

	unordered_set<int> m(a,a+len_a);

	for (int i = 0; i < len_b; ++i)
	{
		m.insert(b[i]);
	}
	return m.size();


}


int main(){
	int a[7] = {10, 15, 20, 15, 30, 30, 5};
	int m=7;
	int b[4] = {30, 5, 30, 80};
	int n=4;
	cout<<intersection(a,b,m,n);
}