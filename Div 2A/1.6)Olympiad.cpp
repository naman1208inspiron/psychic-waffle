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

    int n;
    cin >> n;
    vector<int> v(n);
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i])
        {
            st.insert(v[i]);
        }
    }
    cout << st.size() << endl;

    return 0;
}