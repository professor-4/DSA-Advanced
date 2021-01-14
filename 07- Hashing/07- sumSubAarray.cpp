#include <bits/stdc++.h>
using namespace std;

int isSumSubarray(int arr[], int n, int sum)
{
    unordered_set<int> us;
    int prefix_sum = 0;
    us.insert(0);
    for(int i = 0; i < n; i++)
    {   
        if(prefix_sum == sum){
            return true;
        }
        prefix_sum += arr[i];
        if(us.find(prefix_sum - sum) != us.end())
          return 1;
        us.insert(prefix_sum);
    }
    return 0;
    
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int sum = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << isSumSubarray(arr, n,sum);
}