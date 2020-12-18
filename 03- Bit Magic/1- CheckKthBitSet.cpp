#include <iostream>
#include <cmath>
using namespace std;

void kthBit(int n, int k){
	if (((n>>(k-1))&1)==1){
		cout<<"Yes!!"<<endl;
	}
	else cout <<"No";
}


int main() {
	int n=5,k=3;
	kthBit(n,k);
  }
