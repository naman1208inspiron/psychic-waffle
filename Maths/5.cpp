#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        if(n==1) cout<<0;
        else cout<<min(2, n-1)*m;
        cout<<endl;
    }
    

    return 0;
}