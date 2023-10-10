#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int rec_b(vector<int> &arr , int a , int low , int high)
{
    if(low > high) return -1;
    
    int mid = low + ((high -low) /2);
    cout << mid << endl;

    if(arr[mid] == a)
    {
        return mid;
    }

    else if(arr[mid] > a)
    {
        return rec_b(arr , a , low , mid -1);
    }

    else{
        return rec_b(arr , a , mid +1 , high);
    }
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
    cout << "enter element to search ";
    int a;
    cin >> a;
    int l = 0 , h =  arr.size() -1;
    int k = rec_b(arr , a , l ,n -1);
    cout<< k;
}