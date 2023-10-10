#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
    std::vector<int> arr;
    int n;
    std::cin >> n;
    for(int i = 0 ; i < n ; i++)
    { 
    int k; 
    std::cin >> k;
    arr.push_back(k);
    }
    int max_sum = INT_MIN;
    int sum_far = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum_far += arr[i];
        sum_far = max(arr[i] , sum_far);
        max_sum = max(max_sum , sum_far);
    }
    cout << max_sum;
}