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
    cout << "enter K";
    int k;
    cin >> k;
    if(k > n) return -1;
    priority_queue<int> pq;
    for(int i = 0 ; i < n ; i++)
    {
        pq.push(arr[i]);
        if(pq.size() > k)
        {
            pq.pop();
        }
    }
    cout << arr[k];
}