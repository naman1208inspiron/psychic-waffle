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
        int n;
        cin >> n;
        if (n == 2 || n == 3)
            cout << "NO SOLUTION";
        else if (n == 4)
            cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
        else
        {
            int o = 1, e = 2;
            while (o <= n)
            {
                cout << o << " ";
                o += 2;
            }
            while (e <= n)
            {
                cout << e << " ";
                e += 2;
            }
            cout << endl;
        }
    }

    return 0;
}