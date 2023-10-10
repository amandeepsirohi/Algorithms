#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int b_search(vector<int> &arr , int a)
{
    int low = 0 , high = arr.size() -1;
    while(low <= high)
    {
        int mid = low + ((high -low) /2);
         if(arr[mid] == a)
        {
            return mid;
        }
        else if(arr[mid] < arr[low]) {
            low = mid +1 ;
        }
        {
            high = mid -1;
        }
    }
    return -1;
}

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
    int a;
    cout << "enter element to search";
    cin >> a;
    int k = b_search(arr , a);
    if(k == -1) cout << "Not found";
    else cout << "Found at " << k ;
}