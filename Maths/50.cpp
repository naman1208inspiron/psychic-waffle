#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int maxx(int a){
    int val= 0;
    while(a){
        val= max(a%10, a);
        a/=10;
    }
    return val;
}

int minn(int a){
    int val= INT_MAX;
    while(a){
        val= min(a%10, a);
        a/=10;
    }
    return val;
}
int solve()
{
    int a, k;
    cin >> a >> k;
    if (k == 1) return a;
    while(--k){
        a+= minn(a)*max(a);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}