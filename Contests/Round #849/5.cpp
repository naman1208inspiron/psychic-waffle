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

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, ans = 0;
        cin >> n;
        bool neg = false;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] < 0)
                neg = true;
        }
        if (!neg)
        {
            ans = sum;
        }
        else
        {
            vector<int> consSum;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] + v[i + 1] < 0)
                    consSum.push_back(v[i] + v[i + 1]);
            }
            if (consSum.size() == 0)
            {
                ans = sum;
            }
            else
            {
                int temp = sum;
                for (int i = 0; i < consSum.size(); i++)
                {
                    sum -= (consSum[i] * 2);
                    i++;
                }
                ans = max(ans, sum);
                sum = temp;
                for (int i = 1; i < consSum.size(); i++)
                {
                    sum -= (consSum[i] * 2);
                    i++;
                }
                ans = max(ans, sum);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}