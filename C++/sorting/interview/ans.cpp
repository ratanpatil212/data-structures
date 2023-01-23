#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, ans = 1, x;
        cin >> n;
        for (i = 0; i < n; ++i)
        {
            cin >> x;
            if (x < i)
                ans = 0;
        }
        if (ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}