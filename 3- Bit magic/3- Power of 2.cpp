#include <iostream>
#include <cmath>
using namespace std;

bool powOf2(int n){
	if (n==0){
		return false;
	}
	return((n&(n-1))==0);
}


int main() {
	int n=4;
	cout<<powOf2(n);
  }
