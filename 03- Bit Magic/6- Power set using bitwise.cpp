#include <iostream>
#include <cmath>
using namespace std;

void printPowerSet(string s){
	int n = s.length();
	int powSize = pow(2,n);
	for (int counter = 0; counter < powSize; ++counter)
	{
		for (int i = 0; i < n; ++i)
		{
			if((counter&(1<<i))!=0){
				cout<<s[i];
			}
		}
		cout<<endl;
	}

}


int main() {
	string s ="abc";
	printPowerSet(s);
  }
