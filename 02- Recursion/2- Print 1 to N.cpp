#include <iostream>
#include <cmath>
using namespace std;

void printNto1(int  n){
	if (n==0){
		return;
	}
	
	printNto1(n-1);
	cout<<n<<" ";
}


int main() {
	
    int n =  10;
    printNto1(n);
}
