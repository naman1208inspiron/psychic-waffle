#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ld n, x; cin>>n>>x;
        cout<<ceil((n-2)/x)+1 <<endl;
    }
    

    return 0;
}