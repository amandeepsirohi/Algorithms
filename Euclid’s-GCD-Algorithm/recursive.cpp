#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int gcd(int a , int b)
{
    if(a == 0) return b;

    return gcd(b % a , a);
}

int main()
{
    cout << "enter 2 numbers ";
    int a , b;
    cin >> a >> b;
    cout << gcd(a , b);
}