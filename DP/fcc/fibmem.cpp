#include<iostream>

#include <unordered_map>
using namespace std;

unordered_map<int,int> mp;

long fib(int n, unordered_map<int, long> &mp)
{
    if (mp.find(n) != mp.end())
        return mp[n];
    if (n <= 2)
        return 1;
    mp[n] = fib(n - 1, mp) + fib(n - 2, mp);
    return mp[n];
}

int main() {
    cout << fib(6,mp) << " " << fib(7,mp) << " " << fib(80,mp) ;
}