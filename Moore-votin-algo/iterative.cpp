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

    int majority = arr[0];
    int occ = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] == arr[i -1])
        {
            occ += 1;
        }
        else if(occ == 0)
        {
            occ = 1;
            majority = arr[i];
        }
        else{
            occ -= 1;
        }
    }
    occ = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == majority) occ += 1;
    }

    if(occ> n /2) cout << majority;
    else cout << "No majority element";
}