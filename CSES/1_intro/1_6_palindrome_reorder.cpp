#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // string m = string(3 , 'b');
    // cout<<m;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, ll> mp;
        multimap<ll, char> mm;
        for (ll i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        ll onecnt = 0;
        char onechar;
        string ans = "";
        for (auto it : mp)
        {
            if (it.second & 1)
            {
                onecnt++;
                onechar = it.first;
            }
            else ans += string(it.second/2, it.first);

        }
        if (onecnt > 1)
            cout << "NO SOLUTION";
        else
        {
            string anss = ans;
            reverse(ans.begin(), ans.end());
            string middle = string(mp[onechar], onechar);
            cout << ans + middle + anss;
        }
    }

    return 0;
}