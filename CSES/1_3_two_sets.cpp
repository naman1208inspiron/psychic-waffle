#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = (n * (n + 1)) / 2;
        if (sum & 1)
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            vector<ll> v(n + 1, 0);
            ll setsum = sum / 2, curr = n;
            vector<ll> set1;
            while (setsum > 0)
            {
                if (setsum - curr >= 0)
                {
                    setsum -= curr;
                    set1.push_back(curr);
                    v[curr] = 1;
                }
                curr--;
            }
            cout << set1.size() << endl;
            for (ll it : set1)
                cout << it << " ";
            cout << endl;
            cout << n - set1.size() << endl;
            for (ll i = 1; i <= n; i++)
            {
                if (!v[i])
                    cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}